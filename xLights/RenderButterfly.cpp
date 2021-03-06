/***************************************************************
 * Name:      RenderButterfly.cpp
 * Purpose:   Implements RGB effects
 * Author:    Matt Brown (dowdybrown@yahoo.com)
 * Created:   2012-12-23
 * Copyright: 2012 by Matt Brown
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
#include <cmath>
#include "RgbEffects.h"

/*
01) x*y^3-y*x^3
(02) (x^2+3*y^2)*e^(-x^2-y^2)
	(03) -x*y*e^(-x^2-y^2)
	(04) -1/(x^2+y^2)
	(05) cos(abs(x)+abs(y))
	(06) cos(abs(x)+abs(y))*(abs(x)+abs(y))
*/

void RgbEffects::RenderButterfly(int ColorScheme, int Style, int Chunks, int Skip, int ButterflyDirection)
{
    int x,y,d,xc,yc,x0,y0;
    double n,x1,y1,f;
    double h=0.0;
    double  fractpart, intpart;
    static const double pi2=6.283185307;
    xlColour color;
    wxImage::HSVValue hsv;
    int maxframe=BufferHt*2;
    int frame=(BufferHt * state / 200)%maxframe;
    double offset=double(state)/200.0;
    if(ButterflyDirection==1) offset = -offset;
    xc=BufferWi/2;
    yc=BufferHt/2;
    for (x=0; x<BufferWi; x++)
    {
        for (y=0; y<BufferHt; y++)
        {
            switch (Style)
            {
            case 1:
//  http://mathworld.wolfram.com/ButterflyFunction.html
                n = abs((x*x - y*y) * sin (offset + ((x+y)*pi2 / float(BufferHt+BufferWi))));
                d = x*x + y*y;

                //  This section is to fix the colors on pixels at {0,1} and {1,0}
                x0=x+1;
                y0=y+1;
                if((x==0 && y==1))
                {
                    n = abs((x*x - y0*y0) * sin (offset + ((x+y0)*pi2 / float(BufferHt+BufferWi))));
                    d = x*x + y0*y0;
                }
                if((x==1 && y==0))
                {
                    n = abs((x0*x0 - y*y) * sin (offset + ((x0+y)*pi2 / float(BufferHt+BufferWi))));
                    d = x0*x0 + y*y;
                }
                // end of fix

                h=d>0.001 ? n/d : 0.0;
                break;

            case 2:
                f=(frame < maxframe/2) ? frame+1 : maxframe - frame;
                x1=(double(x)-BufferWi/2.0)/f;
                y1=(double(y)-BufferHt/2.0)/f;
                h=sqrt(x1*x1+y1*y1);
                break;

            case 3:
                f=(frame < maxframe/2) ? frame+1 : maxframe - frame;
                f=f*0.1+double(BufferHt)/60.0;
                x1 = (x-BufferWi/2.0)/f;
                y1 = (y-BufferHt/2.0)/f;
                h=sin(x1) * cos(y1);
                break;

            case 4:
                //  http://mathworld.wolfram.com/ButterflyFunction.html
                n = ((x*x - y*y) * sin (offset + ((x+y)*pi2 / float(BufferHt+BufferWi))));
                d = x*x + y*y;

                //  This section is to fix the colors on pixels at {0,1} and {1,0}
                x0=x+1;
                y0=y+1;
                if((x==0 && y==1))
                {
                    n = ((x*x - y0*y0) * sin (offset + ((x+y0)*pi2 / float(BufferHt+BufferWi))));
                    d = x*x + y0*y0;
                }
                if((x==1 && y==0))
                {
                    n = ((x0*x0 - y*y) * sin (offset + ((x0+y)*pi2 / float(BufferHt+BufferWi))));
                    d = x0*x0 + y*y;
                }
                // end of fix

                h=d>0.001 ? n/d : 0.0;
                fractpart = modf (h , &intpart);
                h=fractpart;
                if(h<0) h=1.0+h;
                break;

            case 5:
                //  http://mathworld.wolfram.com/ButterflyFunction.html
                n = abs((x*x - y*y) * sin (offset + ((x+y)*pi2 / float(BufferHt*BufferWi))));
                d = x*x + y*y;

                //  This section is to fix the colors on pixels at {0,1} and {1,0}
                x0=x+1;
                y0=y+1;
                if((x==0 && y==1))
                {
                    n = abs((x*x - y0*y0) * sin (offset + ((x+y0)*pi2 / float(BufferHt*BufferWi))));
                    d = x*x + y0*y0;
                }
                if((x==1 && y==0))
                {
                    n = abs((x0*x0 - y*y) * sin (offset + ((x0+y)*pi2 / float(BufferHt*BufferWi))));
                    d = x0*x0 + y*y;
                }
                // end of fix

                h=d>0.001 ? n/d : 0.0;
                break;

            }
            hsv.saturation=1.0;
            hsv.value=1.0;
            if (Chunks <= 1 || int(h*Chunks) % Skip != 0)
            {
                if (ColorScheme == 0)
                {
                    hsv.hue=h;
                    SetPixel(x,y,hsv);
                }
                else
                {
                    GetMultiColorBlend(h,false,color);
                    SetPixel(x,y,color);
                }
            }
        }
    }
}
