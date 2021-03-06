/***************************************************************
 * Name:      RenderGalaxy.cpp
 * Purpose:   Implements RGB effects
 * Author:    Gil Jones (gil@threebuttes.com)
 * Created:   2015-2-27
 * Copyright: 2015 by Gil Jones
 * License:
     This file is part of xLights.

    xLights is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    xLights is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with xLights.  If not, see <http://www.gnu.org/licenses/>.
**************************************************************/

#include "RgbEffects.h"
#include <cmath>

const double PI  =3.141592653589793238463;
#define ToRadians(x) ((double)x * PI / (double)180.0)

double calcAccel(double ratio, double accel)
{
    accel /= 3.0;
    if( accel == 0 ) return 1.0;
    else if( accel > 0 ) return std::pow(ratio, accel);
    else return (1 - std::pow(1 - ratio, -accel));
}

void RgbEffects::RenderGalaxy(int center_x, int center_y, int start_radius, int end_radius, int start_angle, int revolutions,
                              int start_width, int end_width, int duration, int acceleration, bool reverse_dir, bool blend_edges, bool inward )
{
    double step = 0.5;
    std::vector< std::vector<double> > temp_colors_pct(BufferWi, std::vector<double>(BufferHt));
    std::vector< std::vector<double> > pixel_age(BufferWi, std::vector<double>(BufferHt));
    
    double eff_pos = GetEffectTimeIntervalPosition();
    int num_colors = palette.Size();
    xlColor color, c_old, c_new;
    HSVValue hsv1;
    double eff_pos_adj = eff_pos * calcAccel(eff_pos, acceleration);
    double revs = (double)revolutions;

    double pos_x = BufferWi * center_x/100.0;
    double pos_y = BufferHt * center_y/100.0;

    double head_duration = duration/100.0;    // time the head is in the frame
    double tail_length = revs * (1.0 - head_duration);
    double color_length = tail_length / num_colors;
    if(color_length < 1.0) color_length = 1.0;

    double tail_end_of_tail = ((revs + tail_length) * eff_pos_adj) - tail_length;
    double head_end_of_tail = tail_end_of_tail + tail_length;

    double radius1 = start_radius;
    double radius2 = end_radius;
    double width1 = start_width;
    double width2 = end_width;

    for( int x = 0; x < BufferWi; x++ )
    {
        for( int y = 0; y < BufferHt; y++ )
        {
            temp_colors_pct[x][y] = 0.0;
            pixel_age[x][y] = 0.0;
        }
    }
    ClearTempBuf();

    if( !inward )
    {
        double last_check = std::max(0.0, tail_end_of_tail) + (double)start_angle;
        for( double i = std::max(0.0, tail_end_of_tail); i <= std::min(head_end_of_tail,revs); i += step )
        {
            double adj_angle = i + (double)start_angle;
            if( reverse_dir )
            {
                adj_angle *= -1.0;
            }
            double color_val = (head_end_of_tail-i) / color_length;
            int color_int = (int)color_val;
            double color_pct = color_val - (double)color_int;
            int color2 = std::min(color_int+1, num_colors-1);
            if( color_int < color2 )
            {
                Get2ColorBlend(color_int, color2, std::min( color_pct, 1.0), color);
            }
            else
            {
                palette.GetColor(color2, color);
            }
            HSVValue hsv = wxImage::RGBtoHSV(color);
            double full_brightness = hsv.value;
            double pct = i/revs;
            double current_radius = radius2 * pct + radius1 * (1.0 - pct);
            double current_width = width2 * pct + width1 * (1.0 - pct);
            double half_width = current_width / 2.0;
            double inside_radius = current_radius - half_width;
            for( double r = inside_radius; ; r += 0.5 )
            {
                if( r > current_radius ) r = current_radius;
                double x1 = std::sin(ToRadians(adj_angle)) * r + (double)pos_x;
                double y1 = std::cos(ToRadians(adj_angle)) * r + (double)pos_y;
                double outside_radius = current_radius + (current_radius - r);
                double x2 = std::sin(ToRadians(adj_angle)) * outside_radius + (double)pos_x;
                double y2 = std::cos(ToRadians(adj_angle)) * outside_radius + (double)pos_y;
                double color_pct2 = (r-inside_radius)/(current_radius-inside_radius);
                if( blend_edges )
                {
                    if( hsv.value > 0.0 )
                    {
                        if ((int)x1 >= 0 && (int)x1 < BufferWi && (int)y1 >= 0 && (int)y1 < BufferHt)
                        {
                            SetTempPixel((int)x1,(int)y1,color);
                            temp_colors_pct[(int)x1][(int)y1] = color_pct2;
                            pixel_age[(int)x1][(int)y1] = adj_angle;
                        }
                        if ((int)x2 >= 0 && (int)x2 < BufferWi && (int)y2 >= 0 && (int)y2 < BufferHt)
                        {
                            SetTempPixel((int)x2,(int)y2,color);
                            temp_colors_pct[(int)x2][(int)y2] = color_pct2;
                            pixel_age[(int)x2][(int)y2] = adj_angle;
                        }
                    }
                }
                else
                {
                    hsv.value = full_brightness * color_pct2;
                    if( hsv.value > 0.0 )
                    {
                        SetPixel(x1,y1,hsv);
                        SetPixel(x2,y2,hsv);
                    }
                }
                if( r >= current_radius ) break;
            }
            // blend old data down into final buffer
            if( blend_edges && (adj_angle - last_check >= 90.0) )
            {
                for( int x = 0; x < BufferWi; x++ )
                {
                    for( int y = 0; y < BufferHt; y++ )
                    {
                        if( temp_colors_pct[x][y] > 0.0 && (adj_angle - pixel_age[x][y] >= 180.0) )
                        {
                                GetTempPixel(x,y,c_new);
                                GetPixel(x,y,c_old);
                                Get2ColorAlphaBlend(c_old, c_new, temp_colors_pct[x][y], color);
                                SetPixel(x,y,color);
                                temp_colors_pct[x][y] = 0.0;
                                pixel_age[x][y] = 0.0;
                        }
                    }
                }
                last_check = adj_angle;
            }
        }
    }
    else
    {
        double last_check = std::min(head_end_of_tail,revs) + (double)start_angle;
        for( double i = std::min(head_end_of_tail,revs); i >= std::max(0.0, tail_end_of_tail); i -= step )
        {
            double adj_angle = i + (double)start_angle;
            if( reverse_dir )
            {
                adj_angle *= -1.0;
            }
            double color_val = (head_end_of_tail-i) / color_length;
            int color_int = (int)color_val;
            double color_pct = color_val - (double)color_int;
            int color2 = std::min(color_int+1, num_colors-1);
            if( color_int < color2 )
            {
                Get2ColorBlend(color_int, color2, std::min( color_pct, 1.0), color);
            }
            else
            {
                palette.GetColor(color2, color);
            }
            HSVValue hsv = wxImage::RGBtoHSV(color);
            double full_brightness = hsv.value;
            double pct = i/revs;
            double current_radius = radius2 * pct + radius1 * (1.0 - pct);
            double current_width = width2 * pct + width1 * (1.0 - pct);
            double half_width = current_width / 2.0;
            double inside_radius = current_radius - half_width;
            for( double r = inside_radius; ; r += 0.5 )
            {
                if( r > current_radius ) r = current_radius;
                double x1 = std::sin(ToRadians(adj_angle)) * r + (double)pos_x;
                double y1 = std::cos(ToRadians(adj_angle)) * r + (double)pos_y;
                double outside_radius = current_radius + (current_radius - r);
                double x2 = std::sin(ToRadians(adj_angle)) * outside_radius + (double)pos_x;
                double y2 = std::cos(ToRadians(adj_angle)) * outside_radius + (double)pos_y;
                double color_pct2 = (r-inside_radius)/(current_radius-inside_radius);
                if( blend_edges )
                {
                    if( hsv.value > 0.0 )
                    {
                        if ((int)x1 >= 0 && (int)x1 < BufferWi && (int)y1 >= 0 && (int)y1 < BufferHt)
                        {
                            SetTempPixel((int)x1,(int)y1,color);
                            temp_colors_pct[(int)x1][(int)y1] = color_pct2;
                            pixel_age[(int)x1][(int)y1] = adj_angle;
                        }
                        if ((int)x2 >= 0 && (int)x2 < BufferWi && (int)y2 >= 0 && (int)y2 < BufferHt)
                        {
                            SetTempPixel((int)x2,(int)y2,color);
                            temp_colors_pct[(int)x2][(int)y2] = color_pct2;
                            pixel_age[(int)x2][(int)y2] = adj_angle;
                        }
                    }
                }
                else
                {
                    hsv.value = full_brightness * color_pct2;
                    if( hsv.value > 0.0 )
                    {
                        SetPixel(x1,y1,hsv);
                        SetPixel(x2,y2,hsv);
                    }
                }
                if( r >= current_radius ) break;
            }
            // blend old data down into final buffer
            if( blend_edges && (last_check - adj_angle >= 90.0) )
            {
                for( int x = 0; x < BufferWi; x++ )
                {
                    for( int y = 0; y < BufferHt; y++ )
                    {
                        if( temp_colors_pct[x][y] > 0.0 && (pixel_age[x][y] - adj_angle >= 180.0) )
                        {
                                GetTempPixel(x,y,c_new);
                                GetPixel(x,y,c_old);
                                Get2ColorAlphaBlend(c_old, c_new, temp_colors_pct[x][y], color);
                                SetPixel(x,y,color);
                                temp_colors_pct[x][y] = 0.0;
                                pixel_age[x][y] = 0.0;
                        }
                    }
                }
                last_check = adj_angle;
            }
        }
    }

    // blend remaining data down into final buffer
    if( blend_edges )
    {
        for( int x = 0; x < BufferWi; x++ )
        {
            for( int y = 0; y < BufferHt; y++ )
            {
                if( temp_colors_pct[x][y] > 0.0 )
                {
                    GetTempPixel(x,y,c_new);
                    GetPixel(x,y,c_old);
                    Get2ColorAlphaBlend(c_old, c_new, temp_colors_pct[x][y], color);
                    SetPixel(x,y,color);
                }
            }
        }
    }

}

