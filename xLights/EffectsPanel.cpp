#include <wx/msgdlg.h>
#include <wx/fontpicker.h>
#include <wx/filepicker.h>
#include "EffectsPanel.h"
#include "../include/padlock16x16-green.xpm" //-DJ
#include "../include/padlock16x16-red.xpm" //-DJ
#include "../include/padlock16x16-blue.xpm" //-DJ

#include "../include/bars.xpm"
#include "../include/butterfly.xpm"
#include "../include/circles.xpm"
#include "../include/ColorWash.xpm"
#include "../include/corofaces.xpm"
#include "../include/curtain.xpm"
#include "../include/faces.xpm"
#include "../include/fire.xpm"
#include "../include/fireworks.xpm"
#include "../include/garlands.xpm"
#include "../include/glediator.xpm"
#include "../include/life.xpm"
#include "../include/meteors.xpm"
#include "../include/morph.xpm"

#include "../include/Off.xpm"
#include "../include/On.xpm"
#include "../include/piano.xpm"
#include "../include/pictures.xpm"

#include "../include/pinwheel.xpm"
#include "../include/ripple.xpm"
#include "../include/shimmer.xpm"
#include "../include/singleStrand.xpm"
#include "../include/snowflakes.xpm"
#include "../include/snowstorm.xpm"
#include "../include/spirals.xpm"
#include "../include/spirograph.xpm"
#include "../include/strobe.xpm"
#include "../include/text.xpm"
#include "../include/tree.xpm"
#include "../include/twinkle.xpm"
#include "../include/wave.xpm"

#include "../include/control-play-blue-icon.xpm"
#include "../include/control-play-icon.xpm"
#include "../include/control-pause-blue-icon.xpm"
#include "../include/control-pause-icon.xpm"
#include "../include/control-stop-blue-icon.xpm"
#include "../include/control-stop-icon.xpm"

//  New icons from sean 01-17-2015

#include "../include/zoom-out-24.xpm"
#include "../include/zoom-in-24.xpm"
#include "../include/stop-24.xpm"
#include "../include/stop-24_off.xpm"
#include "../include/save-as-24.xpm"
#include "../include/settings-24.xpm"
#include "../include/trash-24.xpm"
#include "../include/search-24.xpm"
#include "../include/save-24.xpm"
#include "../include/replay-24.xpm"
#include "../include/play-24.xpm"
#include "../include/play-24_off.xpm"
#include "../include/pause-24.xpm"
#include "../include/pause-24_off.xpm"
#include "../include/move-24.xpm"
#include "../include/home-24.xpm"
#include "../include/gears-24.xpm"
#include "../include/forward-24.xpm"
#include "../include/forward-24_off.xpm"
#include "../include/folder.xpm"
#include "../include/eye-open-24.xpm"
#include "../include/backward-24.xpm"
#include "../include/backward-24_off.xpm"

//(*InternalHeaders(EffectsPanel)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(EffectsPanel)
const long EffectsPanel::ID_STATICTEXT100 = wxNewId();
const long EffectsPanel::ID_STATICTEXT120 = wxNewId();
const long EffectsPanel::ID_PANEL19 = wxNewId();
const long EffectsPanel::ID_STATICTEXT75 = wxNewId();
const long EffectsPanel::IDD_SLIDER_Eff_On_Start = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Eff_On_Start = wxNewId();
const long EffectsPanel::IDD_SLIDER_Eff_On_End = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Eff_On_End = wxNewId();
const long EffectsPanel::ID_PANEL25 = wxNewId();
const long EffectsPanel::ID_STATICTEXT25 = wxNewId();
const long EffectsPanel::ID_SLIDER_Bars_BarCount = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Bars_BarCount = wxNewId();
const long EffectsPanel::ID_STATICTEXT26 = wxNewId();
const long EffectsPanel::ID_CHOICE_Bars_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Bars_Direction = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Bars_Highlight = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Bars_Highlight = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Bars_3D = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Bars_3D = wxNewId();
const long EffectsPanel::ID_PANEL8 = wxNewId();
const long EffectsPanel::ID_STATICTEXT27 = wxNewId();
const long EffectsPanel::ID_CHOICE_Butterfly_Colors = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Butterfly_Color = wxNewId();
const long EffectsPanel::ID_STATICTEXT28 = wxNewId();
const long EffectsPanel::ID_SLIDER_Butterfly_Style = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Butterfly_Style = wxNewId();
const long EffectsPanel::ID_STATICTEXT30 = wxNewId();
const long EffectsPanel::ID_SLIDER_Butterfly_Chunks = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Butterfly_Chunks = wxNewId();
const long EffectsPanel::ID_STATICTEXT31 = wxNewId();
const long EffectsPanel::ID_SLIDER_Butterfly_Skip = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Butterfly_Skip = wxNewId();
const long EffectsPanel::ID_STATICTEXT60 = wxNewId();
const long EffectsPanel::ID_CHOICE_Butterfly_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON9 = wxNewId();
const long EffectsPanel::ID_PANEL10 = wxNewId();
const long EffectsPanel::ID_STATICTEXT137 = wxNewId();
const long EffectsPanel::ID_SLIDER_Circles_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Circles_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT138 = wxNewId();
const long EffectsPanel::ID_SLIDER_Circles_Size = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Circles_Size = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Bounce = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Bounce = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Radial = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Radial = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Plasma = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Plasma = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Radial_3D = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Radial_3D = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Bubbles = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CirclesBubbles = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Collide = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Collide = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Random_m = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Random_m = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Circles_Linear_Fade = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Circles_Linear_Fade = wxNewId();
const long EffectsPanel::ID_PANEL37 = wxNewId();
const long EffectsPanel::ID_STATICTEXT21 = wxNewId();
const long EffectsPanel::ID_SLIDER_ColorWash_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_ColorWash_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT33 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_ColorWash_VFade = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_ColorWash_VFade = wxNewId();
const long EffectsPanel::ID_STATICTEXT32 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_ColorWash_HFade = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_ColorWash_HFade = wxNewId();
const long EffectsPanel::ID_PANEL5 = wxNewId();
const long EffectsPanel::ID_STATICTEXT73 = wxNewId();
const long EffectsPanel::ID_CHOICE_CoroFaces_Phoneme = wxNewId();
const long EffectsPanel::ID_STATICTEXT64 = wxNewId();
const long EffectsPanel::ID_CHOICE_CoroFaces_Eyes = wxNewId();
const long EffectsPanel::ID_STATICTEXT66 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_CoroFaces_Outline = wxNewId();
const long EffectsPanel::ID_PANEL28 = wxNewId();
const long EffectsPanel::ID_STATICTEXT6 = wxNewId();
const long EffectsPanel::ID_CHOICE_Curtain_Edge = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Curtain_Edge = wxNewId();
const long EffectsPanel::ID_STATICTEXT5 = wxNewId();
const long EffectsPanel::ID_CHOICE_Curtain_Effect = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Curtain_Effect = wxNewId();
const long EffectsPanel::ID_STATICTEXT7 = wxNewId();
const long EffectsPanel::ID_SLIDER_Curtain_Swag = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Curtain_Swag = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Curtain_Repeat = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Curtain_Repeat = wxNewId();
const long EffectsPanel::ID_PANEL1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT118 = wxNewId();
const long EffectsPanel::ID_STATICTEXT15 = wxNewId();
const long EffectsPanel::ID_CHOICE_Faces_Phoneme = wxNewId();
const long EffectsPanel::ID_PANEL6 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_CenterX = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_CenterX = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_CenterX = wxNewId();
const long EffectsPanel::ID_STATICTEXT128 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_CenterY = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_CenterY = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_CenterY = wxNewId();
const long EffectsPanel::ID_STATICTEXT136 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Start_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Start_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Start_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT142 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Start_Angle = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Start_Angle = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Start_Angle = wxNewId();
const long EffectsPanel::ID_STATICTEXT141 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_End_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_End_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_End_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT145 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Revolutions = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Revolutions = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Revolutions = wxNewId();
const long EffectsPanel::ID_PANEL38 = wxNewId();
const long EffectsPanel::ID_STATICTEXT148 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Num_Blades = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Num_Blades = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Num_Blades = wxNewId();
const long EffectsPanel::ID_STATICTEXT149 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Blade_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Blade_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Blade_Width = wxNewId();
const long EffectsPanel::ID_STATICTEXT150 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Blade_Angle = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Blade_Angle = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Blade_Angle = wxNewId();
const long EffectsPanel::ID_STATICTEXT143 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Num_Elements = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Num_Elements = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Num_Elements = wxNewId();
const long EffectsPanel::ID_STATICTEXT144 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Element_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Element_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Element_Width = wxNewId();
const long EffectsPanel::ID_PANEL42 = wxNewId();
const long EffectsPanel::ID_STATICTEXT146 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Duration = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Duration = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Duration = wxNewId();
const long EffectsPanel::ID_STATICTEXT147 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fan_Accel = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Fan_Accel = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fan_Accel = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Fan_Reverse = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Fan_Blend_Edges = wxNewId();
const long EffectsPanel::ID_PANEL41 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK_Fan = wxNewId();
const long EffectsPanel::ID_SCROLLEDWINDOW_FAN = wxNewId();
const long EffectsPanel::ID_STATICTEXT84 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fire_Height = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fire_Height = wxNewId();
const long EffectsPanel::ID_STATICTEXT133 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fire_HueShift = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fire_HueShift = wxNewId();
const long EffectsPanel::ID_STATICTEXT135 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Fire_GrowFire = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Fire_GrowFire = wxNewId();
const long EffectsPanel::ID_PANEL12 = wxNewId();
const long EffectsPanel::ID_STATICTEXT95 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fireworks_Number_Explosions = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fireworks_Number_Explosions = wxNewId();
const long EffectsPanel::ID_STATICTEXT92 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fireworks_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fireworks_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT94 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fireworks_Velocity = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fireworks_Velocity = wxNewId();
const long EffectsPanel::ID_STATICTEXT96 = wxNewId();
const long EffectsPanel::ID_SLIDER_Fireworks_Fade = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Fireworks_Fade = wxNewId();
const long EffectsPanel::ID_PANEL36 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_CenterX = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_CenterX = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_CenterX = wxNewId();
const long EffectsPanel::ID_STATICTEXT2 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_CenterY = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_CenterY = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_CenterY = wxNewId();
const long EffectsPanel::ID_STATICTEXT125 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Start_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Start_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT127 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Start_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Start_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Width = wxNewId();
const long EffectsPanel::ID_STATICTEXT126 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Start_Angle = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Start_Angle = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Angle = wxNewId();
const long EffectsPanel::ID_PANEL29 = wxNewId();
const long EffectsPanel::ID_STATICTEXT130 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_End_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_End_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_End_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT132 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_End_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_End_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_End_Width = wxNewId();
const long EffectsPanel::ID_STATICTEXT134 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Revolutions = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Revolutions = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Revolutions = wxNewId();
const long EffectsPanel::ID_PANEL31 = wxNewId();
const long EffectsPanel::ID_STATICTEXT139 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Duration = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Duration = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Duration = wxNewId();
const long EffectsPanel::ID_STATICTEXT140 = wxNewId();
const long EffectsPanel::ID_SLIDER_Galaxy_Accel = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Galaxy_Accel = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Galaxy_Accel = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Galaxy_Reverse = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Galaxy_Blend_Edges = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Galaxy_Inward = wxNewId();
const long EffectsPanel::ID_PANEL32 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK_Galaxy = wxNewId();
const long EffectsPanel::ID_SCROLLEDWINDOW1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT34 = wxNewId();
const long EffectsPanel::ID_SLIDER_Garlands_Type = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Garlands_Type = wxNewId();
const long EffectsPanel::ID_STATICTEXT35 = wxNewId();
const long EffectsPanel::ID_SLIDER_Garlands_Spacing = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Garlands_Spacing = wxNewId();
const long EffectsPanel::ID_PANEL14 = wxNewId();
const long EffectsPanel::ID_BUTTON_GLED_FILE = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON10 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Glediator_Filename = wxNewId();
const long EffectsPanel::ID_PANEL17 = wxNewId();
const long EffectsPanel::ID_STATICTEXT36 = wxNewId();
const long EffectsPanel::ID_SLIDER_Life_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Life_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT37 = wxNewId();
const long EffectsPanel::ID_SLIDER_Life_Seed = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Life_Seed = wxNewId();
const long EffectsPanel::ID_PANEL16 = wxNewId();
const long EffectsPanel::ID_STATICTEXT39 = wxNewId();
const long EffectsPanel::ID_CHOICE_Meteors_Type = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Meteors_Type = wxNewId();
const long EffectsPanel::ID_STATICTEXT129 = wxNewId();
const long EffectsPanel::ID_CHOICE_Meteors_Effect = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Meteors_Effect = wxNewId();
const long EffectsPanel::ID_STATICTEXT41 = wxNewId();
const long EffectsPanel::ID_SLIDER_Meteors_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Meteors_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT43 = wxNewId();
const long EffectsPanel::ID_SLIDER_Meteors_Length = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Meteors_Length = wxNewId();
const long EffectsPanel::ID_STATICTEXT131 = wxNewId();
const long EffectsPanel::ID_SLIDER_Meteors_Swirl_Intensity = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Meteors_Swirl_Intensity = wxNewId();
const long EffectsPanel::ID_PANEL18 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_Start_X1 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_Start_X1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_Start_X1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT3 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_Start_Y1 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_Start_Y1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_Start_Y1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT61 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_Start_X2 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_Start_X2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_Start_X2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT102 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_Start_Y2 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_Start_Y2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_Start_Y2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT115 = wxNewId();
const long EffectsPanel::ID_SLIDER_MorphStartLength = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_MorphStartLength = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_MorphStartLength = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Morph_Start_Link = wxNewId();
const long EffectsPanel::ID_PANEL4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT116 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_End_X1 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_End_X1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_End_X1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT117 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_End_Y1 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_End_Y1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_End_Y1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT119 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_End_X2 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_End_X2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_End_X2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT121 = wxNewId();
const long EffectsPanel::ID_SLIDER_Morph_End_Y2 = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Morph_End_Y2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Morph_End_Y2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT122 = wxNewId();
const long EffectsPanel::ID_SLIDER_MorphEndLength = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_MorphEndLength = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_MorphEndLength = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Morph_End_Link = wxNewId();
const long EffectsPanel::ID_PANEL27 = wxNewId();
const long EffectsPanel::ID_STATICTEXT123 = wxNewId();
const long EffectsPanel::ID_SLIDER_MorphDuration = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_MorphDuration = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_MorphDuration = wxNewId();
const long EffectsPanel::ID_STATICTEXT124 = wxNewId();
const long EffectsPanel::ID_SLIDER_MorphAccel = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_MorphAccel = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_MorphAccel = wxNewId();
const long EffectsPanel::ID_CHECKBOX_ShowHeadAtStart = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_ShowHeadAtStart = wxNewId();
const long EffectsPanel::ID_CHECKBOX_MorphUseHeadStartColor = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_MorphUseHeadStartColor = wxNewId();
const long EffectsPanel::ID_CHECKBOX_MorphUseHeadEndColor = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_MorphUseHeadEndColor = wxNewId();
const long EffectsPanel::ID_PANEL30 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK_Morph = wxNewId();
const long EffectsPanel::ID_PANEL_Morph = wxNewId();
const long EffectsPanel::ID_STATICTEXT1 = wxNewId();
const long EffectsPanel::ID_CHOICE_Piano_Style = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Piano_Style = wxNewId();
const long EffectsPanel::ID_STATICTEXT_Piano_NumKeys = wxNewId();
const long EffectsPanel::ID_SLIDER_Piano_NumKeys = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_NumKeys = wxNewId();
const long EffectsPanel::ID_STATICTEXT_Piano_NumRows = wxNewId();
const long EffectsPanel::ID_SLIDER_Piano_KeyWidth = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_NumRows = wxNewId();
const long EffectsPanel::ID_STATICTEXT20 = wxNewId();
const long EffectsPanel::ID_CHOICE_PianoPlacement = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_KeyPlacement = wxNewId();
const long EffectsPanel::ID_BUTTON_Piano_CueFilename = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_Filename = wxNewId();
const long EffectsPanel::ID_STATICTEXT14 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Piano_CueFilename = wxNewId();
const long EffectsPanel::ID_PANEL9 = wxNewId();
const long EffectsPanel::ID_BUTTON1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_MapFilename = wxNewId();
const long EffectsPanel::ID_STATICTEXT13 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Piano_MapFilename = wxNewId();
const long EffectsPanel::ID_PANEL11 = wxNewId();
const long EffectsPanel::ID_BUTTON2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_ShapeFilename = wxNewId();
const long EffectsPanel::ID_CHECKBOX1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Piano_Clipping = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Piano_ShapeFilename = wxNewId();
const long EffectsPanel::ID_PANEL13 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK2 = wxNewId();
const long EffectsPanel::ID_PANEL39 = wxNewId();
const long EffectsPanel::ID_FILEPICKER_Pictures_Filename = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_BUTTON_PICTURES_FILENAME = wxNewId();
const long EffectsPanel::ID_STATICTEXT46 = wxNewId();
const long EffectsPanel::ID_CHOICE_Pictures_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Pictures_Direction = wxNewId();
const long EffectsPanel::ID_SLIDER_Pictures_GifSpeed = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Pictures_GifSpeed = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Pictures_GifSpeed = wxNewId();
const long EffectsPanel::ID_STATICTEXT4 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_MovieIs20FPS = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_MovieIs20FPS = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Pictures_PixelOffsets = wxNewId();
const long EffectsPanel::ID_SLIDER_PicturesXC = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Pictures_WrapX = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_PicturesXC = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_PicturesYC = wxNewId();
const long EffectsPanel::ID_SLIDER_PicturesYC = wxNewId();
const long EffectsPanel::ID_PANEL43 = wxNewId();
const long EffectsPanel::ID_SLIDER_PicturesEndXC = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_PicturesEndXC = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_PicturesEndYC = wxNewId();
const long EffectsPanel::ID_SLIDER_PicturesEndYC = wxNewId();
const long EffectsPanel::ID_PANEL45 = wxNewId();
const long EffectsPanel::IDD_NOTEBOOK_Pictures_Positions = wxNewId();
const long EffectsPanel::ID_PANEL20 = wxNewId();
const long EffectsPanel::ID_STATICTEXT65 = wxNewId();
const long EffectsPanel::ID_SLIDER_Pinwheel_Arms = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON11 = wxNewId();
const long EffectsPanel::ID_STATICTEXT98 = wxNewId();
const long EffectsPanel::ID_SLIDER_Pinwheel_ArmSize = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON16 = wxNewId();
const long EffectsPanel::ID_STATICTEXT76 = wxNewId();
const long EffectsPanel::ID_SLIDER_Pinwheel_Twist = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON12 = wxNewId();
const long EffectsPanel::ID_STATICTEXT77 = wxNewId();
const long EffectsPanel::ID_SLIDER_Pinwheel_Thickness = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON18 = wxNewId();
const long EffectsPanel::ID_STATICTEXT78 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Pinwheel_Rotation = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON19 = wxNewId();
const long EffectsPanel::ID_STATICTEXT82 = wxNewId();
const long EffectsPanel::ID_CHOICE_Pinwheel_3D = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Pinwheel3D = wxNewId();
const long EffectsPanel::ID_STATICTEXT85 = wxNewId();
const long EffectsPanel::ID_SLIDER_PinwheelXC = wxNewId();
const long EffectsPanel::ID_STATICTEXT83 = wxNewId();
const long EffectsPanel::ID_SLIDER_PinwheelYC = wxNewId();
const long EffectsPanel::ID_PANEL_Pinwheel = wxNewId();
const long EffectsPanel::ID_STATICTEXT71 = wxNewId();
const long EffectsPanel::ID_CHOICE_Ripple_Object_To_Draw = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON20 = wxNewId();
const long EffectsPanel::ID_STATICTEXT72 = wxNewId();
const long EffectsPanel::ID_CHOICE_Ripple_Movement = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON13 = wxNewId();
const long EffectsPanel::ID_STATICTEXT74 = wxNewId();
const long EffectsPanel::ID_SLIDER_Ripple_Thickness = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON14 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Ripple3D = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON17 = wxNewId();
const long EffectsPanel::ID_PANELRipple = wxNewId();
const long EffectsPanel::ID_STATICTEXT68 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shimmer_Duty_Factor = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_DutyFactor = wxNewId();
const long EffectsPanel::ID_STATICTEXT69 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Shimmer_Use_All_Colors = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_ShimmerUseAllColors = wxNewId();
const long EffectsPanel::ID_STATICTEXT70 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Shimmer_Blink_Timing = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Shimmer_Blink_Timing = wxNewId();
const long EffectsPanel::ID_STATICTEXT67 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shimmer_Blinks_Per_Row = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_BlinksPerRow = wxNewId();
const long EffectsPanel::ID_PANELShimmer = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_CenterX = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_CenterX = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_CenterX = wxNewId();
const long EffectsPanel::ID_STATICTEXT151 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_CenterY = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_CenterY = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_CenterY = wxNewId();
const long EffectsPanel::ID_STATICTEXT152 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_Start_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_Start_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT154 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_End_Radius = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_End_Radius = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_End_Radius = wxNewId();
const long EffectsPanel::ID_STATICTEXT153 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_Start_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_Start_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Width = wxNewId();
const long EffectsPanel::ID_STATICTEXT155 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_End_Width = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_End_Width = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_End_Width = wxNewId();
const long EffectsPanel::ID_PANEL40 = wxNewId();
const long EffectsPanel::ID_STATICTEXT162 = wxNewId();
const long EffectsPanel::ID_SLIDER_Shockwave_Accel = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Shockwave_Accel = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Shockwave_Accel = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Shockwave_Blend_Edges = wxNewId();
const long EffectsPanel::ID_PANEL44 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK_Shockwave = wxNewId();
const long EffectsPanel::ID_SCROLLEDWINDOW_SHOCKWAVE = wxNewId();
const long EffectsPanel::ID_STATICTEXT63 = wxNewId();
const long EffectsPanel::ID_CHOICE_SingleStrand_Colors = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SingleStrand_Colors = wxNewId();
const long EffectsPanel::ID_STATICTEXT62 = wxNewId();
const long EffectsPanel::ID_SLIDER_Number_Chases = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Number_Chases = wxNewId();
const long EffectsPanel::ID_STATICTEXT8 = wxNewId();
const long EffectsPanel::ID_SLIDER_Color_Mix1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Color_Mix1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT9 = wxNewId();
const long EffectsPanel::ID_SLIDER_Chase_Spacing1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Chase_Spacing1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT10 = wxNewId();
const long EffectsPanel::ID_CHOICE_Chase_Type1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Chase_Type1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT11 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Chase_3dFade1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Chase_3dFade1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT12 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Chase_Group_All = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Chase_Group_All = wxNewId();
const long EffectsPanel::ID_PANEL3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT106 = wxNewId();
const long EffectsPanel::ID_SLIDER_Skips_BandSize = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Skips_BandSize = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON44 = wxNewId();
const long EffectsPanel::ID_STATICTEXT107 = wxNewId();
const long EffectsPanel::ID_SLIDER_Skips_SkipSize = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Skips_SkipSize = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON46 = wxNewId();
const long EffectsPanel::ID_STATICTEXT110 = wxNewId();
const long EffectsPanel::ID_SLIDER_Skips_StartPos = wxNewId();
const long EffectsPanel::IDD_TEXTCTRL_Skips_StartPos = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON47 = wxNewId();
const long EffectsPanel::ID_STATICTEXT111 = wxNewId();
const long EffectsPanel::ID_CHOICE_Skips_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON48 = wxNewId();
const long EffectsPanel::ID_PANEL21 = wxNewId();
const long EffectsPanel::ID_NOTEBOOK_SSEFFECT_TYPE = wxNewId();
const long EffectsPanel::ID_PANEL2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT80 = wxNewId();
const long EffectsPanel::ID_SLIDER_Snowflakes_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Snowflakes_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT81 = wxNewId();
const long EffectsPanel::ID_SLIDER_Snowflakes_Type = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Snowflakes_Type = wxNewId();
const long EffectsPanel::ID_PANEL22 = wxNewId();
const long EffectsPanel::ID_STATICTEXT45 = wxNewId();
const long EffectsPanel::ID_SLIDER_Snowstorm_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Snowstorm_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT51 = wxNewId();
const long EffectsPanel::ID_SLIDER_Snowstorm_Length = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Snowstorm_Length = wxNewId();
const long EffectsPanel::ID_PANEL24 = wxNewId();
const long EffectsPanel::ID_STATICTEXT38 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirals_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirals_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT40 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirals_Rotation = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirals_Rotation = wxNewId();
const long EffectsPanel::ID_STATICTEXT42 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirals_Thickness = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirals_Thickness = wxNewId();
const long EffectsPanel::ID_STATICTEXT44 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirals_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirals_Direction = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Spirals_Blend = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Spirals_Blend = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Spirals_3D = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Spirals_3D = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Spirals_Grow = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Spirals_Grow = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Spirals_Shrink = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Spirals_Shrink = wxNewId();
const long EffectsPanel::ID_PANEL26 = wxNewId();
const long EffectsPanel::ID_STATICTEXT88 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirograph_R = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_R = wxNewId();
const long EffectsPanel::ID_STATICTEXT89 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirograph_r = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_r = wxNewId();
const long EffectsPanel::ID_STATICTEXT90 = wxNewId();
const long EffectsPanel::ID_SLIDER_Spirograph_d = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Spirograph_d = wxNewId();
const long EffectsPanel::ID_STATICTEXT93 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Spirograph_Animate = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate = wxNewId();
const long EffectsPanel::ID_STATICTEXT91 = wxNewId();
const long EffectsPanel::ID_PANEL35 = wxNewId();
const long EffectsPanel::ID_STATICTEXT112 = wxNewId();
const long EffectsPanel::ID_SLIDER_Number_Strobes = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON49 = wxNewId();
const long EffectsPanel::ID_STATICTEXT113 = wxNewId();
const long EffectsPanel::ID_SLIDER_Strobe_Duration = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON51 = wxNewId();
const long EffectsPanel::ID_STATICTEXT114 = wxNewId();
const long EffectsPanel::ID_SLIDER_Strobe_Type = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON50 = wxNewId();
const long EffectsPanel::ID_PANEL23 = wxNewId();
const long EffectsPanel::ID_STATICTEXT53 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Text_Line1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT54 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Text_Line2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT22 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Text_Line3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT23 = wxNewId();
const long EffectsPanel::ID_TEXTCTRL_Text_Line4 = wxNewId();
const long EffectsPanel::ID_FONTPICKER_Text_Font1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_FONTPICKER_Text_Font1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT79 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Dir1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Dir1 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_TextToCenter1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_TextToCenter1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT108 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Effect1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Effect1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT99 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Count1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Count1 = wxNewId();
const long EffectsPanel::ID_STATICTEXT101 = wxNewId();
const long EffectsPanel::ID_SLIDER_Text_Position1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Text_Position1 = wxNewId();
const long EffectsPanel::ID_PANEL_Text1 = wxNewId();
const long EffectsPanel::ID_FONTPICKER_Text_Font2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_FONTPICKER_Text_Font2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT57 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Dir2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Dir2 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_TextToCenter2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_Text2Center2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT109 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Effect2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Effect2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT104 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Count2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Count2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT103 = wxNewId();
const long EffectsPanel::ID_SLIDER_Text_Position2 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Text_Position2 = wxNewId();
const long EffectsPanel::ID_PANEL_Text2 = wxNewId();
const long EffectsPanel::ID_FONTPICKER_Text_Font3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_FONTPICKER_Text_Font3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT16 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Dir3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Dir3 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_TextToCenter3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_TextToCenter3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT17 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Effect3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Effect3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT18 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Count3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Count3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT19 = wxNewId();
const long EffectsPanel::ID_SLIDER_Text_Position3 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Text_Position3 = wxNewId();
const long EffectsPanel::ID_PANEL_Text3 = wxNewId();
const long EffectsPanel::ID_FONTPICKER_Text_Font4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_FONTPICKER_Text_Font4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT24 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Dir4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Dir4 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_TextToCenter4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_TextToCenter4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT29 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Effect4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Effect4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT47 = wxNewId();
const long EffectsPanel::ID_CHOICE_Text_Count4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICE_Text_Count4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT48 = wxNewId();
const long EffectsPanel::ID_SLIDER_Text_Position4 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Text_Position4 = wxNewId();
const long EffectsPanel::ID_PANEL_Text4 = wxNewId();
const long EffectsPanel::IDD_NOTEBOOK_Text = wxNewId();
const long EffectsPanel::ID_PANEL7 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON40 = wxNewId();
const long EffectsPanel::ID_STATICTEXT87 = wxNewId();
const long EffectsPanel::ID_SLIDER_Tree_Branches = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Tree_Branches = wxNewId();
const long EffectsPanel::ID_PANEL34 = wxNewId();
const long EffectsPanel::ID_STATICTEXT86 = wxNewId();
const long EffectsPanel::ID_SLIDER_Twinkle_Count = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Twinkle_Count = wxNewId();
const long EffectsPanel::ID_STATICTEXT105 = wxNewId();
const long EffectsPanel::ID_SLIDER_Twinkle_Steps = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_SLIDER_Twinkle_Steps = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Twinkle_Strobe = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHECKBOX_Twinkle_Strobe = wxNewId();
const long EffectsPanel::ID_PANEL33 = wxNewId();
const long EffectsPanel::ID_STATICTEXT49 = wxNewId();
const long EffectsPanel::ID_CHOICE_Wave_Type = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON2 = wxNewId();
const long EffectsPanel::ID_STATICTEXT50 = wxNewId();
const long EffectsPanel::ID_CHOICE_Fill_Colors = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON3 = wxNewId();
const long EffectsPanel::ID_STATICTEXT52 = wxNewId();
const long EffectsPanel::ID_CHECKBOX_Mirror_Wave = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON4 = wxNewId();
const long EffectsPanel::ID_STATICTEXT55 = wxNewId();
const long EffectsPanel::ID_SLIDER_Number_Waves = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON5 = wxNewId();
const long EffectsPanel::ID_STATICTEXT56 = wxNewId();
const long EffectsPanel::ID_SLIDER_Thickness_Percentage = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON6 = wxNewId();
const long EffectsPanel::ID_STATICTEXT58 = wxNewId();
const long EffectsPanel::ID_SLIDER_Wave_Height = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON7 = wxNewId();
const long EffectsPanel::ID_STATICTEXT59 = wxNewId();
const long EffectsPanel::ID_CHOICE_Wave_Direction = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON8 = wxNewId();
const long EffectsPanel::ID_PANEL15 = wxNewId();
const long EffectsPanel::ID_CHOICEBOOK1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON_CHOICEBOOK1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON87 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON1 = wxNewId();
const long EffectsPanel::ID_BITMAPBUTTON88 = wxNewId();
//*)

BEGIN_EVENT_TABLE(EffectsPanel,wxPanel)
    //(*EventTable(EffectsPanel)
    //*)
END_EVENT_TABLE()

class xlPictureFilePickerCtrl : public wxFilePickerCtrl {
public:
    xlPictureFilePickerCtrl(wxWindow *parent,
                     wxWindowID id,
                     const wxString& path = wxEmptyString,
                     const wxString& message = wxFileSelectorPromptStr,
                     const wxString& wildcard = wxFileSelectorDefaultWildcardStr,
                     const wxPoint& pos = wxDefaultPosition,
                     const wxSize& size = wxDefaultSize,
                     long style = wxFLP_DEFAULT_STYLE,
                     const wxValidator& validator = wxDefaultValidator,
                     const wxString& name = wxFilePickerCtrlNameStr)
    : wxFilePickerCtrl(parent, id, path, message, wxImage::GetImageExtWildcard(), pos, size, style, validator, name) {

    }
    virtual ~xlPictureFilePickerCtrl() {}
};


EffectsPanel::EffectsPanel(wxWindow *parent, wxWindowID id, const wxPoint &pos, const wxSize &size, long style, const wxString &name)
{
    //(*Initialize(EffectsPanel)
    wxFlexGridSizer* FlexGridSizer74;
    wxFlexGridSizer* GridBagSizerFanBlades;
    wxSlider* Slider_Eff_On_End;
    wxTextCtrl* TextCtrl_Fan_Blade_Width;
    wxFlexGridSizer* FlexGridSizer25;
    wxFlexGridSizer* FlexGridSizer49;
    wxFlexGridSizer* FlexGridSizer99;
    wxFlexGridSizer* FlexGridSizer18;
    wxFlexGridSizer* FlexGridSizer9;
    wxPanel* Panel8;
    wxPanel* MorphPanelStart;
    wxTextCtrl* TextCtrl_Fan_Element_Width;
    wxFlexGridSizer* GridBagSizerGalaxyOptions;
    wxSlider* Slider_Morph_Start_X2;
    wxSlider* Slider_Galaxy_CenterX;
    wxSlider* Slider_Galaxy_CenterY;
    wxTextCtrl* TextCtrl_Fan_Accel;
    wxFlexGridSizer* FlexGridSizer113;
    wxSlider* Slider_Fan_Start_Angle;
    wxFontPickerCtrl* FontPickerCtrl1;
    wxTextCtrl* TextCtrl_Fan_Start_Radius;
    wxFlexGridSizer* FlexGridSizer108;
    wxFlexGridSizer* FlexGridSizer15;
    wxFlexGridSizer* FlexGridSizer8;
    wxFlexGridSizer* FlexGridSizer55;
    wxFlexGridSizer* FlexGridSizer50;
    wxFlexGridSizer* FlexGridSizer69;
    wxFlexGridSizer* FlexGridSizer89;
    wxFlexGridSizer* FlexGridSizer109;
    wxSlider* Slider_Fan_CenterX;
    wxFlexGridSizer* FlexGridSizer27;
    wxTextCtrl* TextCtrl_Galaxy_CenterX;
    wxFlexGridSizer* FlexGridSizer110;
    wxSlider* Slider_Morph_End_X2;
    wxFlexGridSizer* FlexGridSizer84;
    wxTextCtrl* TextCtrl_Fan_End_Radius;
    wxFlexGridSizer* FlexGridSizer13;
    wxFlexGridSizer* FlexGridSizer44;
    wxFlexGridSizer* FlexGridSizer35;
    wxFlexGridSizer* FlexGridSizer105;
    wxFlexGridSizer* FlexGridSizer79;
    wxFlexGridSizer* FlexGridSizer96;
    wxTextCtrl* TextCtrl_PicturesXC;
    wxFlexGridSizer* FlexGridSizer52;
    wxFlexGridSizer* FlexGridSizer97;
    wxFontPickerCtrl* FontPickerCtrl2;
    wxSlider* Slider_Eff_On_Start;
    wxFlexGridSizer* FlexGridSizer38;
    wxFontPickerCtrl* FontPickerCtrl3;
    wxFlexGridSizer* FlexGridSizer29;
    wxSlider* Slider_Fan_Accel;
    wxSlider* Slider_Galaxy_Start_Width;
    wxStaticText* StaticText_Pictures_XC;
    wxSlider* Slider_PicturesXC;
    wxFlexGridSizer* FlexGridSizer47;
    wxSlider* Slider_MorphDuration;
    wxTextCtrl* TextCtrl_Shockwave_CenterY;
    wxFlexGridSizer* GridBagSizerFanOptions;
    wxPanel* MorphPanelOptions;
    wxFlexGridSizer* FlexGridSizer42;
    wxStaticText* StaticText165;
    wxSlider* Slider_Fan_CenterY;
    wxTextCtrl* TextCtrl_Pictures_GifSpeed;
    wxFlexGridSizer* FlexGridSizer100;
    wxFontPickerCtrl* FontPickerCtrl4;
    wxTextCtrl* TextCtrl_Morph_Start_X1;
    wxTextCtrl* TextCtrl_Morph_End_X2;
    wxTextCtrl* TextCtrl_MorphDuration;
    wxTextCtrl* TextCtrl_MorphStartLength;
    wxStaticText* StaticText160;
    wxFlexGridSizer* FlexGridSizer104;
    wxFlexGridSizer* FlexGridSizer91;
    wxTextCtrl* TextCtrl3;
    wxSlider* Slider_Shockwave_Start_Radius;
    wxFlexGridSizer* FlexGridSizer82;
    wxFlexGridSizer* FlexGridSizer112;
    wxTextCtrl* TextCtrl_Fan_Start_Angle;
    wxSlider* Slider_Galaxy_End_Width;
    wxSlider* Slider_Skips_BandSize;
    wxSlider* Slider_Shockwave_CenterX;
    wxFlexGridSizer* FlexGridSizer68;
    wxFlexGridSizer* FlexGridSizer62;
    wxTextCtrl* TextCtrl_Fan_Duration;
    wxStaticText* StaticText162;
    wxFlexGridSizer* FlexGridSizer3;
    wxGridBagSizer* GridBagSizer1;
    wxTextCtrl* TextCtrl_Galaxy_CenterY;
    wxSlider* Slider_MorphStartLength;
    wxTextCtrl* TextCtrl_Galaxy_Start_Radius;
    wxSlider* Slider_Morph_Start_X1;
    wxSlider* Slider1;
    wxFlexGridSizer* FlexGridSizer4;
    wxSlider* Slider2;
    wxGridBagSizer* GridBagSizer3;
    wxGridBagSizer* GridBagSizerShockwaveOptions;
    wxFlexGridSizer* FlexGridSizer30;
    wxFlexGridSizer* FlexGridSizer65;
    wxPanel* Panel14;
    wxSlider* Slider_Shockwave_End_Width;
    wxTextCtrl* TextCtrl_Morph_End_Y1;
    wxFlexGridSizer* FlexGridSizer60;
    wxTextCtrl* TextCtrl_Fan_Num_Elements;
    wxFlexGridSizer* FlexGridSizer98;
    wxNotebook* Notebook4;
    wxFlexGridSizer* FlexGridSizer66;
    wxFlexGridSizer* FlexGridSizer33;
    wxSlider* Slider_Morph_End_Y1;
    wxFlexGridSizer* FlexGridSizer45;
    wxPanel* Panel7;
    wxTextCtrl* TextCtrl_Shockwave_Accel;
    wxSlider* Slider_Galaxy_End_Radius;
    wxFlexGridSizer* FlexGridSizer75;
    wxSlider* Slider_Morph_End_Y2;
    wxFlexGridSizer* FlexGridSizer106;
    wxFlexGridSizer* FlexGridSizer41;
    wxFlexGridSizer* FlexGridSizer88;
    wxFlexGridSizer* FlexGridSizer63;
    wxTextCtrl* TextCtrl_MorphEndLength;
    wxTextCtrl* TextCtrl_Galaxy_Revolutions;
    wxTextCtrl* TextCtrl_Galaxy_Start_Width;
    wxTextCtrl* TextCtrl_Galaxy_Accel;
    wxSlider* Slider_Skips_StartPos;
    wxFlexGridSizer* FlexGridSizer85;
    wxFlexGridSizer* FlexGridSizer19;
    wxStaticText* StaticText154;
    wxFlexGridSizer* FlexGridSizer48;
    wxTextCtrl* TextCtrl_Shockwave_CenterX;
    wxSlider* Slider_Skips_SkipSize;
    wxSlider* Slider_Fan_Element_Width;
    wxTextCtrl* TextCtrl_Morph_End_Y2;
    wxTextCtrl* TextCtrl_Eff_On_Start;
    wxPanel* Panel10;
    wxTextCtrl* TextCtrl_Fan_Revolutions;
    wxStaticText* StaticText125;
    wxSlider* Slider_Pictures_GifSpeed;
    wxTextCtrl* TextCtrl_Galaxy_Start_Angle;
    wxFlexGridSizer* FlexGridSizer51;
    wxSlider* Slider_Fan_Duration;
    wxTextCtrl* TextCtrl_Shockwave_End_Width;
    wxFlexGridSizer* FlexGridSizer28;
    wxSlider* Slider_Galaxy_Duration;
    wxSlider* Slider_Fan_Num_Elements;
    wxTextCtrl* TextCtrl_Galaxy_Duration;
    wxFlexGridSizer* FlexGridSizer107;
    wxFlexGridSizer* FlexGridSizer23;
    wxFlexGridSizer* FlexGridSizer40;
    wxStaticText* StaticText113;
    wxFlexGridSizer* FlexGridSizer77;
    wxFlexGridSizer* FlexGridSizer94;
    wxTextCtrl* TextCtrl_Morph_Start_X2;
    wxPanel* Panel12;
    wxSlider* Slider_Fan_End_Radius;
    wxTextCtrl* TextCtrl_Morph_End_X1;
    wxCheckBox* CheckBox1;
    wxFlexGridSizer* FlexGridSizer81;
    wxSlider* Slider_MorphEndLength;
    wxSlider* Slider_Fan_Revolutions;
    wxSlider* Slider_Morph_Start_Y2;
    wxFlexGridSizer* FlexGridSizer53;
    wxTextCtrl* TextCtrl_Morph_Start_Y2;
    wxFlexGridSizer* FlexGridSizer46;
    wxFlexGridSizer* FlexGridSizer78;
    wxSlider* Slider_Galaxy_Revolutions;
    wxSlider* Slider_PicturesYC;
    wxFlexGridSizer* FlexGridSizer17;
    wxTextCtrl* TextCtrl_Shockwave_End_Radius;
    wxFlexGridSizer* FlexGridSizer86;
    wxFlexGridSizer* FlexGridSizer39;
    wxStaticText* StaticText96;
    wxFlexGridSizer* FlexGridSizer72;
    wxTextCtrl* TextCtrl_Fan_Num_Blades;
    wxFlexGridSizer* GridBagSizerGalaxyEnd;
    wxFlexGridSizer* FlexGridSizer14;
    wxFlexGridSizer* FlexGridSizer61;
    wxTextCtrl* TextCtrl_Fan_CenterX;
    wxFlexGridSizer* FlexGridSizer5;
    wxFlexGridSizer* FlexGridSizer16;
    wxTextCtrl* TextCtrl_Galaxy_End_Width;
    wxFlexGridSizer* FlexGridSizer71;
    wxPanel* MorphPanelEnd;
    wxFlexGridSizer* FlexGridSizer22;
    wxTextCtrl* TextCtrl_Morph_Start_Y1;
    wxSlider* Slider_Shockwave_Accel;
    wxFlexGridSizer* FlexGridSizer31;
    wxSlider* Slider_Galaxy_Start_Radius;
    wxFlexGridSizer* FlexGridSizer80;
    wxTextCtrl* TextCtrl2;
    wxSlider* Slider_Fan_Blade_Angle;
    wxStaticText* StaticText114;
    wxPanel* Panel6;
    wxSlider* Slider_Shockwave_CenterY;
    wxTextCtrl* TextCtrl_PicturesYC;
    wxFlexGridSizer* FlexGridSizer93;
    wxSlider* Slider_Morph_Start_Y1;
    wxSlider* Slider_Fan_Num_Blades;
    wxStaticText* StaticText164;
    wxFlexGridSizer* FlexGridSizer58;
    wxFlexGridSizer* FlexGridSizer36;
    wxFlexGridSizer* FlexGridSizer56;
    wxFlexGridSizer* FlexGridSizer67;
    wxStaticText* StaticText161;
    wxSlider* Slider_Galaxy_Start_Angle;
    wxTextCtrl* TextCtrl_Eff_On_End;
    wxStaticText* StaticText163;
    wxFlexGridSizer* FlexGridSizer95;
    wxSlider* Slider_Morph_End_X1;
    wxPanel* Panel11;
    wxSlider* Slider_Fan_Start_Radius;
    wxTextCtrl* TextCtrl_Fan_Blade_Angle;
    wxTextCtrl* TextCtrl4;
    wxFlexGridSizer* FlexGridSizer26;
    wxGridBagSizer* GridBagSizer2;
    wxStaticText* StaticText2;
    wxFlexGridSizer* FlexGridSizer59;
    wxFlexGridSizer* FlexGridSizer10;
    wxFlexGridSizer* FlexGridSizer70;
    wxFlexGridSizer* FlexGridSizer43;
    wxFlexGridSizer* GridBagSizerFanPosition;
    wxFlexGridSizer* FlexGridSizer92;
    wxFlexGridSizer* FlexGridSizer32;
    wxStaticText* StaticText133;
    wxStaticText* StaticText_Pictures_YC;
    wxTextCtrl* TextCtrl_Shockwave_Start_Width;
    wxFlexGridSizer* FlexGridSizer76;
    wxFlexGridSizer* FlexGridSizer20;
    wxFlexGridSizer* GridBagSizerGalaxyStart;
    wxFlexGridSizer* FlexGridSizer64;
    wxPanel* PictureStartPositionPanel;
    wxTextCtrl* TextCtrl_MorphAccel;
    wxFlexGridSizer* FlexGridSizer6;
    wxFlexGridSizer* FlexGridSizer34;
    wxSlider* Slider_Galaxy_Accel;
    wxFlexGridSizer* FlexGridSizer57;
    wxTextCtrl* TextCtrl1;
    wxFlexGridSizer* FlexGridSizer12;
    wxFlexGridSizer* FlexGridSizer7;
    wxSlider* Slider_Shockwave_End_Radius;
    wxNotebook* Notebook_Text1;
    wxTextCtrl* TextCtrl5;
    wxFlexGridSizer* FlexGridSizer11;
    wxFlexGridSizer* FlexGridSizer83;
    wxSlider* Slider_Shockwave_Start_Width;
    wxFlexGridSizer* FlexGridSizer37;
    wxFlexGridSizer* FlexGridSizer21;
    wxPanel* Panel9;
    wxTextCtrl* TextCtrl_Shockwave_Start_Radius;
    wxFlexGridSizer* FlexGridSizer90;
    wxTextCtrl* TextCtrl_Galaxy_End_Radius;
    wxSlider* Slider_MorphAccel;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer54;
    wxFlexGridSizer* FlexGridSizer24;
    wxFlexGridSizer* FlexGridSizer2;
    xlPictureFilePickerCtrl* FilePickerCtrl1;
    wxFlexGridSizer* FlexGridSizer87;
    wxTextCtrl* TextCtrl_Fan_CenterY;
    wxSlider* Slider_Fan_Blade_Width;
    wxFlexGridSizer* FlexGridSizer73;
    wxFlexGridSizer* FlexGridSizer111;

    Create(parent, wxID_ANY, wxDefaultPosition, wxSize(150,150), wxTAB_TRAVERSAL, _T("wxID_ANY"));
    SetMinSize(wxSize(150,150));
    SetMaxSize(wxSize(150,150));
    FlexGridSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    Choicebook1 = new wxChoicebook(this, ID_CHOICEBOOK1, wxDefaultPosition, wxDefaultSize, 0, _T("ID_CHOICEBOOK1"));
    Panel1_Off = new wxScrolledWindow(Choicebook1, ID_PANEL19, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL19"));
    FlexGridSizer77 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer77->AddGrowableCol(0);
    FlexGridSizer77->Add(19,44,1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText97 = new wxStaticText(Panel1_Off, ID_STATICTEXT100, _("This Effect simply turns every"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT100"));
    FlexGridSizer2->Add(StaticText97, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    StaticText118 = new wxStaticText(Panel1_Off, ID_STATICTEXT120, _("pixel off on this model."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT120"));
    FlexGridSizer2->Add(StaticText118, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer77->Add(FlexGridSizer2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer77->Add(-1,-1,1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    Panel1_Off->SetSizer(FlexGridSizer77);
    FlexGridSizer77->Fit(Panel1_Off);
    FlexGridSizer77->SetSizeHints(Panel1_Off);
    Panel1_On = new wxScrolledWindow(Choicebook1, ID_PANEL25, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL25"));
    FlexGridSizer92 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer92->AddGrowableCol(0);
    FlexGridSizer96 = new wxFlexGridSizer(0, 1, 0, 0);
    StaticText73 = new wxStaticText(Panel1_On, ID_STATICTEXT75, _("This Effect turns every pixel on."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT75"));
    FlexGridSizer96->Add(StaticText73, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer92->Add(FlexGridSizer96, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer93 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer93->AddGrowableCol(0);
    FlexGridSizer95 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer95->AddGrowableCol(1);
    StaticText113 = new wxStaticText(Panel1_On, wxID_ANY, _("Start Intensity"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer95->Add(StaticText113, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Eff_On_Start = new wxSlider(Panel1_On, IDD_SLIDER_Eff_On_Start, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Eff_On_Start"));
    FlexGridSizer95->Add(Slider_Eff_On_Start, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Eff_On_Start = new wxTextCtrl(Panel1_On, ID_TEXTCTRL_Eff_On_Start, _("100"), wxDefaultPosition, wxDLG_UNIT(Panel1_On,wxSize(20,-1)), wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Eff_On_Start"));
    FlexGridSizer95->Add(TextCtrl_Eff_On_Start, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    StaticText114 = new wxStaticText(Panel1_On, wxID_ANY, _("End Intensity"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer95->Add(StaticText114, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Eff_On_End = new wxSlider(Panel1_On, IDD_SLIDER_Eff_On_End, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("IDD_SLIDER_Eff_On_End"));
    FlexGridSizer95->Add(Slider_Eff_On_End, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Eff_On_End = new wxTextCtrl(Panel1_On, ID_TEXTCTRL_Eff_On_End, _("100"), wxDefaultPosition, wxDLG_UNIT(Panel1_On,wxSize(20,-1)), wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Eff_On_End"));
    FlexGridSizer95->Add(TextCtrl_Eff_On_End, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer93->Add(FlexGridSizer95, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer92->Add(FlexGridSizer93, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_On->SetSizer(FlexGridSizer92);
    FlexGridSizer92->Fit(Panel1_On);
    FlexGridSizer92->SetSizeHints(Panel1_On);
    Panel1_Bars = new wxScrolledWindow(Choicebook1, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL8"));
    FlexGridSizer35 = new wxFlexGridSizer(0, 3, wxDLG_UNIT(Panel1_Bars,wxSize(0,0)).GetWidth(), 0);
    FlexGridSizer35->AddGrowableCol(1);
    StaticText23 = new wxStaticText(Panel1_Bars, ID_STATICTEXT25, _("Palette Rep"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
    FlexGridSizer35->Add(StaticText23, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Bars_BarCount = new wxSlider(Panel1_Bars, ID_SLIDER_Bars_BarCount, 1, 1, 5, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Bars_BarCount"));
    FlexGridSizer35->Add(Slider_Bars_BarCount, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_PaletteRep = new wxBitmapButton(Panel1_Bars, ID_BITMAPBUTTON_SLIDER_Bars_BarCount, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Bars_BarCount"));
    BitmapButton_PaletteRep->SetDefault();
    BitmapButton_PaletteRep->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer35->Add(BitmapButton_PaletteRep, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText24 = new wxStaticText(Panel1_Bars, ID_STATICTEXT26, _("Direction"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
    FlexGridSizer35->Add(StaticText24, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Bars_Direction = new wxChoice(Panel1_Bars, ID_CHOICE_Bars_Direction, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Bars_Direction"));
    FlexGridSizer35->Add(Choice_Bars_Direction, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer35->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Direction = new wxBitmapButton(Panel1_Bars, ID_BITMAPBUTTON_CHOICE_Bars_Direction, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Bars_Direction"));
    BitmapButton_Direction->SetDefault();
    BitmapButton_Direction->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer35->Add(BitmapButton_Direction, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer10 = new wxFlexGridSizer(0, 5, 0, 0);
    CheckBox_Bars_Highlight = new wxCheckBox(Panel1_Bars, ID_CHECKBOX_Bars_Highlight, _("Highlight"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Bars_Highlight"));
    CheckBox_Bars_Highlight->SetValue(false);
    FlexGridSizer10->Add(CheckBox_Bars_Highlight, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Highlight = new wxBitmapButton(Panel1_Bars, ID_BITMAPBUTTON_CHECKBOX_Bars_Highlight, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Bars_Highlight"));
    BitmapButton_Highlight->SetDefault();
    BitmapButton_Highlight->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer10->Add(BitmapButton_Highlight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer10->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Bars_3D = new wxCheckBox(Panel1_Bars, ID_CHECKBOX_Bars_3D, _("3D"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Bars_3D"));
    CheckBox_Bars_3D->SetValue(false);
    FlexGridSizer10->Add(CheckBox_Bars_3D, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_3D = new wxBitmapButton(Panel1_Bars, ID_BITMAPBUTTON_CHECKBOX_Bars_3D, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Bars_3D"));
    BitmapButton_3D->SetDefault();
    BitmapButton_3D->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer10->Add(BitmapButton_3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer35->Add(FlexGridSizer10, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Bars->SetSizer(FlexGridSizer35);
    FlexGridSizer35->Fit(Panel1_Bars);
    FlexGridSizer35->SetSizeHints(Panel1_Bars);
    Panel1_Butterfly = new wxScrolledWindow(Choicebook1, ID_PANEL10, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL10"));
    FlexGridSizer36 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer36->AddGrowableCol(1);
    StaticText25 = new wxStaticText(Panel1_Butterfly, ID_STATICTEXT27, _("Colors"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT27"));
    FlexGridSizer36->Add(StaticText25, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Butterfly_Colors = new wxChoice(Panel1_Butterfly, ID_CHOICE_Butterfly_Colors, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Butterfly_Colors"));
    FlexGridSizer36->Add(Choice_Butterfly_Colors, 1, wxTOP|wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_ButterflyColors = new wxBitmapButton(Panel1_Butterfly, ID_BITMAPBUTTON_CHOICE_Butterfly_Color, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Butterfly_Color"));
    BitmapButton_ButterflyColors->SetDefault();
    BitmapButton_ButterflyColors->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer36->Add(BitmapButton_ButterflyColors, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText26 = new wxStaticText(Panel1_Butterfly, ID_STATICTEXT28, _("Style"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT28"));
    FlexGridSizer36->Add(StaticText26, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Butterfly_Style = new wxSlider(Panel1_Butterfly, ID_SLIDER_Butterfly_Style, 1, 1, 5, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Butterfly_Style"));
    FlexGridSizer36->Add(Slider_Butterfly_Style, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ButterflyStyle = new wxBitmapButton(Panel1_Butterfly, ID_BITMAPBUTTON_SLIDER_Butterfly_Style, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Butterfly_Style"));
    BitmapButton_ButterflyStyle->SetDefault();
    BitmapButton_ButterflyStyle->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer36->Add(BitmapButton_ButterflyStyle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText27 = new wxStaticText(Panel1_Butterfly, ID_STATICTEXT30, _("Bkgrd Chunks"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT30"));
    FlexGridSizer36->Add(StaticText27, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Butterfly_Chunks = new wxSlider(Panel1_Butterfly, ID_SLIDER_Butterfly_Chunks, 1, 1, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Butterfly_Chunks"));
    FlexGridSizer36->Add(Slider_Butterfly_Chunks, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ButterflyChunks = new wxBitmapButton(Panel1_Butterfly, ID_BITMAPBUTTON_SLIDER_Butterfly_Chunks, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Butterfly_Chunks"));
    BitmapButton_ButterflyChunks->SetDefault();
    BitmapButton_ButterflyChunks->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer36->Add(BitmapButton_ButterflyChunks, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText28 = new wxStaticText(Panel1_Butterfly, ID_STATICTEXT31, _("Bkgrd Skip"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT31"));
    FlexGridSizer36->Add(StaticText28, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Butterfly_Skip = new wxSlider(Panel1_Butterfly, ID_SLIDER_Butterfly_Skip, 2, 2, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Butterfly_Skip"));
    FlexGridSizer36->Add(Slider_Butterfly_Skip, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ButterflySkip = new wxBitmapButton(Panel1_Butterfly, ID_BITMAPBUTTON_SLIDER_Butterfly_Skip, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Butterfly_Skip"));
    BitmapButton_ButterflySkip->SetDefault();
    BitmapButton_ButterflySkip->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer36->Add(BitmapButton_ButterflySkip, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText58 = new wxStaticText(Panel1_Butterfly, ID_STATICTEXT60, _("Direction"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT60"));
    FlexGridSizer36->Add(StaticText58, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Butterfly_Direction = new wxChoice(Panel1_Butterfly, ID_CHOICE_Butterfly_Direction, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Butterfly_Direction"));
    FlexGridSizer36->Add(Choice_Butterfly_Direction, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton8 = new wxBitmapButton(Panel1_Butterfly, ID_BITMAPBUTTON9, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
    BitmapButton8->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer36->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Butterfly->SetSizer(FlexGridSizer36);
    FlexGridSizer36->Fit(Panel1_Butterfly);
    FlexGridSizer36->SetSizeHints(Panel1_Butterfly);
    Panel1_Circles = new wxScrolledWindow(Choicebook1, ID_PANEL37, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL37"));
    FlexGridSizer80 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer80->AddGrowableCol(0);
    FlexGridSizer3 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer17 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer17->AddGrowableCol(1);
    StaticText136 = new wxStaticText(Panel1_Circles, ID_STATICTEXT137, _("Number of Circles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT137"));
    FlexGridSizer17->Add(StaticText136, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Circles_Count = new wxSlider(Panel1_Circles, ID_SLIDER_Circles_Count, 3, 1, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Circles_Count"));
    FlexGridSizer17->Add(Slider_Circles_Count, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer3->Add(FlexGridSizer17, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_CirclesCount = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_SLIDER_Circles_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Circles_Count"));
    BitmapButton_CirclesCount->SetDefault();
    BitmapButton_CirclesCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer18 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer18->AddGrowableCol(1);
    StaticText137 = new wxStaticText(Panel1_Circles, ID_STATICTEXT138, _("Size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT138"));
    FlexGridSizer18->Add(StaticText137, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Circles_Size = new wxSlider(Panel1_Circles, ID_SLIDER_Circles_Size, 5, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Circles_Size"));
    FlexGridSizer18->Add(Slider_Circles_Size, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer3->Add(FlexGridSizer18, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_CirclesSize = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_SLIDER_Circles_Size, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Circles_Size"));
    BitmapButton_CirclesSize->SetDefault();
    BitmapButton_CirclesSize->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesSize, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer11 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Bounce = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Bounce, _("Bounce"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Bounce"));
    CheckBox_Circles_Bounce->SetValue(false);
    FlexGridSizer11->Add(CheckBox_Circles_Bounce, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer11, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesBounce = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Bounce, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Bounce"));
    BitmapButton_CirclesBounce->SetDefault();
    BitmapButton_CirclesBounce->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesBounce, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer12 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Radial = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Radial, _("Radial"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Radial"));
    CheckBox_Circles_Radial->SetValue(false);
    FlexGridSizer12->Add(CheckBox_Circles_Radial, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer12, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesRadial = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Radial, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Radial"));
    BitmapButton_CirclesRadial->SetDefault();
    BitmapButton_CirclesRadial->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesRadial, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer14 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Plasma = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Plasma, _("Plasma"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Plasma"));
    CheckBox_Circles_Plasma->SetValue(false);
    FlexGridSizer14->Add(CheckBox_Circles_Plasma, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer14, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesPlasma = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Plasma, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Plasma"));
    BitmapButton_CirclesPlasma->SetDefault();
    BitmapButton_CirclesPlasma->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesPlasma, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer13 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Radial_3D = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Radial_3D, _("Radial 3D"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Radial_3D"));
    CheckBox_Circles_Radial_3D->SetValue(false);
    FlexGridSizer13->Add(CheckBox_Circles_Radial_3D, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer13, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesRadial3D = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Radial_3D, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Radial_3D"));
    BitmapButton_CirclesRadial3D->SetDefault();
    BitmapButton_CirclesRadial3D->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesRadial3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer91 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Bubbles = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Bubbles, _("Bubbles"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Bubbles"));
    CheckBox_Circles_Bubbles->SetValue(false);
    FlexGridSizer91->Add(CheckBox_Circles_Bubbles, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer91, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesBubbles = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CirclesBubbles, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CirclesBubbles"));
    BitmapButton_CirclesBubbles->SetDefault();
    BitmapButton_CirclesBubbles->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesBubbles, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer15 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Collide = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Collide, _("Collide"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Collide"));
    CheckBox_Circles_Collide->SetValue(false);
    CheckBox_Circles_Collide->Hide();
    FlexGridSizer15->Add(CheckBox_Circles_Collide, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer15, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CirclesCollide = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Collide, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Collide"));
    BitmapButton_CirclesCollide->SetDefault();
    BitmapButton_CirclesCollide->Hide();
    BitmapButton_CirclesCollide->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_CirclesCollide, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer16 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Random_m = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Random_m, _("Random Motion"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Random_m"));
    CheckBox_Circles_Random_m->SetValue(false);
    CheckBox_Circles_Random_m->Hide();
    FlexGridSizer16->Add(CheckBox_Circles_Random_m, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer16, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_RandomMotion = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Random_m, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Random_m"));
    BitmapButton_RandomMotion->SetDefault();
    BitmapButton_RandomMotion->Hide();
    BitmapButton_RandomMotion->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_RandomMotion, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer107 = new wxFlexGridSizer(0, 1, 0, 0);
    CheckBox_Circles_Linear_Fade = new wxCheckBox(Panel1_Circles, ID_CHECKBOX_Circles_Linear_Fade, _("Linear Fade"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Circles_Linear_Fade"));
    CheckBox_Circles_Linear_Fade->SetValue(false);
    FlexGridSizer107->Add(CheckBox_Circles_Linear_Fade, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3->Add(FlexGridSizer107, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_Circles_Linear_Fade = new wxBitmapButton(Panel1_Circles, ID_BITMAPBUTTON_CHECKBOX_Circles_Linear_Fade, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Circles_Linear_Fade"));
    BitmapButton_Circles_Linear_Fade->SetDefault();
    BitmapButton_Circles_Linear_Fade->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer3->Add(BitmapButton_Circles_Linear_Fade, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer80->Add(FlexGridSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_Circles->SetSizer(FlexGridSizer80);
    FlexGridSizer80->Fit(Panel1_Circles);
    FlexGridSizer80->SetSizeHints(Panel1_Circles);
    Panel1_ColorWash = new wxScrolledWindow(Choicebook1, ID_PANEL5, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL5"));
    FlexGridSizer37 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer37->AddGrowableCol(0);
    FlexGridSizer9 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer22 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer22->AddGrowableCol(1);
    StaticText5 = new wxStaticText(Panel1_ColorWash, ID_STATICTEXT21, _("Count"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    FlexGridSizer22->Add(StaticText5, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_ColorWash_Count = new wxSlider(Panel1_ColorWash, ID_SLIDER_ColorWash_Count, 1, 1, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_ColorWash_Count"));
    FlexGridSizer22->Add(Slider_ColorWash_Count, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer9->Add(FlexGridSizer22, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ColorWashCount = new wxBitmapButton(Panel1_ColorWash, ID_BITMAPBUTTON_SLIDER_ColorWash_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_ColorWash_Count"));
    BitmapButton_ColorWashCount->SetDefault();
    BitmapButton_ColorWashCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer9->Add(BitmapButton_ColorWashCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer75 = new wxFlexGridSizer(0, 2, 0, 0);
    StaticText31 = new wxStaticText(Panel1_ColorWash, ID_STATICTEXT33, _("Vertical"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
    FlexGridSizer75->Add(StaticText31, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_ColorWash_VFade = new wxCheckBox(Panel1_ColorWash, ID_CHECKBOX_ColorWash_VFade, _("Fade"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_ColorWash_VFade"));
    CheckBox_ColorWash_VFade->SetValue(false);
    FlexGridSizer75->Add(CheckBox_ColorWash_VFade, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer9->Add(FlexGridSizer75, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ColorWashVFade = new wxBitmapButton(Panel1_ColorWash, ID_BITMAPBUTTON_CHECKBOX_ColorWash_VFade, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_ColorWash_VFade"));
    BitmapButton_ColorWashVFade->SetDefault();
    BitmapButton_ColorWashVFade->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer9->Add(BitmapButton_ColorWashVFade, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer70 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText30 = new wxStaticText(Panel1_ColorWash, ID_STATICTEXT32, _("Horizontal"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT32"));
    FlexGridSizer70->Add(StaticText30, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_ColorWash_HFade = new wxCheckBox(Panel1_ColorWash, ID_CHECKBOX_ColorWash_HFade, _("Fade"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_ColorWash_HFade"));
    CheckBox_ColorWash_HFade->SetValue(false);
    FlexGridSizer70->Add(CheckBox_ColorWash_HFade, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer9->Add(FlexGridSizer70, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_ColorWashHFade = new wxBitmapButton(Panel1_ColorWash, ID_BITMAPBUTTON_CHECKBOX_ColorWash_HFade, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_ColorWash_HFade"));
    BitmapButton_ColorWashHFade->SetDefault();
    BitmapButton_ColorWashHFade->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer9->Add(BitmapButton_ColorWashHFade, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer37->Add(FlexGridSizer9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_ColorWash->SetSizer(FlexGridSizer37);
    FlexGridSizer37->Fit(Panel1_ColorWash);
    FlexGridSizer37->SetSizeHints(Panel1_ColorWash);
    Panel1_CoroFaces = new wxScrolledWindow(Choicebook1, ID_PANEL28, wxPoint(202,8), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL28"));
    FlexGridSizer58 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer58->AddGrowableCol(0);
    FlexGridSizer23 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer23->AddGrowableCol(1);
    StaticText71 = new wxStaticText(Panel1_CoroFaces, ID_STATICTEXT73, _("Mouth"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT73"));
    FlexGridSizer23->Add(StaticText71, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice_CoroFaces_Phoneme = new wxChoice(Panel1_CoroFaces, ID_CHOICE_CoroFaces_Phoneme, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT, wxDefaultValidator, _T("ID_CHOICE_CoroFaces_Phoneme"));
    FlexGridSizer23->Add(Choice_CoroFaces_Phoneme, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText62 = new wxStaticText(Panel1_CoroFaces, ID_STATICTEXT64, _("Eyes"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT64"));
    FlexGridSizer23->Add(StaticText62, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice_CoroFaces_Eyes = new wxChoice(Panel1_CoroFaces, ID_CHOICE_CoroFaces_Eyes, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_SORT, wxDefaultValidator, _T("ID_CHOICE_CoroFaces_Eyes"));
    Choice_CoroFaces_Eyes->Append(_("Open"));
    Choice_CoroFaces_Eyes->Append(_("Closed"));
    Choice_CoroFaces_Eyes->Append(_("Left"));
    Choice_CoroFaces_Eyes->Append(_("Right"));
    Choice_CoroFaces_Eyes->Append(_("Up"));
    Choice_CoroFaces_Eyes->Append(_("Down"));
    Choice_CoroFaces_Eyes->Append(_("(off)"));
    FlexGridSizer23->Add(Choice_CoroFaces_Eyes, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText64 = new wxStaticText(Panel1_CoroFaces, ID_STATICTEXT66, _("Face"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT66"));
    FlexGridSizer23->Add(StaticText64, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_CoroFaces_Outline = new wxCheckBox(Panel1_CoroFaces, ID_CHECKBOX_CoroFaces_Outline, _("Show outline"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_CoroFaces_Outline"));
    CheckBox_CoroFaces_Outline->SetValue(false);
    FlexGridSizer23->Add(CheckBox_CoroFaces_Outline, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer58->Add(FlexGridSizer23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_CoroFaces->SetSizer(FlexGridSizer58);
    FlexGridSizer58->Fit(Panel1_CoroFaces);
    FlexGridSizer58->SetSizeHints(Panel1_CoroFaces);
    Panel1_Curtain = new wxScrolledWindow(Choicebook1, ID_PANEL1, wxPoint(150,14), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL1"));
    FlexGridSizer7 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer7->AddGrowableCol(1);
    StaticText7 = new wxStaticText(Panel1_Curtain, ID_STATICTEXT6, _("Curtain Edge"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    FlexGridSizer7->Add(StaticText7, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Curtain_Edge = new wxChoice(Panel1_Curtain, ID_CHOICE_Curtain_Edge, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Curtain_Edge"));
    Choice_Curtain_Edge->SetSelection( Choice_Curtain_Edge->Append(_("left")) );
    Choice_Curtain_Edge->Append(_("center"));
    Choice_Curtain_Edge->Append(_("right"));
    Choice_Curtain_Edge->Append(_("bottom"));
    Choice_Curtain_Edge->Append(_("middle"));
    Choice_Curtain_Edge->Append(_("top"));
    FlexGridSizer7->Add(Choice_Curtain_Edge, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_CurtainEdge = new wxBitmapButton(Panel1_Curtain, ID_BITMAPBUTTON_CHOICE_Curtain_Edge, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Curtain_Edge"));
    BitmapButton_CurtainEdge->SetDefault();
    BitmapButton_CurtainEdge->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer7->Add(BitmapButton_CurtainEdge, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText6 = new wxStaticText(Panel1_Curtain, ID_STATICTEXT5, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    FlexGridSizer7->Add(StaticText6, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Curtain_Effect = new wxChoice(Panel1_Curtain, ID_CHOICE_Curtain_Effect, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Curtain_Effect"));
    Choice_Curtain_Effect->SetSelection( Choice_Curtain_Effect->Append(_("open")) );
    Choice_Curtain_Effect->Append(_("close"));
    Choice_Curtain_Effect->Append(_("open then close"));
    Choice_Curtain_Effect->Append(_("close then open"));
    FlexGridSizer7->Add(Choice_Curtain_Effect, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_CurtainEffect = new wxBitmapButton(Panel1_Curtain, ID_BITMAPBUTTON_CHOICE_Curtain_Effect, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Curtain_Effect"));
    BitmapButton_CurtainEffect->SetDefault();
    BitmapButton_CurtainEffect->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer7->Add(BitmapButton_CurtainEffect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText8 = new wxStaticText(Panel1_Curtain, ID_STATICTEXT7, _("Swag Width"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    FlexGridSizer7->Add(StaticText8, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Curtain_Swag = new wxSlider(Panel1_Curtain, ID_SLIDER_Curtain_Swag, 3, 0, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Curtain_Swag"));
    FlexGridSizer7->Add(Slider_Curtain_Swag, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_CurtainSwag = new wxBitmapButton(Panel1_Curtain, ID_BITMAPBUTTON_SLIDER_Curtain_Swag, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Curtain_Swag"));
    BitmapButton_CurtainSwag->SetDefault();
    BitmapButton_CurtainSwag->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer7->Add(BitmapButton_CurtainSwag, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer76 = new wxFlexGridSizer(0, 3, 0, 0);
    CheckBox_Curtain_Repeat = new wxCheckBox(Panel1_Curtain, ID_CHECKBOX_Curtain_Repeat, _("Repeat"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Curtain_Repeat"));
    CheckBox_Curtain_Repeat->SetValue(false);
    FlexGridSizer76->Add(CheckBox_Curtain_Repeat, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer76->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_CurtainRepeat = new wxBitmapButton(Panel1_Curtain, ID_BITMAPBUTTON_CHECKBOX_Curtain_Repeat, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Curtain_Repeat"));
    BitmapButton_CurtainRepeat->SetDefault();
    BitmapButton_CurtainRepeat->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer76->Add(BitmapButton_CurtainRepeat, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer7->Add(FlexGridSizer76, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Curtain->SetSizer(FlexGridSizer7);
    FlexGridSizer7->Fit(Panel1_Curtain);
    FlexGridSizer7->SetSizeHints(Panel1_Curtain);
    Panel1_Faces = new wxScrolledWindow(Choicebook1, ID_PANEL6, wxPoint(141,8), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL6"));
    FlexGridSizer47 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer97 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText116 = new wxStaticText(Panel1_Faces, ID_STATICTEXT118, _("Draw a face on a Matrix or Megatree"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT118"));
    FlexGridSizer97->Add(StaticText116, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer47->Add(FlexGridSizer97, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer98 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText14 = new wxStaticText(Panel1_Faces, ID_STATICTEXT15, _("Phoneme"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    FlexGridSizer98->Add(StaticText14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Faces_Phoneme = new wxChoice(Panel1_Faces, ID_CHOICE_Faces_Phoneme, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Faces_Phoneme"));
    FlexGridSizer98->Add(Choice_Faces_Phoneme, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer47->Add(FlexGridSizer98, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Faces->SetSizer(FlexGridSizer47);
    FlexGridSizer47->Fit(Panel1_Faces);
    FlexGridSizer47->SetSizeHints(Panel1_Faces);
    Panel1_Fan = new wxScrolledWindow(Choicebook1, ID_SCROLLEDWINDOW_FAN, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW_FAN"));
    FlexGridSizer109 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer109->AddGrowableCol(0);
    Notebook1 = new wxNotebook(Panel1_Fan, ID_NOTEBOOK_Fan, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK_Fan"));
    Panel9 = new wxPanel(Notebook1, ID_PANEL38, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL38"));
    GridBagSizerFanPosition = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerFanPosition->AddGrowableCol(1);
    StaticText133 = new wxStaticText(Panel9, wxID_ANY, _("Center X:"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    GridBagSizerFanPosition->Add(StaticText133, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_CenterX = new wxSlider(Panel9, ID_SLIDER_Fan_CenterX, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_CenterX"));
    GridBagSizerFanPosition->Add(Slider_Fan_CenterX, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_CenterX = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_CenterX, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_CenterX"));
    TextCtrl_Fan_CenterX->SetMaxLength(3);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel9,wxSize(5,0)).GetWidth());
    BitmapButton_Fan_CenterX = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_CenterX, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_CenterX"));
    BitmapButton_Fan_CenterX->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText135 = new wxStaticText(Panel9, ID_STATICTEXT128, _("Center Y:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT128"));
    GridBagSizerFanPosition->Add(StaticText135, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_CenterY = new wxSlider(Panel9, ID_SLIDER_Fan_CenterY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_CenterY"));
    GridBagSizerFanPosition->Add(Slider_Fan_CenterY, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_CenterY = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_CenterY, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_CenterY"));
    TextCtrl_Fan_CenterY->SetMaxLength(3);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_CenterY = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_CenterY, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_CenterY"));
    BitmapButton_Fan_CenterY->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText143 = new wxStaticText(Panel9, ID_STATICTEXT136, _("Radius1:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT136"));
    GridBagSizerFanPosition->Add(StaticText143, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Start_Radius = new wxSlider(Panel9, ID_SLIDER_Fan_Start_Radius, 1, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Start_Radius"));
    GridBagSizerFanPosition->Add(Slider_Fan_Start_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Start_Radius = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_Start_Radius, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Start_Radius"));
    TextCtrl_Fan_Start_Radius->SetMaxLength(3);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Start_Radius = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_Start_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Start_Radius"));
    BitmapButton_Fan_Start_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText145 = new wxStaticText(Panel9, ID_STATICTEXT142, _("Angle:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT142"));
    GridBagSizerFanPosition->Add(StaticText145, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Start_Angle = new wxSlider(Panel9, ID_SLIDER_Fan_Start_Angle, 0, 0, 360, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Start_Angle"));
    GridBagSizerFanPosition->Add(Slider_Fan_Start_Angle, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Start_Angle = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_Start_Angle, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Start_Angle"));
    TextCtrl_Fan_Start_Angle->SetMaxLength(3);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_Start_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Start_Angle = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_Start_Angle, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Start_Angle"));
    BitmapButton_Fan_Start_Angle->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_Start_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText144 = new wxStaticText(Panel9, ID_STATICTEXT141, _("Radius2:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT141"));
    GridBagSizerFanPosition->Add(StaticText144, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_End_Radius = new wxSlider(Panel9, ID_SLIDER_Fan_End_Radius, 10, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_End_Radius"));
    GridBagSizerFanPosition->Add(Slider_Fan_End_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_End_Radius = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_End_Radius, _("10"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_End_Radius"));
    TextCtrl_Fan_End_Radius->SetMaxLength(3);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_End_Radius = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_End_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_End_Radius"));
    BitmapButton_Fan_End_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText148 = new wxStaticText(Panel9, ID_STATICTEXT145, _("Rev\'s:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT145"));
    GridBagSizerFanPosition->Add(StaticText148, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Revolutions = new wxSlider(Panel9, ID_SLIDER_Fan_Revolutions, 720, 0, 3600, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Revolutions"));
    GridBagSizerFanPosition->Add(Slider_Fan_Revolutions, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Revolutions = new wxTextCtrl(Panel9, IDD_TEXTCTRL_Fan_Revolutions, _("2.0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Revolutions"));
    TextCtrl_Fan_Revolutions->SetMaxLength(4);
    GridBagSizerFanPosition->Add(TextCtrl_Fan_Revolutions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Revolutions = new wxBitmapButton(Panel9, ID_BITMAPBUTTON_SLIDER_Fan_Revolutions, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Revolutions"));
    BitmapButton_Fan_Revolutions->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanPosition->Add(BitmapButton_Fan_Revolutions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel9->SetSizer(GridBagSizerFanPosition);
    GridBagSizerFanPosition->Fit(Panel9);
    GridBagSizerFanPosition->SetSizeHints(Panel9);
    Panel12 = new wxPanel(Notebook1, ID_PANEL42, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL42"));
    GridBagSizerFanBlades = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerFanBlades->AddGrowableCol(1);
    StaticText151 = new wxStaticText(Panel12, ID_STATICTEXT148, _("# Blades:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT148"));
    GridBagSizerFanBlades->Add(StaticText151, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Num_Blades = new wxSlider(Panel12, ID_SLIDER_Fan_Num_Blades, 3, 1, 16, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Num_Blades"));
    GridBagSizerFanBlades->Add(Slider_Fan_Num_Blades, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Num_Blades = new wxTextCtrl(Panel12, IDD_TEXTCTRL_Fan_Num_Blades, _("3"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Num_Blades"));
    TextCtrl_Fan_Num_Blades->SetMaxLength(3);
    GridBagSizerFanBlades->Add(TextCtrl_Fan_Num_Blades, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Num_Blades = new wxBitmapButton(Panel12, ID_BITMAPBUTTON_SLIDER_Fan_Num_Blades, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Num_Blades"));
    BitmapButton_Fan_Num_Blades->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanBlades->Add(BitmapButton_Fan_Num_Blades, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText152 = new wxStaticText(Panel12, ID_STATICTEXT149, _("Width:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT149"));
    GridBagSizerFanBlades->Add(StaticText152, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Blade_Width = new wxSlider(Panel12, ID_SLIDER_Fan_Blade_Width, 50, 5, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Blade_Width"));
    GridBagSizerFanBlades->Add(Slider_Fan_Blade_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Blade_Width = new wxTextCtrl(Panel12, IDD_TEXTCTRL_Fan_Blade_Width, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Blade_Width"));
    TextCtrl_Fan_Blade_Width->SetMaxLength(3);
    GridBagSizerFanBlades->Add(TextCtrl_Fan_Blade_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Blade_Width = new wxBitmapButton(Panel12, ID_BITMAPBUTTON_SLIDER_Fan_Blade_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Blade_Width"));
    BitmapButton_Fan_Blade_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanBlades->Add(BitmapButton_Fan_Blade_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText153 = new wxStaticText(Panel12, ID_STATICTEXT150, _("Angle:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT150"));
    GridBagSizerFanBlades->Add(StaticText153, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Blade_Angle = new wxSlider(Panel12, ID_SLIDER_Fan_Blade_Angle, 90, -360, 360, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Blade_Angle"));
    GridBagSizerFanBlades->Add(Slider_Fan_Blade_Angle, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Blade_Angle = new wxTextCtrl(Panel12, IDD_TEXTCTRL_Fan_Blade_Angle, _("90"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Blade_Angle"));
    TextCtrl_Fan_Blade_Angle->SetMaxLength(4);
    GridBagSizerFanBlades->Add(TextCtrl_Fan_Blade_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Blade_Angle = new wxBitmapButton(Panel12, ID_BITMAPBUTTON_SLIDER_Fan_Blade_Angle, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Blade_Angle"));
    BitmapButton_Fan_Blade_Angle->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanBlades->Add(BitmapButton_Fan_Blade_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText146 = new wxStaticText(Panel12, ID_STATICTEXT143, _("# Elements:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT143"));
    GridBagSizerFanBlades->Add(StaticText146, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Num_Elements = new wxSlider(Panel12, ID_SLIDER_Fan_Num_Elements, 1, 1, 4, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Num_Elements"));
    GridBagSizerFanBlades->Add(Slider_Fan_Num_Elements, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Num_Elements = new wxTextCtrl(Panel12, IDD_TEXTCTRL_Fan_Num_Elements, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Num_Elements"));
    TextCtrl_Fan_Num_Elements->SetMaxLength(3);
    GridBagSizerFanBlades->Add(TextCtrl_Fan_Num_Elements, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Num_Elements = new wxBitmapButton(Panel12, ID_BITMAPBUTTON_SLIDER_Fan_Num_Elements, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Num_Elements"));
    BitmapButton_Fan_Num_Elements->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanBlades->Add(BitmapButton_Fan_Num_Elements, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText147 = new wxStaticText(Panel12, ID_STATICTEXT144, _("Width:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT144"));
    GridBagSizerFanBlades->Add(StaticText147, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Element_Width = new wxSlider(Panel12, ID_SLIDER_Fan_Element_Width, 100, 5, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Element_Width"));
    GridBagSizerFanBlades->Add(Slider_Fan_Element_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Element_Width = new wxTextCtrl(Panel12, IDD_TEXTCTRL_Fan_Element_Width, _("100"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Element_Width"));
    TextCtrl_Fan_Element_Width->SetMaxLength(3);
    GridBagSizerFanBlades->Add(TextCtrl_Fan_Element_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Element_Width = new wxBitmapButton(Panel12, ID_BITMAPBUTTON_SLIDER_Fan_Element_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Element_Width"));
    BitmapButton_Fan_Element_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanBlades->Add(BitmapButton_Fan_Element_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel12->SetSizer(GridBagSizerFanBlades);
    GridBagSizerFanBlades->Fit(Panel12);
    GridBagSizerFanBlades->SetSizeHints(Panel12);
    Panel11 = new wxPanel(Notebook1, ID_PANEL41, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL41"));
    GridBagSizerFanOptions = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerFanOptions->AddGrowableCol(1);
    StaticText149 = new wxStaticText(Panel11, ID_STATICTEXT146, _("Duration:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT146"));
    GridBagSizerFanOptions->Add(StaticText149, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Duration = new wxSlider(Panel11, ID_SLIDER_Fan_Duration, 80, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Duration"));
    GridBagSizerFanOptions->Add(Slider_Fan_Duration, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Duration = new wxTextCtrl(Panel11, IDD_TEXTCTRL_Fan_Duration, _("80"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Duration"));
    TextCtrl_Fan_Duration->SetMaxLength(3);
    GridBagSizerFanOptions->Add(TextCtrl_Fan_Duration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Duration = new wxBitmapButton(Panel11, ID_BITMAPBUTTON_SLIDER_Fan_Duration, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Duration"));
    BitmapButton_Fan_Duration->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanOptions->Add(BitmapButton_Fan_Duration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText150 = new wxStaticText(Panel11, ID_STATICTEXT147, _("Acceleration:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT147"));
    GridBagSizerFanOptions->Add(StaticText150, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fan_Accel = new wxSlider(Panel11, ID_SLIDER_Fan_Accel, 0, -10, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fan_Accel"));
    GridBagSizerFanOptions->Add(Slider_Fan_Accel, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Fan_Accel = new wxTextCtrl(Panel11, IDD_TEXTCTRL_Fan_Accel, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Fan_Accel"));
    TextCtrl_Fan_Accel->SetMaxLength(3);
    GridBagSizerFanOptions->Add(TextCtrl_Fan_Accel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Fan_Accel = new wxBitmapButton(Panel11, ID_BITMAPBUTTON_SLIDER_Fan_Accel, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fan_Accel"));
    BitmapButton_Fan_Accel->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerFanOptions->Add(BitmapButton_Fan_Accel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Fan_Reverse = new wxCheckBox(Panel11, ID_CHECKBOX_Fan_Reverse, _("Reverse:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Fan_Reverse"));
    CheckBox_Fan_Reverse->SetValue(false);
    GridBagSizerFanOptions->Add(CheckBox_Fan_Reverse, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Fan_Blend_Edges = new wxCheckBox(Panel11, ID_CHECKBOX_Fan_Blend_Edges, _("Blend Edges:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Fan_Blend_Edges"));
    CheckBox_Fan_Blend_Edges->SetValue(true);
    GridBagSizerFanOptions->Add(CheckBox_Fan_Blend_Edges, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel11->SetSizer(GridBagSizerFanOptions);
    GridBagSizerFanOptions->Fit(Panel11);
    GridBagSizerFanOptions->SetSizeHints(Panel11);
    Notebook1->AddPage(Panel9, _("Position"), false);
    Notebook1->AddPage(Panel12, _("Blades"), false);
    Notebook1->AddPage(Panel11, _("Options"), false);
    FlexGridSizer109->Add(Notebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Fan->SetSizer(FlexGridSizer109);
    FlexGridSizer109->Fit(Panel1_Fan);
    FlexGridSizer109->SetSizeHints(Panel1_Fan);
    Panel1_Fire = new wxScrolledWindow(Choicebook1, ID_PANEL12, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL12"));
    FlexGridSizer38 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer38->AddGrowableCol(1);
    StaticText83 = new wxStaticText(Panel1_Fire, ID_STATICTEXT84, _("Height"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT84"));
    FlexGridSizer38->Add(StaticText83, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Fire_Height = new wxSlider(Panel1_Fire, ID_SLIDER_Fire_Height, 50, 10, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fire_Height"));
    FlexGridSizer38->Add(Slider_Fire_Height, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_FireHeight = new wxBitmapButton(Panel1_Fire, ID_BITMAPBUTTON_SLIDER_Fire_Height, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fire_Height"));
    BitmapButton_FireHeight->SetDefault();
    BitmapButton_FireHeight->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer38->Add(BitmapButton_FireHeight, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText132 = new wxStaticText(Panel1_Fire, ID_STATICTEXT133, _("Hue Shift"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT133"));
    FlexGridSizer38->Add(StaticText132, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Fire_HueShift = new wxSlider(Panel1_Fire, ID_SLIDER_Fire_HueShift, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fire_HueShift"));
    FlexGridSizer38->Add(Slider_Fire_HueShift, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_FireWidth = new wxBitmapButton(Panel1_Fire, ID_BITMAPBUTTON_SLIDER_Fire_HueShift, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fire_HueShift"));
    BitmapButton_FireWidth->SetDefault();
    BitmapButton_FireWidth->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer38->Add(BitmapButton_FireWidth, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText134 = new wxStaticText(Panel1_Fire, ID_STATICTEXT135, _("Grow Fire\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT135"));
    FlexGridSizer38->Add(StaticText134, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    CheckBox_Fire_GrowFire = new wxCheckBox(Panel1_Fire, ID_CHECKBOX_Fire_GrowFire, _("Yes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Fire_GrowFire"));
    CheckBox_Fire_GrowFire->SetValue(false);
    FlexGridSizer38->Add(CheckBox_Fire_GrowFire, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_FireGrow = new wxBitmapButton(Panel1_Fire, ID_BITMAPBUTTON_CHECKBOX_Fire_GrowFire, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Fire_GrowFire"));
    BitmapButton_FireGrow->SetDefault();
    BitmapButton_FireGrow->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer38->Add(BitmapButton_FireGrow, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Fire->SetSizer(FlexGridSizer38);
    FlexGridSizer38->Fit(Panel1_Fire);
    FlexGridSizer38->SetSizeHints(Panel1_Fire);
    Panel1_Fireworks = new wxScrolledWindow(Choicebook1, ID_PANEL36, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL36"));
    FlexGridSizer73 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer73->AddGrowableCol(1);
    StaticText94 = new wxStaticText(Panel1_Fireworks, ID_STATICTEXT95, _("Number of Explosions"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT95"));
    FlexGridSizer73->Add(StaticText94, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fireworks_Number_Explosions = new wxSlider(Panel1_Fireworks, ID_SLIDER_Fireworks_Number_Explosions, 10, 1, 95, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fireworks_Number_Explosions"));
    FlexGridSizer73->Add(Slider_Fireworks_Number_Explosions, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_FireworksNumberExplosions = new wxBitmapButton(Panel1_Fireworks, ID_BITMAPBUTTON_SLIDER_Fireworks_Number_Explosions, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fireworks_Number_Explosions"));
    BitmapButton_FireworksNumberExplosions->SetDefault();
    BitmapButton_FireworksNumberExplosions->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer73->Add(BitmapButton_FireworksNumberExplosions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText91 = new wxStaticText(Panel1_Fireworks, ID_STATICTEXT92, _("Particles in Explosion"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT92"));
    FlexGridSizer73->Add(StaticText91, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fireworks_Count = new wxSlider(Panel1_Fireworks, ID_SLIDER_Fireworks_Count, 50, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fireworks_Count"));
    FlexGridSizer73->Add(Slider_Fireworks_Count, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_FireworksCount = new wxBitmapButton(Panel1_Fireworks, ID_BITMAPBUTTON_SLIDER_Fireworks_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fireworks_Count"));
    BitmapButton_FireworksCount->SetDefault();
    BitmapButton_FireworksCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer73->Add(BitmapButton_FireworksCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText93 = new wxStaticText(Panel1_Fireworks, ID_STATICTEXT94, _("Velocity of Particles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT94"));
    FlexGridSizer73->Add(StaticText93, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fireworks_Velocity = new wxSlider(Panel1_Fireworks, ID_SLIDER_Fireworks_Velocity, 2, 1, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fireworks_Velocity"));
    FlexGridSizer73->Add(Slider_Fireworks_Velocity, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_FireworksVelocity = new wxBitmapButton(Panel1_Fireworks, ID_BITMAPBUTTON_SLIDER_Fireworks_Velocity, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fireworks_Velocity"));
    BitmapButton_FireworksVelocity->SetDefault();
    BitmapButton_FireworksVelocity->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer73->Add(BitmapButton_FireworksVelocity, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText95 = new wxStaticText(Panel1_Fireworks, ID_STATICTEXT96, _("Particle Fade"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT96"));
    FlexGridSizer73->Add(StaticText95, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Fireworks_Fade = new wxSlider(Panel1_Fireworks, ID_SLIDER_Fireworks_Fade, 50, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Fireworks_Fade"));
    FlexGridSizer73->Add(Slider_Fireworks_Fade, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_FireworksFade = new wxBitmapButton(Panel1_Fireworks, ID_BITMAPBUTTON_SLIDER_Fireworks_Fade, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Fireworks_Fade"));
    BitmapButton_FireworksFade->SetDefault();
    BitmapButton_FireworksFade->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer73->Add(BitmapButton_FireworksFade, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Fireworks->SetSizer(FlexGridSizer73);
    FlexGridSizer73->Fit(Panel1_Fireworks);
    FlexGridSizer73->SetSizeHints(Panel1_Fireworks);
    Panel1_Galaxy = new wxScrolledWindow(Choicebook1, ID_SCROLLEDWINDOW1, wxPoint(-3,-233), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW1"));
    FlexGridSizer108 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer108->AddGrowableCol(0);
    Notebook_Galaxy = new wxNotebook(Panel1_Galaxy, ID_NOTEBOOK_Galaxy, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK_Galaxy"));
    Panel6 = new wxPanel(Notebook_Galaxy, ID_PANEL29, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL29"));
    GridBagSizerGalaxyStart = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerGalaxyStart->AddGrowableCol(1);
    StaticText125 = new wxStaticText(Panel6, wxID_ANY, _("Center X:"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    GridBagSizerGalaxyStart->Add(StaticText125, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_CenterX = new wxSlider(Panel6, ID_SLIDER_Galaxy_CenterX, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_CenterX"));
    GridBagSizerGalaxyStart->Add(Slider_Galaxy_CenterX, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_CenterX = new wxTextCtrl(Panel6, IDD_TEXTCTRL_Galaxy_CenterX, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_CenterX"));
    TextCtrl_Galaxy_CenterX->SetMaxLength(3);
    GridBagSizerGalaxyStart->Add(TextCtrl_Galaxy_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel6,wxSize(5,0)).GetWidth());
    BitmapButton_Galaxy_CenterX = new wxBitmapButton(Panel6, ID_BITMAPBUTTON_SLIDER_Galaxy_CenterX, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_CenterX"));
    BitmapButton_Galaxy_CenterX->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyStart->Add(BitmapButton_Galaxy_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText126 = new wxStaticText(Panel6, ID_STATICTEXT2, _("Center Y:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    GridBagSizerGalaxyStart->Add(StaticText126, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_CenterY = new wxSlider(Panel6, ID_SLIDER_Galaxy_CenterY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_CenterY"));
    GridBagSizerGalaxyStart->Add(Slider_Galaxy_CenterY, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_CenterY = new wxTextCtrl(Panel6, IDD_TEXTCTRL_Galaxy_CenterY, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_CenterY"));
    TextCtrl_Galaxy_CenterY->SetMaxLength(3);
    GridBagSizerGalaxyStart->Add(TextCtrl_Galaxy_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_CenterY = new wxBitmapButton(Panel6, ID_BITMAPBUTTON_SLIDER_Galaxy_CenterY, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_CenterY"));
    BitmapButton_Galaxy_CenterY->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyStart->Add(BitmapButton_Galaxy_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText127 = new wxStaticText(Panel6, ID_STATICTEXT125, _("Radius:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT125"));
    GridBagSizerGalaxyStart->Add(StaticText127, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Start_Radius = new wxSlider(Panel6, ID_SLIDER_Galaxy_Start_Radius, 1, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Start_Radius"));
    GridBagSizerGalaxyStart->Add(Slider_Galaxy_Start_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Start_Radius = new wxTextCtrl(Panel6, IDD_TEXTCTRL_Galaxy_Start_Radius, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Start_Radius"));
    TextCtrl_Galaxy_Start_Radius->SetMaxLength(3);
    GridBagSizerGalaxyStart->Add(TextCtrl_Galaxy_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Start_Radius = new wxBitmapButton(Panel6, ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Radius"));
    BitmapButton_Galaxy_Start_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyStart->Add(BitmapButton_Galaxy_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText131 = new wxStaticText(Panel6, ID_STATICTEXT127, _("Width:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT127"));
    GridBagSizerGalaxyStart->Add(StaticText131, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Start_Width = new wxSlider(Panel6, ID_SLIDER_Galaxy_Start_Width, 5, 0, 255, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Start_Width"));
    GridBagSizerGalaxyStart->Add(Slider_Galaxy_Start_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Start_Width = new wxTextCtrl(Panel6, IDD_TEXTCTRL_Galaxy_Start_Width, _("5"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Start_Width"));
    TextCtrl_Galaxy_Start_Width->SetMaxLength(3);
    GridBagSizerGalaxyStart->Add(TextCtrl_Galaxy_Start_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Start_Width = new wxBitmapButton(Panel6, ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Width"));
    BitmapButton_Galaxy_Start_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyStart->Add(BitmapButton_Galaxy_Start_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText129 = new wxStaticText(Panel6, ID_STATICTEXT126, _("Angle:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT126"));
    GridBagSizerGalaxyStart->Add(StaticText129, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Start_Angle = new wxSlider(Panel6, ID_SLIDER_Galaxy_Start_Angle, 0, 0, 360, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Start_Angle"));
    GridBagSizerGalaxyStart->Add(Slider_Galaxy_Start_Angle, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Start_Angle = new wxTextCtrl(Panel6, IDD_TEXTCTRL_Galaxy_Start_Angle, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Start_Angle"));
    TextCtrl_Galaxy_Start_Angle->SetMaxLength(3);
    GridBagSizerGalaxyStart->Add(TextCtrl_Galaxy_Start_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Start_Angle = new wxBitmapButton(Panel6, ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Angle, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Angle"));
    BitmapButton_Galaxy_Start_Angle->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyStart->Add(BitmapButton_Galaxy_Start_Angle, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel6->SetSizer(GridBagSizerGalaxyStart);
    GridBagSizerGalaxyStart->Fit(Panel6);
    GridBagSizerGalaxyStart->SetSizeHints(Panel6);
    Panel7 = new wxPanel(Notebook_Galaxy, ID_PANEL31, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL31"));
    GridBagSizerGalaxyEnd = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerGalaxyEnd->AddGrowableCol(1);
    StaticText138 = new wxStaticText(Panel7, ID_STATICTEXT130, _("Radius:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT130"));
    GridBagSizerGalaxyEnd->Add(StaticText138, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_End_Radius = new wxSlider(Panel7, ID_SLIDER_Galaxy_End_Radius, 10, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_End_Radius"));
    GridBagSizerGalaxyEnd->Add(Slider_Galaxy_End_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_End_Radius = new wxTextCtrl(Panel7, IDD_TEXTCTRL_Galaxy_End_Radius, _("10"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_End_Radius"));
    TextCtrl_Galaxy_End_Radius->SetMaxLength(3);
    GridBagSizerGalaxyEnd->Add(TextCtrl_Galaxy_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_End_Radius = new wxBitmapButton(Panel7, ID_BITMAPBUTTON_SLIDER_Galaxy_End_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_End_Radius"));
    BitmapButton_Galaxy_End_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyEnd->Add(BitmapButton_Galaxy_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText139 = new wxStaticText(Panel7, ID_STATICTEXT132, _("Width:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT132"));
    GridBagSizerGalaxyEnd->Add(StaticText139, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_End_Width = new wxSlider(Panel7, ID_SLIDER_Galaxy_End_Width, 5, 0, 255, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_End_Width"));
    GridBagSizerGalaxyEnd->Add(Slider_Galaxy_End_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_End_Width = new wxTextCtrl(Panel7, IDD_TEXTCTRL_Galaxy_End_Width, _("5"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_End_Width"));
    TextCtrl_Galaxy_End_Width->SetMaxLength(3);
    GridBagSizerGalaxyEnd->Add(TextCtrl_Galaxy_End_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_End_Width = new wxBitmapButton(Panel7, ID_BITMAPBUTTON_SLIDER_Galaxy_End_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_End_Width"));
    BitmapButton_Galaxy_End_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyEnd->Add(BitmapButton_Galaxy_End_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText140 = new wxStaticText(Panel7, ID_STATICTEXT134, _("Rev\'s:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT134"));
    GridBagSizerGalaxyEnd->Add(StaticText140, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Revolutions = new wxSlider(Panel7, ID_SLIDER_Galaxy_Revolutions, 1440, 0, 3600, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Revolutions"));
    GridBagSizerGalaxyEnd->Add(Slider_Galaxy_Revolutions, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Revolutions = new wxTextCtrl(Panel7, IDD_TEXTCTRL_Galaxy_Revolutions, _("4.0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Revolutions"));
    TextCtrl_Galaxy_Revolutions->SetMaxLength(4);
    GridBagSizerGalaxyEnd->Add(TextCtrl_Galaxy_Revolutions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Revolutions = new wxBitmapButton(Panel7, ID_BITMAPBUTTON_SLIDER_Galaxy_Revolutions, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Revolutions"));
    BitmapButton_Galaxy_Revolutions->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyEnd->Add(BitmapButton_Galaxy_Revolutions, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel7->SetSizer(GridBagSizerGalaxyEnd);
    GridBagSizerGalaxyEnd->Fit(Panel7);
    GridBagSizerGalaxyEnd->SetSizeHints(Panel7);
    Panel8 = new wxPanel(Notebook_Galaxy, ID_PANEL32, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL32"));
    GridBagSizerGalaxyOptions = new wxFlexGridSizer(0, 4, 0, 0);
    GridBagSizerGalaxyOptions->AddGrowableCol(1);
    StaticText141 = new wxStaticText(Panel8, ID_STATICTEXT139, _("Head Duration:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT139"));
    GridBagSizerGalaxyOptions->Add(StaticText141, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Duration = new wxSlider(Panel8, ID_SLIDER_Galaxy_Duration, 20, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Duration"));
    GridBagSizerGalaxyOptions->Add(Slider_Galaxy_Duration, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Duration = new wxTextCtrl(Panel8, IDD_TEXTCTRL_Galaxy_Duration, _("20"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Duration"));
    TextCtrl_Galaxy_Duration->SetMaxLength(3);
    GridBagSizerGalaxyOptions->Add(TextCtrl_Galaxy_Duration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Duration = new wxBitmapButton(Panel8, ID_BITMAPBUTTON_SLIDER_Galaxy_Duration, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Duration"));
    BitmapButton_Galaxy_Duration->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyOptions->Add(BitmapButton_Galaxy_Duration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText142 = new wxStaticText(Panel8, ID_STATICTEXT140, _("Acceleration:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT140"));
    GridBagSizerGalaxyOptions->Add(StaticText142, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Galaxy_Accel = new wxSlider(Panel8, ID_SLIDER_Galaxy_Accel, 0, -10, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Galaxy_Accel"));
    GridBagSizerGalaxyOptions->Add(Slider_Galaxy_Accel, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Galaxy_Accel = new wxTextCtrl(Panel8, IDD_TEXTCTRL_Galaxy_Accel, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Galaxy_Accel"));
    TextCtrl_Galaxy_Accel->SetMaxLength(3);
    GridBagSizerGalaxyOptions->Add(TextCtrl_Galaxy_Accel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Galaxy_Accel = new wxBitmapButton(Panel8, ID_BITMAPBUTTON_SLIDER_Galaxy_Accel, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Galaxy_Accel"));
    BitmapButton_Galaxy_Accel->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerGalaxyOptions->Add(BitmapButton_Galaxy_Accel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Galaxy_Reverse = new wxCheckBox(Panel8, ID_CHECKBOX_Galaxy_Reverse, _("Reverse:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Galaxy_Reverse"));
    CheckBox_Galaxy_Reverse->SetValue(false);
    GridBagSizerGalaxyOptions->Add(CheckBox_Galaxy_Reverse, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Galaxy_Blend_Edges = new wxCheckBox(Panel8, ID_CHECKBOX_Galaxy_Blend_Edges, _("Blend Edges:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Galaxy_Blend_Edges"));
    CheckBox_Galaxy_Blend_Edges->SetValue(true);
    GridBagSizerGalaxyOptions->Add(CheckBox_Galaxy_Blend_Edges, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Galaxy_Inward = new wxCheckBox(Panel8, ID_CHECKBOX_Galaxy_Inward, _("Inward:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Galaxy_Inward"));
    CheckBox_Galaxy_Inward->SetValue(false);
    GridBagSizerGalaxyOptions->Add(CheckBox_Galaxy_Inward, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizerGalaxyOptions->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel8->SetSizer(GridBagSizerGalaxyOptions);
    GridBagSizerGalaxyOptions->Fit(Panel8);
    GridBagSizerGalaxyOptions->SetSizeHints(Panel8);
    Notebook_Galaxy->AddPage(Panel6, _("Start"), false);
    Notebook_Galaxy->AddPage(Panel7, _("End"), false);
    Notebook_Galaxy->AddPage(Panel8, _("Options"), false);
    FlexGridSizer108->Add(Notebook_Galaxy, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Galaxy->SetSizer(FlexGridSizer108);
    FlexGridSizer108->Fit(Panel1_Galaxy);
    FlexGridSizer108->SetSizeHints(Panel1_Galaxy);
    Panel1_Garlands = new wxScrolledWindow(Choicebook1, ID_PANEL14, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL14"));
    FlexGridSizer39 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer39->AddGrowableCol(1);
    StaticText32 = new wxStaticText(Panel1_Garlands, ID_STATICTEXT34, _("Garland Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT34"));
    FlexGridSizer39->Add(StaticText32, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Garlands_Type = new wxSlider(Panel1_Garlands, ID_SLIDER_Garlands_Type, 0, 0, 4, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Garlands_Type"));
    FlexGridSizer39->Add(Slider_Garlands_Type, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_GarlandsType = new wxBitmapButton(Panel1_Garlands, ID_BITMAPBUTTON_SLIDER_Garlands_Type, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Garlands_Type"));
    BitmapButton_GarlandsType->SetDefault();
    BitmapButton_GarlandsType->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer39->Add(BitmapButton_GarlandsType, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText33 = new wxStaticText(Panel1_Garlands, ID_STATICTEXT35, _("Spacing"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT35"));
    FlexGridSizer39->Add(StaticText33, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Garlands_Spacing = new wxSlider(Panel1_Garlands, ID_SLIDER_Garlands_Spacing, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Garlands_Spacing"));
    FlexGridSizer39->Add(Slider_Garlands_Spacing, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_GarlandsSpacing = new wxBitmapButton(Panel1_Garlands, ID_BITMAPBUTTON_SLIDER_Garlands_Spacing, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Garlands_Spacing"));
    BitmapButton_GarlandsSpacing->SetDefault();
    BitmapButton_GarlandsSpacing->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer39->Add(BitmapButton_GarlandsSpacing, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Garlands->SetSizer(FlexGridSizer39);
    FlexGridSizer39->Fit(Panel1_Garlands);
    FlexGridSizer39->SetSizeHints(Panel1_Garlands);
    Panel1_Glediator = new wxScrolledWindow(Choicebook1, ID_PANEL17, wxPoint(37,9), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL17"));
    FlexGridSizer53 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer54 = new wxFlexGridSizer(0, 2, 0, 0);
    ButtonGledFile = new wxButton(Panel1_Glediator, ID_BUTTON_GLED_FILE, _("Glediator *.gled File"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_GLED_FILE"));
    FlexGridSizer54->Add(ButtonGledFile, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Glediator_Filename = new wxBitmapButton(Panel1_Glediator, ID_BITMAPBUTTON10, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(20,17), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
    BitmapButton_Glediator_Filename->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer54->Add(BitmapButton_Glediator_Filename, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer53->Add(FlexGridSizer54, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer53->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Glediator_Filename = new wxTextCtrl(Panel1_Glediator, ID_TEXTCTRL_Glediator_Filename, wxEmptyString, wxDefaultPosition, wxDLG_UNIT(Panel1_Glediator,wxSize(200,-1)), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL_Glediator_Filename"));
    FlexGridSizer53->Add(TextCtrl_Glediator_Filename, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer53->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Glediator->SetSizer(FlexGridSizer53);
    FlexGridSizer53->Fit(Panel1_Glediator);
    FlexGridSizer53->SetSizeHints(Panel1_Glediator);
    Panel1_Life = new wxScrolledWindow(Choicebook1, ID_PANEL16, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL16"));
    FlexGridSizer40 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer40->AddGrowableCol(1);
    StaticText35 = new wxStaticText(Panel1_Life, ID_STATICTEXT36, _("Cells to start"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT36"));
    FlexGridSizer40->Add(StaticText35, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Life_Count = new wxSlider(Panel1_Life, ID_SLIDER_Life_Count, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Life_Count"));
    FlexGridSizer40->Add(Slider_Life_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_LifeCount = new wxBitmapButton(Panel1_Life, ID_BITMAPBUTTON_SLIDER_Life_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Life_Count"));
    BitmapButton_LifeCount->SetDefault();
    BitmapButton_LifeCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer40->Add(BitmapButton_LifeCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText37 = new wxStaticText(Panel1_Life, ID_STATICTEXT37, _("Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT37"));
    FlexGridSizer40->Add(StaticText37, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Life_Seed = new wxSlider(Panel1_Life, ID_SLIDER_Life_Seed, 0, 0, 4, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Life_Seed"));
    FlexGridSizer40->Add(Slider_Life_Seed, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_LifeSpeed = new wxBitmapButton(Panel1_Life, ID_BITMAPBUTTON_SLIDER_Life_Seed, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Life_Seed"));
    BitmapButton_LifeSpeed->SetDefault();
    BitmapButton_LifeSpeed->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer40->Add(BitmapButton_LifeSpeed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Life->SetSizer(FlexGridSizer40);
    FlexGridSizer40->Fit(Panel1_Life);
    FlexGridSizer40->SetSizeHints(Panel1_Life);
    Panel1_Meteors = new wxScrolledWindow(Choicebook1, ID_PANEL18, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL18"));
    FlexGridSizer41 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer41->AddGrowableCol(1);
    StaticText39 = new wxStaticText(Panel1_Meteors, ID_STATICTEXT39, _("Colors"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT39"));
    FlexGridSizer41->Add(StaticText39, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Meteors_Type = new wxChoice(Panel1_Meteors, ID_CHOICE_Meteors_Type, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Meteors_Type"));
    FlexGridSizer41->Add(Choice_Meteors_Type, 1, wxTOP|wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MeteorsType = new wxBitmapButton(Panel1_Meteors, ID_BITMAPBUTTON_CHOICE_Meteors_Type, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Meteors_Type"));
    BitmapButton_MeteorsType->SetDefault();
    BitmapButton_MeteorsType->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer41->Add(BitmapButton_MeteorsType, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText128 = new wxStaticText(Panel1_Meteors, ID_STATICTEXT129, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT129"));
    FlexGridSizer41->Add(StaticText128, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Meteors_Effect = new wxChoice(Panel1_Meteors, ID_CHOICE_Meteors_Effect, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Meteors_Effect"));
    FlexGridSizer41->Add(Choice_Meteors_Effect, 1, wxTOP|wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_MeteorsEffect = new wxBitmapButton(Panel1_Meteors, ID_BITMAPBUTTON_CHOICE_Meteors_Effect, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Meteors_Effect"));
    BitmapButton_MeteorsEffect->SetDefault();
    BitmapButton_MeteorsEffect->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer41->Add(BitmapButton_MeteorsEffect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText41 = new wxStaticText(Panel1_Meteors, ID_STATICTEXT41, _("Count"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT41"));
    FlexGridSizer41->Add(StaticText41, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Meteors_Count = new wxSlider(Panel1_Meteors, ID_SLIDER_Meteors_Count, 10, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Meteors_Count"));
    FlexGridSizer41->Add(Slider_Meteors_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_MeteorsCount = new wxBitmapButton(Panel1_Meteors, ID_BITMAPBUTTON_SLIDER_Meteors_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Meteors_Count"));
    BitmapButton_MeteorsCount->SetDefault();
    BitmapButton_MeteorsCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer41->Add(BitmapButton_MeteorsCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText43 = new wxStaticText(Panel1_Meteors, ID_STATICTEXT43, _("Trail Length"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT43"));
    FlexGridSizer41->Add(StaticText43, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Meteors_Length = new wxSlider(Panel1_Meteors, ID_SLIDER_Meteors_Length, 25, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Meteors_Length"));
    FlexGridSizer41->Add(Slider_Meteors_Length, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_MeteorsLength = new wxBitmapButton(Panel1_Meteors, ID_BITMAPBUTTON_SLIDER_Meteors_Length, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Meteors_Length"));
    BitmapButton_MeteorsLength->SetDefault();
    BitmapButton_MeteorsLength->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer41->Add(BitmapButton_MeteorsLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText130 = new wxStaticText(Panel1_Meteors, ID_STATICTEXT131, _("Swirl Intensity"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT131"));
    FlexGridSizer41->Add(StaticText130, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Meteors_Swirl_Intensity = new wxSlider(Panel1_Meteors, ID_SLIDER_Meteors_Swirl_Intensity, 0, 0, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Meteors_Swirl_Intensity"));
    FlexGridSizer41->Add(Slider_Meteors_Swirl_Intensity, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_MeteorsSwirlIntensity = new wxBitmapButton(Panel1_Meteors, ID_BITMAPBUTTON_SLIDER_Meteors_Swirl_Intensity, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Meteors_Swirl_Intensity"));
    BitmapButton_MeteorsSwirlIntensity->SetDefault();
    BitmapButton_MeteorsSwirlIntensity->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer41->Add(BitmapButton_MeteorsSwirlIntensity, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Meteors->SetSizer(FlexGridSizer41);
    FlexGridSizer41->Fit(Panel1_Meteors);
    FlexGridSizer41->SetSizeHints(Panel1_Meteors);
    Panel1_Morph = new wxScrolledWindow(Choicebook1, ID_PANEL_Morph, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL_Morph"));
    FlexGridSizer78 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer78->AddGrowableCol(0);
    Notebook_Morph = new wxNotebook(Panel1_Morph, ID_NOTEBOOK_Morph, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK_Morph"));
    MorphPanelStart = new wxPanel(Notebook_Morph, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    FlexGridSizer86 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer86->AddGrowableCol(1);
    StaticText2 = new wxStaticText(MorphPanelStart, wxID_ANY, _("X1a:"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer86->Add(StaticText2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_Start_X1 = new wxSlider(MorphPanelStart, ID_SLIDER_Morph_Start_X1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_Start_X1"));
    FlexGridSizer86->Add(Slider_Morph_Start_X1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_Start_X1 = new wxTextCtrl(MorphPanelStart, IDD_TEXTCTRL_Morph_Start_X1, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_Start_X1"));
    TextCtrl_Morph_Start_X1->SetMaxLength(3);
    FlexGridSizer86->Add(TextCtrl_Morph_Start_X1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_Start_X1 = new wxBitmapButton(MorphPanelStart, ID_BITMAPBUTTON_SLIDER_Morph_Start_X1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_Start_X1"));
    BitmapButton_Morph_Start_X1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer86->Add(BitmapButton_Morph_Start_X1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(MorphPanelStart, ID_STATICTEXT3, _("Y1a:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    FlexGridSizer86->Add(StaticText3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_Start_Y1 = new wxSlider(MorphPanelStart, ID_SLIDER_Morph_Start_Y1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_Start_Y1"));
    FlexGridSizer86->Add(Slider_Morph_Start_Y1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_Start_Y1 = new wxTextCtrl(MorphPanelStart, IDD_TEXTCTRL_Morph_Start_Y1, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_Start_Y1"));
    TextCtrl_Morph_Start_Y1->SetMaxLength(3);
    FlexGridSizer86->Add(TextCtrl_Morph_Start_Y1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_Start_Y1 = new wxBitmapButton(MorphPanelStart, ID_BITMAPBUTTON_SLIDER_Morph_Start_Y1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_Start_Y1"));
    BitmapButton_Morph_Start_Y1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer86->Add(BitmapButton_Morph_Start_Y1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText59 = new wxStaticText(MorphPanelStart, ID_STATICTEXT61, _("X1b:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT61"));
    FlexGridSizer86->Add(StaticText59, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_Start_X2 = new wxSlider(MorphPanelStart, ID_SLIDER_Morph_Start_X2, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_Start_X2"));
    FlexGridSizer86->Add(Slider_Morph_Start_X2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_Start_X2 = new wxTextCtrl(MorphPanelStart, IDD_TEXTCTRL_Morph_Start_X2, _("100"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_Start_X2"));
    TextCtrl_Morph_Start_X2->SetMaxLength(3);
    FlexGridSizer86->Add(TextCtrl_Morph_Start_X2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_Start_X2 = new wxBitmapButton(MorphPanelStart, ID_BITMAPBUTTON_SLIDER_Morph_Start_X2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_Start_X2"));
    BitmapButton_Morph_Start_X2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer86->Add(BitmapButton_Morph_Start_X2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText99 = new wxStaticText(MorphPanelStart, ID_STATICTEXT102, _("Y1b:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT102"));
    FlexGridSizer86->Add(StaticText99, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_Start_Y2 = new wxSlider(MorphPanelStart, ID_SLIDER_Morph_Start_Y2, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_Start_Y2"));
    FlexGridSizer86->Add(Slider_Morph_Start_Y2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_Start_Y2 = new wxTextCtrl(MorphPanelStart, IDD_TEXTCTRL_Morph_Start_Y2, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_Start_Y2"));
    TextCtrl_Morph_Start_Y2->SetMaxLength(3);
    FlexGridSizer86->Add(TextCtrl_Morph_Start_Y2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_Start_Y2 = new wxBitmapButton(MorphPanelStart, ID_BITMAPBUTTON_SLIDER_Morph_Start_Y2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_Start_Y2"));
    BitmapButton_Morph_Start_Y2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer86->Add(BitmapButton_Morph_Start_Y2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText115 = new wxStaticText(MorphPanelStart, ID_STATICTEXT115, _("Length:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT115"));
    FlexGridSizer86->Add(StaticText115, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_MorphStartLength = new wxSlider(MorphPanelStart, ID_SLIDER_MorphStartLength, 1, 0, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_MorphStartLength"));
    FlexGridSizer86->Add(Slider_MorphStartLength, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_MorphStartLength = new wxTextCtrl(MorphPanelStart, IDD_TEXTCTRL_MorphStartLength, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_MorphStartLength"));
    TextCtrl_MorphStartLength->SetMaxLength(3);
    FlexGridSizer86->Add(TextCtrl_MorphStartLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphStartLength = new wxBitmapButton(MorphPanelStart, ID_BITMAPBUTTON_SLIDER_MorphStartLength, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_MorphStartLength"));
    BitmapButton_MorphStartLength->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer86->Add(BitmapButton_MorphStartLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer86->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Morph_Start_Link = new wxCheckBox(MorphPanelStart, ID_CHECKBOX_Morph_Start_Link, _("Link Points"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Morph_Start_Link"));
    CheckBox_Morph_Start_Link->SetValue(false);
    FlexGridSizer86->Add(CheckBox_Morph_Start_Link, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    MorphPanelStart->SetSizer(FlexGridSizer86);
    FlexGridSizer86->Fit(MorphPanelStart);
    FlexGridSizer86->SetSizeHints(MorphPanelStart);
    MorphPanelEnd = new wxPanel(Notebook_Morph, ID_PANEL27, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL27"));
    FlexGridSizer94 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer94->AddGrowableCol(1);
    StaticText117 = new wxStaticText(MorphPanelEnd, ID_STATICTEXT116, _("X2a:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT116"));
    FlexGridSizer94->Add(StaticText117, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_End_X1 = new wxSlider(MorphPanelEnd, ID_SLIDER_Morph_End_X1, 0, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_End_X1"));
    FlexGridSizer94->Add(Slider_Morph_End_X1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_End_X1 = new wxTextCtrl(MorphPanelEnd, IDD_TEXTCTRL_Morph_End_X1, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_End_X1"));
    TextCtrl_Morph_End_X1->SetMaxLength(3);
    FlexGridSizer94->Add(TextCtrl_Morph_End_X1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_End_X1 = new wxBitmapButton(MorphPanelEnd, ID_BITMAPBUTTON_SLIDER_Morph_End_X1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_End_X1"));
    BitmapButton_Morph_End_X1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer94->Add(BitmapButton_Morph_End_X1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText119 = new wxStaticText(MorphPanelEnd, ID_STATICTEXT117, _("Y2a:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT117"));
    FlexGridSizer94->Add(StaticText119, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_End_Y1 = new wxSlider(MorphPanelEnd, ID_SLIDER_Morph_End_Y1, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_End_Y1"));
    FlexGridSizer94->Add(Slider_Morph_End_Y1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_End_Y1 = new wxTextCtrl(MorphPanelEnd, IDD_TEXTCTRL_Morph_End_Y1, _("100"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_End_Y1"));
    TextCtrl_Morph_End_Y1->SetMaxLength(3);
    FlexGridSizer94->Add(TextCtrl_Morph_End_Y1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_End_Y1 = new wxBitmapButton(MorphPanelEnd, ID_BITMAPBUTTON_SLIDER_Morph_End_Y1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_End_Y1"));
    BitmapButton_Morph_End_Y1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer94->Add(BitmapButton_Morph_End_Y1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText120 = new wxStaticText(MorphPanelEnd, ID_STATICTEXT119, _("X2b:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT119"));
    FlexGridSizer94->Add(StaticText120, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_End_X2 = new wxSlider(MorphPanelEnd, ID_SLIDER_Morph_End_X2, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_End_X2"));
    FlexGridSizer94->Add(Slider_Morph_End_X2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_End_X2 = new wxTextCtrl(MorphPanelEnd, IDD_TEXTCTRL_Morph_End_X2, _("100"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_End_X2"));
    TextCtrl_Morph_End_X2->SetMaxLength(3);
    FlexGridSizer94->Add(TextCtrl_Morph_End_X2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_End_X2 = new wxBitmapButton(MorphPanelEnd, ID_BITMAPBUTTON_SLIDER_Morph_End_X2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_End_X2"));
    BitmapButton_Morph_End_X2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer94->Add(BitmapButton_Morph_End_X2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText121 = new wxStaticText(MorphPanelEnd, ID_STATICTEXT121, _("Y2b:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT121"));
    FlexGridSizer94->Add(StaticText121, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Morph_End_Y2 = new wxSlider(MorphPanelEnd, ID_SLIDER_Morph_End_Y2, 100, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Morph_End_Y2"));
    FlexGridSizer94->Add(Slider_Morph_End_Y2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Morph_End_Y2 = new wxTextCtrl(MorphPanelEnd, IDD_TEXTCTRL_Morph_End_Y2, _("100"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Morph_End_Y2"));
    TextCtrl_Morph_End_Y2->SetMaxLength(3);
    FlexGridSizer94->Add(TextCtrl_Morph_End_Y2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Morph_End_Y2 = new wxBitmapButton(MorphPanelEnd, ID_BITMAPBUTTON_SLIDER_Morph_End_Y2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Morph_End_Y2"));
    BitmapButton_Morph_End_Y2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer94->Add(BitmapButton_Morph_End_Y2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText122 = new wxStaticText(MorphPanelEnd, ID_STATICTEXT122, _("Length:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT122"));
    FlexGridSizer94->Add(StaticText122, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_MorphEndLength = new wxSlider(MorphPanelEnd, ID_SLIDER_MorphEndLength, 1, 0, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_MorphEndLength"));
    FlexGridSizer94->Add(Slider_MorphEndLength, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_MorphEndLength = new wxTextCtrl(MorphPanelEnd, IDD_TEXTCTRL_MorphEndLength, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_MorphEndLength"));
    TextCtrl_MorphEndLength->SetMaxLength(3);
    FlexGridSizer94->Add(TextCtrl_MorphEndLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphEndLength = new wxBitmapButton(MorphPanelEnd, ID_BITMAPBUTTON_SLIDER_MorphEndLength, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_MorphEndLength"));
    BitmapButton_MorphEndLength->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer94->Add(BitmapButton_MorphEndLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer94->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Morph_End_Link = new wxCheckBox(MorphPanelEnd, ID_CHECKBOX_Morph_End_Link, _("Link Points"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Morph_End_Link"));
    CheckBox_Morph_End_Link->SetValue(false);
    FlexGridSizer94->Add(CheckBox_Morph_End_Link, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    MorphPanelEnd->SetSizer(FlexGridSizer94);
    FlexGridSizer94->Fit(MorphPanelEnd);
    FlexGridSizer94->SetSizeHints(MorphPanelEnd);
    MorphPanelOptions = new wxPanel(Notebook_Morph, ID_PANEL30, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL30"));
    FlexGridSizer104 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer104->AddGrowableCol(0);
    FlexGridSizer99 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer99->AddGrowableCol(1);
    StaticText123 = new wxStaticText(MorphPanelOptions, ID_STATICTEXT123, _("Head Duration:"), wxDefaultPosition, wxSize(-1,-1), 0, _T("ID_STATICTEXT123"));
    FlexGridSizer99->Add(StaticText123, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_MorphDuration = new wxSlider(MorphPanelOptions, ID_SLIDER_MorphDuration, 20, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_MorphDuration"));
    FlexGridSizer99->Add(Slider_MorphDuration, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_MorphDuration = new wxTextCtrl(MorphPanelOptions, IDD_TEXTCTRL_MorphDuration, _("20"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_MorphDuration"));
    TextCtrl_MorphDuration->SetMaxLength(3);
    FlexGridSizer99->Add(TextCtrl_MorphDuration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphDuration = new wxBitmapButton(MorphPanelOptions, ID_BITMAPBUTTON_SLIDER_MorphDuration, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_MorphDuration"));
    BitmapButton_MorphDuration->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer99->Add(BitmapButton_MorphDuration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText124 = new wxStaticText(MorphPanelOptions, ID_STATICTEXT124, _("Acceleration"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT124"));
    FlexGridSizer99->Add(StaticText124, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_MorphAccel = new wxSlider(MorphPanelOptions, ID_SLIDER_MorphAccel, 0, -10, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_MorphAccel"));
    FlexGridSizer99->Add(Slider_MorphAccel, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_MorphAccel = new wxTextCtrl(MorphPanelOptions, IDD_TEXTCTRL_MorphAccel, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_MorphAccel"));
    TextCtrl_MorphAccel->SetMaxLength(3);
    FlexGridSizer99->Add(TextCtrl_MorphAccel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphAccel = new wxBitmapButton(MorphPanelOptions, ID_BITMAPBUTTON_SLIDER_MorphAccel, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_MorphAccel"));
    BitmapButton_MorphAccel->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer99->Add(BitmapButton_MorphAccel, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer104->Add(FlexGridSizer99, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer105 = new wxFlexGridSizer(0, 2, 0, 0);
    CheckBox_ShowHeadAtStart = new wxCheckBox(MorphPanelOptions, ID_CHECKBOX_ShowHeadAtStart, _("Show Head at Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_ShowHeadAtStart"));
    CheckBox_ShowHeadAtStart->SetValue(false);
    FlexGridSizer105->Add(CheckBox_ShowHeadAtStart, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_ShowHeadAtStart = new wxBitmapButton(MorphPanelOptions, ID_BITMAPBUTTON_CHECKBOX_ShowHeadAtStart, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_ShowHeadAtStart"));
    BitmapButton_ShowHeadAtStart->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer105->Add(BitmapButton_ShowHeadAtStart, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_MorphUseHeadStartColor = new wxCheckBox(MorphPanelOptions, ID_CHECKBOX_MorphUseHeadStartColor, _("Use Head Start Color for Tail Start"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_MorphUseHeadStartColor"));
    CheckBox_MorphUseHeadStartColor->SetValue(false);
    FlexGridSizer105->Add(CheckBox_MorphUseHeadStartColor, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphUseHeadStartColor = new wxBitmapButton(MorphPanelOptions, ID_BITMAPBUTTON_MorphUseHeadStartColor, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_MorphUseHeadStartColor"));
    BitmapButton_MorphUseHeadStartColor->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer105->Add(BitmapButton_MorphUseHeadStartColor, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_MorphUseHeadEndColor = new wxCheckBox(MorphPanelOptions, ID_CHECKBOX_MorphUseHeadEndColor, _("Use Head End Color for Tail End"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_MorphUseHeadEndColor"));
    CheckBox_MorphUseHeadEndColor->SetValue(false);
    FlexGridSizer105->Add(CheckBox_MorphUseHeadEndColor, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MorphUseHeadEndColor = new wxBitmapButton(MorphPanelOptions, ID_BITMAPBUTTON_MorphUseHeadEndColor, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_MorphUseHeadEndColor"));
    BitmapButton_MorphUseHeadEndColor->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer105->Add(BitmapButton_MorphUseHeadEndColor, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer104->Add(FlexGridSizer105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    MorphPanelOptions->SetSizer(FlexGridSizer104);
    FlexGridSizer104->Fit(MorphPanelOptions);
    FlexGridSizer104->SetSizeHints(MorphPanelOptions);
    Notebook_Morph->AddPage(MorphPanelStart, _("Start"), false);
    Notebook_Morph->AddPage(MorphPanelEnd, _("End"), false);
    Notebook_Morph->AddPage(MorphPanelOptions, _("Options"), false);
    FlexGridSizer78->Add(Notebook_Morph, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Morph->SetSizer(FlexGridSizer78);
    FlexGridSizer78->Fit(Panel1_Morph);
    FlexGridSizer78->SetSizeHints(Panel1_Morph);
    Panel1_Piano = new wxScrolledWindow(Choicebook1, ID_PANEL39, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL39"));
    FlexGridSizer5 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer5->AddGrowableCol(0);
    FlexGridSizer27 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer27->AddGrowableCol(0);
    StaticText1 = new wxStaticText(Panel1_Piano, ID_STATICTEXT1, _("Style:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    FlexGridSizer27->Add(StaticText1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Piano_Style = new wxChoice(Panel1_Piano, ID_CHOICE_Piano_Style, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Piano_Style"));
    Choice_Piano_Style->SetSelection( Choice_Piano_Style->Append(_("Anim Image (face)")) );
    Choice_Piano_Style->Append(_("Equalizer (bars)"));
    Choice_Piano_Style->Append(_("Piano Keys (top/edge)"));
    Choice_Piano_Style->Append(_("Player Piano (scroll)"));
    FlexGridSizer27->Add(Choice_Piano_Style, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Piano_Style = new wxBitmapButton(Panel1_Piano, ID_BITMAPBUTTON_SLIDER_Piano_Style, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Piano_Style"));
    BitmapButton_Piano_Style->SetDefault();
    FlexGridSizer27->Add(BitmapButton_Piano_Style, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText_Piano_NumKeys = new wxStaticText(Panel1_Piano, ID_STATICTEXT_Piano_NumKeys, _("# Keys:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Piano_NumKeys"));
    FlexGridSizer27->Add(StaticText_Piano_NumKeys, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Piano_NumKeys = new wxSlider(Panel1_Piano, ID_SLIDER_Piano_NumKeys, 10, 1, 95, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Piano_NumKeys"));
    FlexGridSizer27->Add(Slider_Piano_NumKeys, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Piano_NumKeys = new wxBitmapButton(Panel1_Piano, ID_BITMAPBUTTON_Piano_NumKeys, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_NumKeys"));
    BitmapButton_Piano_NumKeys->SetDefault();
    FlexGridSizer27->Add(BitmapButton_Piano_NumKeys, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText_Piano_NumRows = new wxStaticText(Panel1_Piano, ID_STATICTEXT_Piano_NumRows, _("# Rows:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_Piano_NumRows"));
    FlexGridSizer27->Add(StaticText_Piano_NumRows, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Piano_NumRows = new wxSlider(Panel1_Piano, ID_SLIDER_Piano_KeyWidth, 10, 1, 95, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Piano_KeyWidth"));
    FlexGridSizer27->Add(Slider_Piano_NumRows, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Piano_NumRows = new wxBitmapButton(Panel1_Piano, ID_BITMAPBUTTON_Piano_NumRows, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_NumRows"));
    BitmapButton_Piano_NumRows->SetDefault();
    FlexGridSizer27->Add(BitmapButton_Piano_NumRows, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText21 = new wxStaticText(Panel1_Piano, ID_STATICTEXT20, _("Placement:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
    FlexGridSizer27->Add(StaticText21, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Piano_KeyPlacement = new wxChoice(Panel1_Piano, ID_CHOICE_PianoPlacement, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_PianoPlacement"));
    Choice_Piano_KeyPlacement->SetSelection( Choice_Piano_KeyPlacement->Append(_("Tile")) );
    Choice_Piano_KeyPlacement->Append(_("Stretch/shrink"));
    Choice_Piano_KeyPlacement->Append(_("Top left"));
    Choice_Piano_KeyPlacement->Append(_("Top center"));
    Choice_Piano_KeyPlacement->Append(_("Top right"));
    Choice_Piano_KeyPlacement->Append(_("Middle left"));
    Choice_Piano_KeyPlacement->Append(_("Middle center"));
    Choice_Piano_KeyPlacement->Append(_("Middle right"));
    Choice_Piano_KeyPlacement->Append(_("Bottom left"));
    Choice_Piano_KeyPlacement->Append(_("Bottom middle"));
    Choice_Piano_KeyPlacement->Append(_("Bottom right"));
    FlexGridSizer27->Add(Choice_Piano_KeyPlacement, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Piano_KeyPlacement = new wxBitmapButton(Panel1_Piano, ID_BITMAPBUTTON_Piano_KeyPlacement, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_KeyPlacement"));
    BitmapButton_Piano_KeyPlacement->SetDefault();
    FlexGridSizer27->Add(BitmapButton_Piano_KeyPlacement, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5->Add(FlexGridSizer27, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Notebook2 = new wxNotebook(Panel1_Piano, ID_NOTEBOOK2, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK2"));
    Notebook2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Panel3 = new wxPanel(Notebook2, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
    FlexGridSizer28 = new wxFlexGridSizer(5, 1, 0, 0);
    FlexGridSizer26 = new wxFlexGridSizer(0, 6, 0, 0);
    Button_Piano_CueFilename = new wxButton(Panel3, ID_BUTTON_Piano_CueFilename, _("File name"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON_Piano_CueFilename"));
    Button_Piano_CueFilename->SetBackgroundColour(wxColour(224,224,224));
    FlexGridSizer26->Add(Button_Piano_CueFilename, 1, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Piano_CueFilename = new wxBitmapButton(Panel3, ID_BITMAPBUTTON_Piano_Filename, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_Filename"));
    BitmapButton_Piano_CueFilename->SetDefault();
    FlexGridSizer26->Add(BitmapButton_Piano_CueFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer26->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText15_layout_kludge_1 = new wxStaticText(Panel3, ID_STATICTEXT14, _("                                    x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
    StaticText15_layout_kludge_1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    FlexGridSizer26->Add(StaticText15_layout_kludge_1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer28->Add(FlexGridSizer26, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Piano_CueFilename = new wxTextCtrl(Panel3, ID_TEXTCTRL_Piano_CueFilename, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL_Piano_CueFilename"));
    FlexGridSizer28->Add(TextCtrl_Piano_CueFilename, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel3->SetSizer(FlexGridSizer28);
    FlexGridSizer28->Fit(Panel3);
    FlexGridSizer28->SetSizeHints(Panel3);
    Panel4 = new wxPanel(Notebook2, ID_PANEL11, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL11"));
    FlexGridSizer30 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer33 = new wxFlexGridSizer(0, 6, 0, 0);
    Button_Piano_MapFilename = new wxButton(Panel4, ID_BUTTON1, _("File name"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button_Piano_MapFilename->SetBackgroundColour(wxColour(224,224,224));
    FlexGridSizer33->Add(Button_Piano_MapFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Piano_MapFilename = new wxBitmapButton(Panel4, ID_BITMAPBUTTON_Piano_MapFilename, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_MapFilename"));
    BitmapButton_Piano_MapFilename->SetDefault();
    FlexGridSizer33->Add(BitmapButton_Piano_MapFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer33->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText14_layout_kludge2 = new wxStaticText(Panel4, ID_STATICTEXT13, _("                                    x"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
    StaticText14_layout_kludge2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
    FlexGridSizer33->Add(StaticText14_layout_kludge2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer30->Add(FlexGridSizer33, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Piano_MapFilename = new wxTextCtrl(Panel4, ID_TEXTCTRL_Piano_MapFilename, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL_Piano_MapFilename"));
    FlexGridSizer30->Add(TextCtrl_Piano_MapFilename, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel4->SetSizer(FlexGridSizer30);
    FlexGridSizer30->Fit(Panel4);
    FlexGridSizer30->SetSizeHints(Panel4);
    Panel5 = new wxPanel(Notebook2, ID_PANEL13, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL13"));
    FlexGridSizer32 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer34 = new wxFlexGridSizer(0, 5, 0, 0);
    Button_Piano_ShapeFilename = new wxButton(Panel5, ID_BUTTON2, _("File name"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button_Piano_ShapeFilename->SetBackgroundColour(wxColour(224,224,224));
    FlexGridSizer34->Add(Button_Piano_ShapeFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Piano_ShapeFilename = new wxBitmapButton(Panel5, ID_BITMAPBUTTON_Piano_ShapeFilename, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_ShapeFilename"));
    BitmapButton_Piano_ShapeFilename->SetDefault();
    FlexGridSizer34->Add(BitmapButton_Piano_ShapeFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer34->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Piano_Clipping = new wxCheckBox(Panel5, ID_CHECKBOX1, _("Clip shapes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBox_Piano_Clipping->SetValue(false);
    FlexGridSizer34->Add(CheckBox_Piano_Clipping, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Piano_Clipping = new wxBitmapButton(Panel5, ID_BITMAPBUTTON_Piano_Clipping, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Piano_Clipping"));
    BitmapButton_Piano_Clipping->SetDefault();
    FlexGridSizer34->Add(BitmapButton_Piano_Clipping, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer32->Add(FlexGridSizer34, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Piano_ShapeFilename = new wxTextCtrl(Panel5, ID_TEXTCTRL_Piano_ShapeFilename, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL_Piano_ShapeFilename"));
    FlexGridSizer32->Add(TextCtrl_Piano_ShapeFilename, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel5->SetSizer(FlexGridSizer32);
    FlexGridSizer32->Fit(Panel5);
    FlexGridSizer32->SetSizeHints(Panel5);
    Notebook2->AddPage(Panel3, _("Cues"), false);
    Notebook2->AddPage(Panel4, _("Cue-Shape Map"), false);
    Notebook2->AddPage(Panel5, _("Shapes"), false);
    FlexGridSizer5->Add(Notebook2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Piano->SetSizer(FlexGridSizer5);
    FlexGridSizer5->Fit(Panel1_Piano);
    FlexGridSizer5->SetSizeHints(Panel1_Piano);
    Panel1_Pictures = new wxScrolledWindow(Choicebook1, ID_PANEL20, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL20"));
    FlexGridSizer42 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer42->AddGrowableCol(0);
    FlexGridSizer19 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer19->AddGrowableCol(0);
    FilePickerCtrl1 = new xlPictureFilePickerCtrl(Panel1_Pictures, ID_FILEPICKER_Pictures_Filename, wxEmptyString, wxEmptyString, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxFLP_FILE_MUST_EXIST|wxFLP_OPEN|wxFLP_USE_TEXTCTRL, wxDefaultValidator, _T("ID_FILEPICKER_Pictures_Filename"));
    FlexGridSizer19->Add(FilePickerCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    BitmapButton_PicturesFilename = new wxBitmapButton(Panel1_Pictures, ID_BITMAPBUTTON_BUTTON_PICTURES_FILENAME, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_BUTTON_PICTURES_FILENAME"));
    BitmapButton_PicturesFilename->SetDefault();
    FlexGridSizer19->Add(BitmapButton_PicturesFilename, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer42->Add(FlexGridSizer19, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer31 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer31->AddGrowableCol(1);
    StaticText46 = new wxStaticText(Panel1_Pictures, ID_STATICTEXT46, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT46"));
    FlexGridSizer31->Add(StaticText46, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Pictures_Direction = new wxChoice(Panel1_Pictures, ID_CHOICE_Pictures_Direction, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Pictures_Direction"));
    FlexGridSizer31->Add(Choice_Pictures_Direction, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer31->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PicturesDirection = new wxBitmapButton(Panel1_Pictures, ID_BITMAPBUTTON_CHOICE_Pictures_Direction, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Pictures_Direction"));
    BitmapButton_PicturesDirection->SetDefault();
    BitmapButton_PicturesDirection->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer31->Add(BitmapButton_PicturesDirection, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText96 = new wxStaticText(Panel1_Pictures, wxID_ANY, _("Anim Gif Speed"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer31->Add(StaticText96, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Pictures_GifSpeed = new wxSlider(Panel1_Pictures, ID_SLIDER_Pictures_GifSpeed, 20, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Pictures_GifSpeed"));
    FlexGridSizer31->Add(Slider_Pictures_GifSpeed, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Pictures_GifSpeed = new wxTextCtrl(Panel1_Pictures, IDD_TEXTCTRL_Pictures_GifSpeed, _("20"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Pictures_GifSpeed"));
    TextCtrl_Pictures_GifSpeed->SetMaxLength(3);
    FlexGridSizer31->Add(TextCtrl_Pictures_GifSpeed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PicturesSpeed = new wxBitmapButton(Panel1_Pictures, ID_BITMAPBUTTON_SLIDER_Pictures_GifSpeed, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Pictures_GifSpeed"));
    BitmapButton_PicturesSpeed->SetDefault();
    BitmapButton_PicturesSpeed->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer31->Add(BitmapButton_PicturesSpeed, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText4 = new wxStaticText(Panel1_Pictures, ID_STATICTEXT4, _("Movie is 20 FPS"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    FlexGridSizer31->Add(StaticText4, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Pictures_Is20FPS = new wxCheckBox(Panel1_Pictures, ID_CHECKBOX_MovieIs20FPS, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_MovieIs20FPS"));
    CheckBox_Pictures_Is20FPS->SetValue(false);
    FlexGridSizer31->Add(CheckBox_Pictures_Is20FPS, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer31->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_MovieIs20FPS = new wxBitmapButton(Panel1_Pictures, ID_BITMAPBUTTON_CHECKBOX_MovieIs20FPS, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_MovieIs20FPS"));
    BitmapButton_MovieIs20FPS->SetDefault();
    BitmapButton_MovieIs20FPS->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer31->Add(BitmapButton_MovieIs20FPS, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer42->Add(FlexGridSizer31, 1, wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    GridBagSizer1 = new wxGridBagSizer(0, 0);
    CheckBox1 = new wxCheckBox(Panel1_Pictures, ID_CHECKBOX_Pictures_PixelOffsets, _("Offsets In Pixels"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Pictures_PixelOffsets"));
    CheckBox1->SetValue(false);
    GridBagSizer1->Add(CheckBox1, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_LEFT|wxALIGN_TOP, 5);
    Notebook4 = new wxNotebook(Panel1_Pictures, IDD_NOTEBOOK_Pictures_Positions, wxDefaultPosition, wxDefaultSize, 0, _T("IDD_NOTEBOOK_Pictures_Positions"));
    PictureStartPositionPanel = new wxPanel(Notebook4, ID_PANEL43, wxPoint(15,49), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL43"));
    FlexGridSizer112 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer106 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer106->AddGrowableCol(1);
    StaticText_Pictures_XC = new wxStaticText(PictureStartPositionPanel, wxID_ANY, _("X-axis Center"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer106->Add(StaticText_Pictures_XC, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_PicturesXC = new wxSlider(PictureStartPositionPanel, ID_SLIDER_PicturesXC, 0, -100, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_PicturesXC"));
    FlexGridSizer106->Add(Slider_PicturesXC, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Pictures_WrapX = new wxCheckBox(PictureStartPositionPanel, ID_CHECKBOX_Pictures_WrapX, _("Wrap X"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Pictures_WrapX"));
    CheckBox_Pictures_WrapX->SetValue(false);
    FlexGridSizer106->Add(CheckBox_Pictures_WrapX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_PicturesXC = new wxTextCtrl(PictureStartPositionPanel, IDD_TEXTCTRL_PicturesXC, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_PicturesXC"));
    TextCtrl_PicturesXC->SetMaxLength(3);
    FlexGridSizer106->Add(TextCtrl_PicturesXC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer112->Add(FlexGridSizer106, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizer2 = new wxGridBagSizer(0, 0);
    StaticText_Pictures_YC = new wxStaticText(PictureStartPositionPanel, wxID_ANY, _("Y-axis Center"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    GridBagSizer2->Add(StaticText_Pictures_YC, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_PicturesYC = new wxTextCtrl(PictureStartPositionPanel, IDD_TEXTCTRL_PicturesYC, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_PicturesYC"));
    TextCtrl_PicturesYC->SetMaxLength(3);
    GridBagSizer2->Add(TextCtrl_PicturesYC, wxGBPosition(2, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_PicturesYC = new wxSlider(PictureStartPositionPanel, ID_SLIDER_PicturesYC, 0, -100, 100, wxDefaultPosition, wxDefaultSize, wxSL_VERTICAL|wxSL_INVERSE, wxDefaultValidator, _T("ID_SLIDER_PicturesYC"));
    GridBagSizer2->Add(Slider_PicturesYC, wxGBPosition(0, 1), wxGBSpan(4, 1), wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer112->Add(GridBagSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    PictureStartPositionPanel->SetSizer(FlexGridSizer112);
    FlexGridSizer112->Fit(PictureStartPositionPanel);
    FlexGridSizer112->SetSizeHints(PictureStartPositionPanel);
    PictureEndPositionPanel = new wxPanel(Notebook4, ID_PANEL45, wxPoint(104,13), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL45"));
    FlexGridSizer111 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer113 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer113->AddGrowableCol(1);
    StaticText160 = new wxStaticText(PictureEndPositionPanel, wxID_ANY, _("X-axis Center"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer113->Add(StaticText160, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider1 = new wxSlider(PictureEndPositionPanel, ID_SLIDER_PicturesEndXC, 0, -100, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_PicturesEndXC"));
    FlexGridSizer113->Add(Slider1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer113->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl1 = new wxTextCtrl(PictureEndPositionPanel, IDD_TEXTCTRL_PicturesEndXC, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_PicturesEndXC"));
    TextCtrl1->SetMaxLength(3);
    FlexGridSizer113->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer111->Add(FlexGridSizer113, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    GridBagSizer3 = new wxGridBagSizer(0, 0);
    StaticText161 = new wxStaticText(PictureEndPositionPanel, wxID_ANY, _("Y-axis Center"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    GridBagSizer3->Add(StaticText161, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(PictureEndPositionPanel, IDD_TEXTCTRL_PicturesEndYC, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_PicturesEndYC"));
    TextCtrl2->SetMaxLength(3);
    GridBagSizer3->Add(TextCtrl2, wxGBPosition(2, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider2 = new wxSlider(PictureEndPositionPanel, ID_SLIDER_PicturesEndYC, 0, -100, 100, wxDefaultPosition, wxDefaultSize, wxSL_VERTICAL|wxSL_INVERSE, wxDefaultValidator, _T("ID_SLIDER_PicturesEndYC"));
    GridBagSizer3->Add(Slider2, wxGBPosition(0, 1), wxGBSpan(4, 1), wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer111->Add(GridBagSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    PictureEndPositionPanel->SetSizer(FlexGridSizer111);
    FlexGridSizer111->Fit(PictureEndPositionPanel);
    FlexGridSizer111->SetSizeHints(PictureEndPositionPanel);
    Notebook4->AddPage(PictureStartPositionPanel, _("Start Position"), false);
    Notebook4->AddPage(PictureEndPositionPanel, _("End Position"), false);
    GridBagSizer1->Add(Notebook4, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer42->Add(GridBagSizer1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Pictures->SetSizer(FlexGridSizer42);
    FlexGridSizer42->Fit(Panel1_Pictures);
    FlexGridSizer42->SetSizeHints(Panel1_Pictures);
    Panel1_Pinwheel = new wxScrolledWindow(Choicebook1, ID_PANEL_Pinwheel, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL_Pinwheel"));
    FlexGridSizer55 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer63 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText63 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT65, _("#Arms"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT65"));
    FlexGridSizer63->Add(StaticText63, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Pinwheel_Arms = new wxSlider(Panel1_Pinwheel, ID_SLIDER_Pinwheel_Arms, 3, 1, 20, wxDefaultPosition, wxSize(80,20), 0, wxDefaultValidator, _T("ID_SLIDER_Pinwheel_Arms"));
    FlexGridSizer63->Add(Slider_Pinwheel_Arms, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PinwheelNumberArms = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON11, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
    BitmapButton_PinwheelNumberArms->SetDefault();
    BitmapButton_PinwheelNumberArms->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer63->Add(BitmapButton_PinwheelNumberArms, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer55->Add(FlexGridSizer63, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer64 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText84 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT98, _("Size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT98"));
    FlexGridSizer64->Add(StaticText84, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Pinwheel_ArmSize = new wxSlider(Panel1_Pinwheel, ID_SLIDER_Pinwheel_ArmSize, 100, 0, 400, wxDefaultPosition, wxSize(80,20), 0, wxDefaultValidator, _T("ID_SLIDER_Pinwheel_ArmSize"));
    FlexGridSizer64->Add(Slider_Pinwheel_ArmSize, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Pinwheel_ArmSize = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON16, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
    BitmapButton_Pinwheel_ArmSize->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer64->Add(BitmapButton_Pinwheel_ArmSize, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer64, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer66 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText74 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT76, _("Twist"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT76"));
    FlexGridSizer66->Add(StaticText74, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Pinwheel_Twist = new wxSlider(Panel1_Pinwheel, ID_SLIDER_Pinwheel_Twist, 0, -360, 360, wxDefaultPosition, wxSize(80,20), 0, wxDefaultValidator, _T("ID_SLIDER_Pinwheel_Twist"));
    FlexGridSizer66->Add(Slider_Pinwheel_Twist, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PinwheelTwist = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON12, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
    BitmapButton_PinwheelTwist->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer66->Add(BitmapButton_PinwheelTwist, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer66, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer67 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText75 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT77, _("Thick"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT77"));
    FlexGridSizer67->Add(StaticText75, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Pinwheel_Thickness = new wxSlider(Panel1_Pinwheel, ID_SLIDER_Pinwheel_Thickness, 0, 0, 100, wxDefaultPosition, wxSize(80,20), 0, wxDefaultValidator, _T("ID_SLIDER_Pinwheel_Thickness"));
    FlexGridSizer67->Add(Slider_Pinwheel_Thickness, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PinwheelThickness = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON18, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
    BitmapButton_PinwheelThickness->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer67->Add(BitmapButton_PinwheelThickness, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer67, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer59 = new wxFlexGridSizer(0, 4, 0, 0);
    StaticText76 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT78, _("Rotation"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT78"));
    FlexGridSizer59->Add(StaticText76, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Pinwheel_Rotation = new wxCheckBox(Panel1_Pinwheel, ID_CHECKBOX_Pinwheel_Rotation, _("CCW"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Pinwheel_Rotation"));
    CheckBox_Pinwheel_Rotation->SetValue(true);
    FlexGridSizer59->Add(CheckBox_Pinwheel_Rotation, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_PinwheelRotation = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON19, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
    BitmapButton_PinwheelRotation->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer59->Add(BitmapButton_PinwheelRotation, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer59, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer61 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText77 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT82, _("3D"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT82"));
    FlexGridSizer61->Add(StaticText77, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Pinwheel_3D = new wxChoice(Panel1_Pinwheel, ID_CHOICE_Pinwheel_3D, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Pinwheel_3D"));
    Choice_Pinwheel_3D->SetSelection( Choice_Pinwheel_3D->Append(_("None")) );
    Choice_Pinwheel_3D->Append(_("3D"));
    Choice_Pinwheel_3D->Append(_("3D Inverted"));
    FlexGridSizer61->Add(Choice_Pinwheel_3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Pinwheel3D = new wxBitmapButton(Panel1_Pinwheel, ID_BITMAPBUTTON_Pinwheel3D, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_Pinwheel3D"));
    BitmapButton_Pinwheel3D->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer61->Add(BitmapButton_Pinwheel3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer61, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer62 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText82 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT85, _("X-axis Center"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT85"));
    FlexGridSizer62->Add(StaticText82, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_PinwheelXC = new wxSlider(Panel1_Pinwheel, ID_SLIDER_PinwheelXC, 0, -100, 100, wxDefaultPosition, wxSize(80,20), 0, wxDefaultValidator, _T("ID_SLIDER_PinwheelXC"));
    FlexGridSizer62->Add(Slider_PinwheelXC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer62, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer68 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText81 = new wxStaticText(Panel1_Pinwheel, ID_STATICTEXT83, _("Y-axis center"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT83"));
    FlexGridSizer68->Add(StaticText81, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_PinwheelYC = new wxSlider(Panel1_Pinwheel, ID_SLIDER_PinwheelYC, 0, -100, 100, wxDefaultPosition, wxSize(20,80), wxSL_VERTICAL|wxSL_INVERSE, wxDefaultValidator, _T("ID_SLIDER_PinwheelYC"));
    FlexGridSizer68->Add(Slider_PinwheelYC, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer55->Add(FlexGridSizer68, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_Pinwheel->SetSizer(FlexGridSizer55);
    FlexGridSizer55->Fit(Panel1_Pinwheel);
    FlexGridSizer55->SetSizeHints(Panel1_Pinwheel);
    Panel1_Ripple = new wxScrolledWindow(Choicebook1, ID_PANELRipple, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANELRipple"));
    FlexGridSizer57 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer57->AddGrowableCol(1);
    StaticText69 = new wxStaticText(Panel1_Ripple, ID_STATICTEXT71, _("Object to Draw"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT71"));
    FlexGridSizer57->Add(StaticText69, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Ripple_Object_To_Draw = new wxChoice(Panel1_Ripple, ID_CHOICE_Ripple_Object_To_Draw, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Ripple_Object_To_Draw"));
    FlexGridSizer57->Add(Choice_Ripple_Object_To_Draw, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Ripple_Object_To_Draw = new wxBitmapButton(Panel1_Ripple, ID_BITMAPBUTTON20, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
    BitmapButton_Ripple_Object_To_Draw->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer57->Add(BitmapButton_Ripple_Object_To_Draw, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText70 = new wxStaticText(Panel1_Ripple, ID_STATICTEXT72, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT72"));
    FlexGridSizer57->Add(StaticText70, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Ripple_Movement = new wxChoice(Panel1_Ripple, ID_CHOICE_Ripple_Movement, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Ripple_Movement"));
    FlexGridSizer57->Add(Choice_Ripple_Movement, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Ripple_Movement = new wxBitmapButton(Panel1_Ripple, ID_BITMAPBUTTON13, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
    BitmapButton_Ripple_Movement->SetDefault();
    BitmapButton_Ripple_Movement->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer57->Add(BitmapButton_Ripple_Movement, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText72 = new wxStaticText(Panel1_Ripple, ID_STATICTEXT74, _("Thickness"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT74"));
    FlexGridSizer57->Add(StaticText72, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Ripple_Thickness = new wxSlider(Panel1_Ripple, ID_SLIDER_Ripple_Thickness, 3, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Ripple_Thickness"));
    FlexGridSizer57->Add(Slider_Ripple_Thickness, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_RippleThickness = new wxBitmapButton(Panel1_Ripple, ID_BITMAPBUTTON14, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
    BitmapButton_RippleThickness->SetDefault();
    BitmapButton_RippleThickness->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer57->Add(BitmapButton_RippleThickness, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer60 = new wxFlexGridSizer(0, 4, 0, 0);
    CheckBox_Ripple3D = new wxCheckBox(Panel1_Ripple, ID_CHECKBOX_Ripple3D, _("3D"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Ripple3D"));
    CheckBox_Ripple3D->SetValue(false);
    FlexGridSizer60->Add(CheckBox_Ripple3D, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Ripple3D = new wxBitmapButton(Panel1_Ripple, ID_BITMAPBUTTON17, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
    BitmapButton_Ripple3D->SetDefault();
    BitmapButton_Ripple3D->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer60->Add(BitmapButton_Ripple3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer57->Add(FlexGridSizer60, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Ripple->SetSizer(FlexGridSizer57);
    FlexGridSizer57->Fit(Panel1_Ripple);
    FlexGridSizer57->SetSizeHints(Panel1_Ripple);
    Panel1_Shimmer = new wxScrolledWindow(Choicebook1, ID_PANELShimmer, wxPoint(39,6), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANELShimmer"));
    FlexGridSizer56 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer56->AddGrowableCol(1);
    StaticText66 = new wxStaticText(Panel1_Shimmer, ID_STATICTEXT68, _("Duty Factor"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT68"));
    FlexGridSizer56->Add(StaticText66, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shimmer_Duty_Factor = new wxSlider(Panel1_Shimmer, ID_SLIDER_Shimmer_Duty_Factor, 50, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shimmer_Duty_Factor"));
    FlexGridSizer56->Add(Slider_Shimmer_Duty_Factor, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shimmer_Duty_Factor = new wxBitmapButton(Panel1_Shimmer, ID_BITMAPBUTTON_DutyFactor, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_DutyFactor"));
    BitmapButton_Shimmer_Duty_Factor->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer56->Add(BitmapButton_Shimmer_Duty_Factor, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText67 = new wxStaticText(Panel1_Shimmer, ID_STATICTEXT69, _("Use All Colors"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT69"));
    FlexGridSizer56->Add(StaticText67, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Shimmer_Use_All_Colors = new wxCheckBox(Panel1_Shimmer, ID_CHECKBOX_Shimmer_Use_All_Colors, _("Yes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Shimmer_Use_All_Colors"));
    CheckBox_Shimmer_Use_All_Colors->SetValue(false);
    FlexGridSizer56->Add(CheckBox_Shimmer_Use_All_Colors, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shimmer_Use_All_Colors = new wxBitmapButton(Panel1_Shimmer, ID_BITMAPBUTTON_ShimmerUseAllColors, padlock16x16_blue_xpm, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_ShimmerUseAllColors"));
    BitmapButton_Shimmer_Use_All_Colors->SetMinSize(wxSize(21,21));
    BitmapButton_Shimmer_Use_All_Colors->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer56->Add(BitmapButton_Shimmer_Use_All_Colors, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText68 = new wxStaticText(Panel1_Shimmer, ID_STATICTEXT70, _("Use Blink Timing"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT70"));
    FlexGridSizer56->Add(StaticText68, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Shimmer_Blink_Timing = new wxCheckBox(Panel1_Shimmer, ID_CHECKBOX_Shimmer_Blink_Timing, _("Yes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Shimmer_Blink_Timing"));
    CheckBox_Shimmer_Blink_Timing->SetValue(false);
    FlexGridSizer56->Add(CheckBox_Shimmer_Blink_Timing, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shimmer_Blink_Timing = new wxBitmapButton(Panel1_Shimmer, ID_BITMAPBUTTON_Shimmer_Blink_Timing, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_Shimmer_Blink_Timing"));
    BitmapButton_Shimmer_Blink_Timing->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer56->Add(BitmapButton_Shimmer_Blink_Timing, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText65 = new wxStaticText(Panel1_Shimmer, ID_STATICTEXT67, _("Blinks per Row"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT67"));
    FlexGridSizer56->Add(StaticText65, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shimmer_Blinks_Per_Row = new wxSlider(Panel1_Shimmer, ID_SLIDER_Shimmer_Blinks_Per_Row, 4, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shimmer_Blinks_Per_Row"));
    FlexGridSizer56->Add(Slider_Shimmer_Blinks_Per_Row, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shimmer_Blinks_Per_Row = new wxBitmapButton(Panel1_Shimmer, ID_BITMAPBUTTON_BlinksPerRow, padlock16x16_blue_xpm, wxPoint(-1,-1), wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_BlinksPerRow"));
    BitmapButton_Shimmer_Blinks_Per_Row->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer56->Add(BitmapButton_Shimmer_Blinks_Per_Row, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Shimmer->SetSizer(FlexGridSizer56);
    FlexGridSizer56->Fit(Panel1_Shimmer);
    FlexGridSizer56->SetSizeHints(Panel1_Shimmer);
    Panel1_Shockwave = new wxScrolledWindow(Choicebook1, ID_SCROLLEDWINDOW_SHOCKWAVE, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_SCROLLEDWINDOW_SHOCKWAVE"));
    FlexGridSizer110 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer110->AddGrowableCol(0);
    Notebook3 = new wxNotebook(Panel1_Shockwave, ID_NOTEBOOK_Shockwave, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK_Shockwave"));
    Panel10 = new wxPanel(Notebook3, ID_PANEL40, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL40"));
    FlexGridSizer100 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer100->AddGrowableCol(1);
    StaticText154 = new wxStaticText(Panel10, wxID_ANY, _("Center X:"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer100->Add(StaticText154, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_CenterX = new wxSlider(Panel10, ID_SLIDER_Shockwave_CenterX, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_CenterX"));
    FlexGridSizer100->Add(Slider_Shockwave_CenterX, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_CenterX = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_CenterX, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_CenterX"));
    TextCtrl_Shockwave_CenterX->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, wxDLG_UNIT(Panel10,wxSize(5,0)).GetWidth());
    BitmapButton_Shockwave_CenterX = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_CenterX, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_CenterX"));
    BitmapButton_Shockwave_CenterX->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_CenterX, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText155 = new wxStaticText(Panel10, ID_STATICTEXT151, _("Center Y:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT151"));
    FlexGridSizer100->Add(StaticText155, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_CenterY = new wxSlider(Panel10, ID_SLIDER_Shockwave_CenterY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_CenterY"));
    FlexGridSizer100->Add(Slider_Shockwave_CenterY, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_CenterY = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_CenterY, _("50"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_CenterY"));
    TextCtrl_Shockwave_CenterY->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_CenterY = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_CenterY, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_CenterY"));
    BitmapButton_Shockwave_CenterY->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_CenterY, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText156 = new wxStaticText(Panel10, ID_STATICTEXT152, _("Radius1:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT152"));
    FlexGridSizer100->Add(StaticText156, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_Start_Radius = new wxSlider(Panel10, ID_SLIDER_Shockwave_Start_Radius, 1, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_Start_Radius"));
    FlexGridSizer100->Add(Slider_Shockwave_Start_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_Start_Radius = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_Start_Radius, _("1"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_Start_Radius"));
    TextCtrl_Shockwave_Start_Radius->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_Start_Radius = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Radius"));
    BitmapButton_Shockwave_Start_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_Start_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText158 = new wxStaticText(Panel10, ID_STATICTEXT154, _("Radius2:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT154"));
    FlexGridSizer100->Add(StaticText158, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_End_Radius = new wxSlider(Panel10, ID_SLIDER_Shockwave_End_Radius, 10, 0, 200, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_End_Radius"));
    FlexGridSizer100->Add(Slider_Shockwave_End_Radius, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_End_Radius = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_End_Radius, _("10"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_End_Radius"));
    TextCtrl_Shockwave_End_Radius->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_End_Radius = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_End_Radius, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_End_Radius"));
    BitmapButton_Shockwave_End_Radius->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_End_Radius, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText157 = new wxStaticText(Panel10, ID_STATICTEXT153, _("Width1:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT153"));
    FlexGridSizer100->Add(StaticText157, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_Start_Width = new wxSlider(Panel10, ID_SLIDER_Shockwave_Start_Width, 5, 0, 255, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_Start_Width"));
    FlexGridSizer100->Add(Slider_Shockwave_Start_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_Start_Width = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_Start_Width, _("5"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_Start_Width"));
    TextCtrl_Shockwave_Start_Width->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_Start_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_Start_Width = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Width"));
    BitmapButton_Shockwave_Start_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_Start_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText159 = new wxStaticText(Panel10, ID_STATICTEXT155, _("Width2:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT155"));
    FlexGridSizer100->Add(StaticText159, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_End_Width = new wxSlider(Panel10, ID_SLIDER_Shockwave_End_Width, 10, 0, 255, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_End_Width"));
    FlexGridSizer100->Add(Slider_Shockwave_End_Width, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_End_Width = new wxTextCtrl(Panel10, IDD_TEXTCTRL_Shockwave_End_Width, _("10"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_End_Width"));
    TextCtrl_Shockwave_End_Width->SetMaxLength(3);
    FlexGridSizer100->Add(TextCtrl_Shockwave_End_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_End_Width = new wxBitmapButton(Panel10, ID_BITMAPBUTTON_SLIDER_Shockwave_End_Width, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_End_Width"));
    BitmapButton_Shockwave_End_Width->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer100->Add(BitmapButton_Shockwave_End_Width, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel10->SetSizer(FlexGridSizer100);
    FlexGridSizer100->Fit(Panel10);
    FlexGridSizer100->SetSizeHints(Panel10);
    Panel14 = new wxPanel(Notebook3, ID_PANEL44, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL44"));
    GridBagSizerShockwaveOptions = new wxGridBagSizer(0, 0);
    StaticText166 = new wxStaticText(Panel14, ID_STATICTEXT162, _("Acceleration:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT162"));
    GridBagSizerShockwaveOptions->Add(StaticText166, wxGBPosition(0, 0), wxDefaultSpan, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Shockwave_Accel = new wxSlider(Panel14, ID_SLIDER_Shockwave_Accel, 0, -10, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Shockwave_Accel"));
    GridBagSizerShockwaveOptions->Add(Slider_Shockwave_Accel, wxGBPosition(0, 1), wxDefaultSpan, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl_Shockwave_Accel = new wxTextCtrl(Panel14, IDD_TEXTCTRL_Shockwave_Accel, _("0"), wxDefaultPosition, wxSize(35,-1), wxTE_CENTRE, wxDefaultValidator, _T("IDD_TEXTCTRL_Shockwave_Accel"));
    TextCtrl_Shockwave_Accel->SetMaxLength(3);
    GridBagSizerShockwaveOptions->Add(TextCtrl_Shockwave_Accel, wxGBPosition(0, 2), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Shockwave_Accel = new wxBitmapButton(Panel14, ID_BITMAPBUTTON_SLIDER_Shockwave_Accel, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Shockwave_Accel"));
    BitmapButton_Shockwave_Accel->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    GridBagSizerShockwaveOptions->Add(BitmapButton_Shockwave_Accel, wxGBPosition(0, 3), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Shockwave_Blend_Edges = new wxCheckBox(Panel14, ID_CHECKBOX_Shockwave_Blend_Edges, _("Blend Edges:"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, wxDefaultValidator, _T("ID_CHECKBOX_Shockwave_Blend_Edges"));
    CheckBox_Shockwave_Blend_Edges->SetValue(true);
    GridBagSizerShockwaveOptions->Add(CheckBox_Shockwave_Blend_Edges, wxGBPosition(1, 0), wxDefaultSpan, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel14->SetSizer(GridBagSizerShockwaveOptions);
    GridBagSizerShockwaveOptions->Fit(Panel14);
    GridBagSizerShockwaveOptions->SetSizeHints(Panel14);
    Notebook3->AddPage(Panel10, _("Position"), false);
    Notebook3->AddPage(Panel14, _("Options"), false);
    FlexGridSizer110->Add(Notebook3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Shockwave->SetSizer(FlexGridSizer110);
    FlexGridSizer110->Fit(Panel1_Shockwave);
    FlexGridSizer110->SetSizeHints(Panel1_Shockwave);
    Panel1_SingleStrand = new wxScrolledWindow(Choicebook1, ID_PANEL2, wxPoint(39,6), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL2"));
    FlexGridSizer89 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer89->AddGrowableCol(0);
    SingleStrandEffectType = new wxNotebook(Panel1_SingleStrand, ID_NOTEBOOK_SSEFFECT_TYPE, wxDefaultPosition, wxDefaultSize, 0, _T("ID_NOTEBOOK_SSEFFECT_TYPE"));
    Panel1 = new wxPanel(SingleStrandEffectType, ID_PANEL3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    FlexGridSizer24 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer24->AddGrowableCol(1);
    StaticText61 = new wxStaticText(Panel1, ID_STATICTEXT63, _("Colors  "), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT63"));
    FlexGridSizer24->Add(StaticText61, 1, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_SingleStrand_Colors = new wxChoice(Panel1, ID_CHOICE_SingleStrand_Colors, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_SingleStrand_Colors"));
    FlexGridSizer24->Add(Choice_SingleStrand_Colors, 1, wxALIGN_LEFT|wxALIGN_TOP, 5);
    BitmapButton_SingleStrand_Colors = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_SingleStrand_Colors, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_SingleStrand_Colors"));
    BitmapButton_SingleStrand_Colors->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_SingleStrand_Colors, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText60 = new wxStaticText(Panel1, ID_STATICTEXT62, _("Number Chases"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT62"));
    FlexGridSizer24->Add(StaticText60, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Number_Chases = new wxSlider(Panel1, ID_SLIDER_Number_Chases, 1, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Number_Chases"));
    Slider_Number_Chases->SetSelection(1, 20);
    FlexGridSizer24->Add(Slider_Number_Chases, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Number_Chases = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_Number_Chases, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON_Number_Chases"));
    BitmapButton_Number_Chases->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Number_Chases, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Chase Size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    FlexGridSizer24->Add(StaticText9, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Color_Mix1 = new wxSlider(Panel1, ID_SLIDER_Color_Mix1, 10, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Color_Mix1"));
    FlexGridSizer24->Add(Slider_Color_Mix1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Color_Mix1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_SLIDER_Color_Mix1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Color_Mix1"));
    BitmapButton_Color_Mix1->SetDefault();
    BitmapButton_Color_Mix1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Color_Mix1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText10 = new wxStaticText(Panel1, ID_STATICTEXT9, _("Chase Spacing"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    FlexGridSizer24->Add(StaticText10, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Chase_Spacing1 = new wxSlider(Panel1, ID_SLIDER_Chase_Spacing1, 1, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Chase_Spacing1"));
    FlexGridSizer24->Add(Slider_Chase_Spacing1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Chase_Spacing1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_SLIDER_Chase_Spacing1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Chase_Spacing1"));
    BitmapButton_Chase_Spacing1->SetDefault();
    BitmapButton_Chase_Spacing1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Chase_Spacing1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText11 = new wxStaticText(Panel1, ID_STATICTEXT10, _("Chase Types"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    FlexGridSizer24->Add(StaticText11, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Chase_Type1 = new wxChoice(Panel1, ID_CHOICE_Chase_Type1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Chase_Type1"));
    FlexGridSizer24->Add(Choice_Chase_Type1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Chase_Type1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_CHOICE_Chase_Type1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Chase_Type1"));
    BitmapButton_Chase_Type1->SetDefault();
    BitmapButton_Chase_Type1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Chase_Type1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText12 = new wxStaticText(Panel1, ID_STATICTEXT11, _("3d Fade"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    FlexGridSizer24->Add(StaticText12, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Chase_3dFade1 = new wxCheckBox(Panel1, ID_CHECKBOX_Chase_3dFade1, _("Yes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Chase_3dFade1"));
    CheckBox_Chase_3dFade1->SetValue(false);
    FlexGridSizer24->Add(CheckBox_Chase_3dFade1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Chase_3dFade1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_CHECKBOX_Chase_3dFade1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Chase_3dFade1"));
    BitmapButton_Chase_3dFade1->SetDefault();
    BitmapButton_Chase_3dFade1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Chase_3dFade1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText13 = new wxStaticText(Panel1, ID_STATICTEXT12, _("Group All Arches"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    FlexGridSizer24->Add(StaticText13, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Chase_Group_All = new wxCheckBox(Panel1, ID_CHECKBOX_Chase_Group_All, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Chase_Group_All"));
    CheckBox_Chase_Group_All->SetValue(false);
    FlexGridSizer24->Add(CheckBox_Chase_Group_All, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Chase_Group_All = new wxBitmapButton(Panel1, ID_BITMAPBUTTON_Chase_Group_All, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Chase_Group_All"));
    BitmapButton_Chase_Group_All->SetDefault();
    BitmapButton_Chase_Group_All->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer24->Add(BitmapButton_Chase_Group_All, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1->SetSizer(FlexGridSizer24);
    FlexGridSizer24->Fit(Panel1);
    FlexGridSizer24->SetSizeHints(Panel1);
    Panel2 = new wxPanel(SingleStrandEffectType, ID_PANEL21, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL21"));
    FlexGridSizer79 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer79->AddGrowableCol(0);
    FlexGridSizer81 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer81->AddGrowableCol(1);
    StaticText101 = new wxStaticText(Panel2, ID_STATICTEXT106, _("Band size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT106"));
    FlexGridSizer81->Add(StaticText101, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Skips_BandSize = new wxSlider(Panel2, ID_SLIDER_Skips_BandSize, 1, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Skips_BandSize"));
    FlexGridSizer81->Add(Slider_Skips_BandSize, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl3 = new wxTextCtrl(Panel2, IDD_TEXTCTRL_Skips_BandSize, _("1"), wxDefaultPosition, wxDLG_UNIT(Panel2,wxSize(15,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Skips_BandSize"));
    TextCtrl3->SetMaxLength(3);
    FlexGridSizer81->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Skips_BandSize = new wxBitmapButton(Panel2, ID_BITMAPBUTTON44, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON44"));
    BitmapButton_Skips_BandSize->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer81->Add(BitmapButton_Skips_BandSize, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer79->Add(FlexGridSizer81, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer82 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer82->AddGrowableCol(1);
    StaticText105 = new wxStaticText(Panel2, ID_STATICTEXT107, _("Skip size"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT107"));
    FlexGridSizer82->Add(StaticText105, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Skips_SkipSize = new wxSlider(Panel2, ID_SLIDER_Skips_SkipSize, 1, 0, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Skips_SkipSize"));
    FlexGridSizer82->Add(Slider_Skips_SkipSize, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl4 = new wxTextCtrl(Panel2, IDD_TEXTCTRL_Skips_SkipSize, _("1"), wxDefaultPosition, wxDLG_UNIT(Panel2,wxSize(15,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Skips_SkipSize"));
    FlexGridSizer82->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Skips_SkipSize = new wxBitmapButton(Panel2, ID_BITMAPBUTTON46, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON46"));
    BitmapButton_Skips_SkipSize->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer82->Add(BitmapButton_Skips_SkipSize, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer79->Add(FlexGridSizer82, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer83 = new wxFlexGridSizer(0, 4, 0, 0);
    FlexGridSizer83->AddGrowableCol(1);
    StaticText106 = new wxStaticText(Panel2, ID_STATICTEXT110, _("Starting Position"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT110"));
    FlexGridSizer83->Add(StaticText106, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Skips_StartPos = new wxSlider(Panel2, ID_SLIDER_Skips_StartPos, 1, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Skips_StartPos"));
    FlexGridSizer83->Add(Slider_Skips_StartPos, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl5 = new wxTextCtrl(Panel2, IDD_TEXTCTRL_Skips_StartPos, _("1"), wxDefaultPosition, wxDLG_UNIT(Panel2,wxSize(15,-1)), 0, wxDefaultValidator, _T("IDD_TEXTCTRL_Skips_StartPos"));
    FlexGridSizer83->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Skips_StartingPosition = new wxBitmapButton(Panel2, ID_BITMAPBUTTON47, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON47"));
    BitmapButton_Skips_StartingPosition->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer83->Add(BitmapButton_Skips_StartingPosition, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer79->Add(FlexGridSizer83, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer84 = new wxFlexGridSizer(0, 3, 0, 0);
    StaticText109 = new wxStaticText(Panel2, ID_STATICTEXT111, _("Direction"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT111"));
    FlexGridSizer84->Add(StaticText109, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Skips_Direction = new wxChoice(Panel2, ID_CHOICE_Skips_Direction, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Skips_Direction"));
    Choice_Skips_Direction->Append(_("Left"));
    Choice_Skips_Direction->Append(_("Right"));
    Choice_Skips_Direction->Append(_("From Middle"));
    Choice_Skips_Direction->Append(_("To Middle"));
    FlexGridSizer84->Add(Choice_Skips_Direction, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Skips_Direction = new wxBitmapButton(Panel2, ID_BITMAPBUTTON48, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON48"));
    BitmapButton_Skips_Direction->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer84->Add(BitmapButton_Skips_Direction, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer79->Add(FlexGridSizer84, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Panel2->SetSizer(FlexGridSizer79);
    FlexGridSizer79->Fit(Panel2);
    FlexGridSizer79->SetSizeHints(Panel2);
    SingleStrandEffectType->AddPage(Panel1, _("Chase"), false);
    SingleStrandEffectType->AddPage(Panel2, _("Skips"), false);
    FlexGridSizer89->Add(SingleStrandEffectType, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_SingleStrand->SetSizer(FlexGridSizer89);
    FlexGridSizer89->Fit(Panel1_SingleStrand);
    FlexGridSizer89->SetSizeHints(Panel1_SingleStrand);
    Panel1_Snowflakes = new wxScrolledWindow(Choicebook1, ID_PANEL22, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL22"));
    FlexGridSizer43 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer43->AddGrowableCol(1);
    StaticText79 = new wxStaticText(Panel1_Snowflakes, ID_STATICTEXT80, _("Max flakes"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT80"));
    FlexGridSizer43->Add(StaticText79, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Snowflakes_Count = new wxSlider(Panel1_Snowflakes, ID_SLIDER_Snowflakes_Count, 5, 1, 20, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Snowflakes_Count"));
    FlexGridSizer43->Add(Slider_Snowflakes_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SnowflakesCount = new wxBitmapButton(Panel1_Snowflakes, ID_BITMAPBUTTON_SLIDER_Snowflakes_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Snowflakes_Count"));
    BitmapButton_SnowflakesCount->SetDefault();
    FlexGridSizer43->Add(BitmapButton_SnowflakesCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText80 = new wxStaticText(Panel1_Snowflakes, ID_STATICTEXT81, _("Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT81"));
    FlexGridSizer43->Add(StaticText80, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Snowflakes_Type = new wxSlider(Panel1_Snowflakes, ID_SLIDER_Snowflakes_Type, 1, 0, 5, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Snowflakes_Type"));
    FlexGridSizer43->Add(Slider_Snowflakes_Type, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SnowflakesType = new wxBitmapButton(Panel1_Snowflakes, ID_BITMAPBUTTON_SLIDER_Snowflakes_Type, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Snowflakes_Type"));
    BitmapButton_SnowflakesType->SetDefault();
    FlexGridSizer43->Add(BitmapButton_SnowflakesType, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Snowflakes->SetSizer(FlexGridSizer43);
    FlexGridSizer43->Fit(Panel1_Snowflakes);
    FlexGridSizer43->SetSizeHints(Panel1_Snowflakes);
    Panel1_Snowstorm = new wxScrolledWindow(Choicebook1, ID_PANEL24, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL24"));
    FlexGridSizer44 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer44->AddGrowableCol(1);
    StaticText45 = new wxStaticText(Panel1_Snowstorm, ID_STATICTEXT45, _("Max flakes"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT45"));
    FlexGridSizer44->Add(StaticText45, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Snowstorm_Count = new wxSlider(Panel1_Snowstorm, ID_SLIDER_Snowstorm_Count, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Snowstorm_Count"));
    FlexGridSizer44->Add(Slider_Snowstorm_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SnowstormCount = new wxBitmapButton(Panel1_Snowstorm, ID_BITMAPBUTTON_SLIDER_Snowstorm_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Snowstorm_Count"));
    BitmapButton_SnowstormCount->SetDefault();
    FlexGridSizer44->Add(BitmapButton_SnowstormCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText51 = new wxStaticText(Panel1_Snowstorm, ID_STATICTEXT51, _("Trail Length"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT51"));
    FlexGridSizer44->Add(StaticText51, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Snowstorm_Length = new wxSlider(Panel1_Snowstorm, ID_SLIDER_Snowstorm_Length, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Snowstorm_Length"));
    FlexGridSizer44->Add(Slider_Snowstorm_Length, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SnowstormLength = new wxBitmapButton(Panel1_Snowstorm, ID_BITMAPBUTTON_SLIDER_Snowstorm_Length, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Snowstorm_Length"));
    BitmapButton_SnowstormLength->SetDefault();
    FlexGridSizer44->Add(BitmapButton_SnowstormLength, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Snowstorm->SetSizer(FlexGridSizer44);
    FlexGridSizer44->Fit(Panel1_Snowstorm);
    FlexGridSizer44->SetSizeHints(Panel1_Snowstorm);
    Panel1_Spirals = new wxScrolledWindow(Choicebook1, ID_PANEL26, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL26"));
    FlexGridSizer45 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer45->AddGrowableCol(1);
    StaticText34 = new wxStaticText(Panel1_Spirals, ID_STATICTEXT38, _("Palette Rep"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT38"));
    FlexGridSizer45->Add(StaticText34, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Spirals_Count = new wxSlider(Panel1_Spirals, ID_SLIDER_Spirals_Count, 1, 1, 5, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirals_Count"));
    FlexGridSizer45->Add(Slider_Spirals_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SpiralsCount = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_SLIDER_Spirals_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirals_Count"));
    BitmapButton_SpiralsCount->SetDefault();
    BitmapButton_SpiralsCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_SpiralsCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText36 = new wxStaticText(Panel1_Spirals, ID_STATICTEXT40, _("Rotations"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT40"));
    FlexGridSizer45->Add(StaticText36, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Spirals_Rotation = new wxSlider(Panel1_Spirals, ID_SLIDER_Spirals_Rotation, 20, -500, 500, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirals_Rotation"));
    FlexGridSizer45->Add(Slider_Spirals_Rotation, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SpiralsRotation = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_SLIDER_Spirals_Rotation, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirals_Rotation"));
    BitmapButton_SpiralsRotation->SetDefault();
    BitmapButton_SpiralsRotation->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_SpiralsRotation, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText38 = new wxStaticText(Panel1_Spirals, ID_STATICTEXT42, _("Thickness"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT42"));
    FlexGridSizer45->Add(StaticText38, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Spirals_Thickness = new wxSlider(Panel1_Spirals, ID_SLIDER_Spirals_Thickness, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirals_Thickness"));
    FlexGridSizer45->Add(Slider_Spirals_Thickness, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SpiralsThickness = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_SLIDER_Spirals_Thickness, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirals_Thickness"));
    BitmapButton_SpiralsThickness->SetDefault();
    BitmapButton_SpiralsThickness->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_SpiralsThickness, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText40 = new wxStaticText(Panel1_Spirals, ID_STATICTEXT44, _("Direction"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT44"));
    FlexGridSizer45->Add(StaticText40, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Spirals_Direction = new wxSlider(Panel1_Spirals, ID_SLIDER_Spirals_Direction, 1, -1, 1, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirals_Direction"));
    FlexGridSizer45->Add(Slider_Spirals_Direction, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_SpiralsDirection = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_SLIDER_Spirals_Direction, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirals_Direction"));
    BitmapButton_SpiralsDirection->SetDefault();
    BitmapButton_SpiralsDirection->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_SpiralsDirection, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_Spirals_Blend = new wxCheckBox(Panel1_Spirals, ID_CHECKBOX_Spirals_Blend, _("Blend"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Spirals_Blend"));
    CheckBox_Spirals_Blend->SetValue(false);
    FlexGridSizer45->Add(CheckBox_Spirals_Blend, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer20 = new wxFlexGridSizer(0, 3, 0, 0);
    BitmapButton_SpiralsBlend = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_CHECKBOX_Spirals_Blend, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirals_Blend"));
    BitmapButton_SpiralsBlend->SetDefault();
    BitmapButton_SpiralsBlend->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer20->Add(BitmapButton_SpiralsBlend, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer20->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_Spirals_3D = new wxCheckBox(Panel1_Spirals, ID_CHECKBOX_Spirals_3D, _("3D"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Spirals_3D"));
    CheckBox_Spirals_3D->SetValue(false);
    FlexGridSizer20->Add(CheckBox_Spirals_3D, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer45->Add(FlexGridSizer20, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Spirals3D = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_CHECKBOX_Spirals_3D, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirals_3D"));
    BitmapButton_Spirals3D->SetDefault();
    BitmapButton_Spirals3D->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_Spirals3D, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_Spirals_Grow = new wxCheckBox(Panel1_Spirals, ID_CHECKBOX_Spirals_Grow, _("Grow"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Spirals_Grow"));
    CheckBox_Spirals_Grow->SetValue(false);
    FlexGridSizer45->Add(CheckBox_Spirals_Grow, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer21 = new wxFlexGridSizer(0, 3, 0, 0);
    BitmapButton_SpiralsGrow = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_CHECKBOX_Spirals_Grow, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirals_Grow"));
    BitmapButton_SpiralsGrow->SetDefault();
    BitmapButton_SpiralsGrow->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer21->Add(BitmapButton_SpiralsGrow, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer21->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_Spirlas_Shrink = new wxCheckBox(Panel1_Spirals, ID_CHECKBOX_Spirals_Shrink, _("Shrink"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Spirals_Shrink"));
    CheckBox_Spirlas_Shrink->SetValue(false);
    FlexGridSizer21->Add(CheckBox_Spirlas_Shrink, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer45->Add(FlexGridSizer21, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_SpiralsShrink = new wxBitmapButton(Panel1_Spirals, ID_BITMAPBUTTON_CHECKBOX_Spirals_Shrink, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirals_Shrink"));
    BitmapButton_SpiralsShrink->SetDefault();
    BitmapButton_SpiralsShrink->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer45->Add(BitmapButton_SpiralsShrink, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Spirals->SetSizer(FlexGridSizer45);
    FlexGridSizer45->Fit(Panel1_Spirals);
    FlexGridSizer45->SetSizeHints(Panel1_Spirals);
    Panel1_Spirograph = new wxScrolledWindow(Choicebook1, ID_PANEL35, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL35"));
    FlexGridSizer72 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer72->AddGrowableCol(1);
    StaticText87 = new wxStaticText(Panel1_Spirograph, ID_STATICTEXT88, _("R - Radius of outer circle"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT88"));
    FlexGridSizer72->Add(StaticText87, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Spirograph_R = new wxSlider(Panel1_Spirograph, ID_SLIDER_Spirograph_R, 20, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_R"));
    FlexGridSizer72->Add(Slider_Spirograph_R, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SpirographR = new wxBitmapButton(Panel1_Spirograph, ID_BITMAPBUTTON_SLIDER_Spirograph_R, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_R"));
    BitmapButton_SpirographR->SetDefault();
    BitmapButton_SpirographR->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer72->Add(BitmapButton_SpirographR, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText88 = new wxStaticText(Panel1_Spirograph, ID_STATICTEXT89, _("r - Radius of inner circle"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT89"));
    FlexGridSizer72->Add(StaticText88, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Spirograph_r = new wxSlider(Panel1_Spirograph, ID_SLIDER_Spirograph_r, 10, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_r"));
    FlexGridSizer72->Add(Slider_Spirograph_r, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Spirographr = new wxBitmapButton(Panel1_Spirograph, ID_BITMAPBUTTON_SLIDER_Spirograph_r, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_r"));
    BitmapButton_Spirographr->SetDefault();
    BitmapButton_Spirographr->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer72->Add(BitmapButton_Spirographr, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText89 = new wxStaticText(Panel1_Spirograph, ID_STATICTEXT90, _("d - Distance"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT90"));
    FlexGridSizer72->Add(StaticText89, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Spirograph_d = new wxSlider(Panel1_Spirograph, ID_SLIDER_Spirograph_d, 30, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Spirograph_d"));
    FlexGridSizer72->Add(Slider_Spirograph_d, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_SpirographAnimate = new wxBitmapButton(Panel1_Spirograph, ID_BITMAPBUTTON_SLIDER_Spirograph_d, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Spirograph_d"));
    BitmapButton_SpirographAnimate->SetDefault();
    BitmapButton_SpirographAnimate->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer72->Add(BitmapButton_SpirographAnimate, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText92 = new wxStaticText(Panel1_Spirograph, ID_STATICTEXT93, _("Should distance\nbe animated\?"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT93"));
    FlexGridSizer72->Add(StaticText92, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    CheckBox_Spirograph_Animate = new wxCheckBox(Panel1_Spirograph, ID_CHECKBOX_Spirograph_Animate, _("Yes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Spirograph_Animate"));
    CheckBox_Spirograph_Animate->SetValue(false);
    FlexGridSizer72->Add(CheckBox_Spirograph_Animate, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Spirographd = new wxBitmapButton(Panel1_Spirograph, ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate"));
    BitmapButton_Spirographd->SetDefault();
    BitmapButton_Spirographd->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer72->Add(BitmapButton_Spirographd, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText90 = new wxStaticText(Panel1_Spirograph, ID_STATICTEXT91, _("Note: r should be <= R"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT91"));
    FlexGridSizer72->Add(StaticText90, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_Spirograph->SetSizer(FlexGridSizer72);
    FlexGridSizer72->Fit(Panel1_Spirograph);
    FlexGridSizer72->SetSizeHints(Panel1_Spirograph);
    Panel1_Strobe = new wxScrolledWindow(Choicebook1, ID_PANEL23, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL23"));
    FlexGridSizer85 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer85->AddGrowableCol(0);
    FlexGridSizer87 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer87->AddGrowableCol(1);
    StaticText110 = new wxStaticText(Panel1_Strobe, ID_STATICTEXT112, _("Number Strobes"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT112"));
    FlexGridSizer87->Add(StaticText110, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Number_Strobes = new wxSlider(Panel1_Strobe, ID_SLIDER_Number_Strobes, 3, 1, 300, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Number_Strobes"));
    FlexGridSizer87->Add(Slider_Number_Strobes, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_NumberStrobes = new wxBitmapButton(Panel1_Strobe, ID_BITMAPBUTTON49, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON49"));
    BitmapButton_NumberStrobes->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer87->Add(BitmapButton_NumberStrobes, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer85->Add(FlexGridSizer87, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer88 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer88->AddGrowableCol(1);
    StaticText111 = new wxStaticText(Panel1_Strobe, ID_STATICTEXT113, _("Strobe Duration"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT113"));
    FlexGridSizer88->Add(StaticText111, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Strobe_Duration = new wxSlider(Panel1_Strobe, ID_SLIDER_Strobe_Duration, 10, 1, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Strobe_Duration"));
    FlexGridSizer88->Add(Slider_Strobe_Duration, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_StrobeDuration = new wxBitmapButton(Panel1_Strobe, ID_BITMAPBUTTON51, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON51"));
    BitmapButton_StrobeDuration->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer88->Add(BitmapButton_StrobeDuration, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer85->Add(FlexGridSizer88, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer90 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer90->AddGrowableCol(1);
    StaticText112 = new wxStaticText(Panel1_Strobe, ID_STATICTEXT114, _("Strobe Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT114"));
    FlexGridSizer90->Add(StaticText112, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Strobe_Type = new wxSlider(Panel1_Strobe, ID_SLIDER_Strobe_Type, 1, 1, 4, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Strobe_Type"));
    FlexGridSizer90->Add(Slider_Strobe_Type, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Strobe_Type = new wxBitmapButton(Panel1_Strobe, ID_BITMAPBUTTON50, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON50"));
    BitmapButton_Strobe_Type->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer90->Add(BitmapButton_Strobe_Type, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer85->Add(FlexGridSizer90, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Strobe->SetSizer(FlexGridSizer85);
    FlexGridSizer85->Fit(Panel1_Strobe);
    FlexGridSizer85->SetSizeHints(Panel1_Strobe);
    Panel1_Text = new wxScrolledWindow(Choicebook1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL7"));
    FlexGridSizer46 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer46->AddGrowableCol(0);
    FlexGridSizer65 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer65->AddGrowableCol(1);
    StaticText53 = new wxStaticText(Panel1_Text, ID_STATICTEXT53, _("Line 1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT53"));
    FlexGridSizer65->Add(StaticText53, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Text_Line1 = new wxTextCtrl(Panel1_Text, ID_TEXTCTRL_Text_Line1, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Text_Line1"));
    TextCtrl_Text_Line1->SetMaxLength(256);
    FlexGridSizer65->Add(TextCtrl_Text_Line1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    StaticText54 = new wxStaticText(Panel1_Text, ID_STATICTEXT54, _("Line 2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT54"));
    FlexGridSizer65->Add(StaticText54, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Text_Line2 = new wxTextCtrl(Panel1_Text, ID_TEXTCTRL_Text_Line2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Text_Line2"));
    TextCtrl_Text_Line2->SetMaxLength(256);
    FlexGridSizer65->Add(TextCtrl_Text_Line2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    StaticText19 = new wxStaticText(Panel1_Text, ID_STATICTEXT22, _("Line 3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
    FlexGridSizer65->Add(StaticText19, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Text_Line3 = new wxTextCtrl(Panel1_Text, ID_TEXTCTRL_Text_Line3, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Text_Line3"));
    TextCtrl_Text_Line3->SetMaxLength(256);
    FlexGridSizer65->Add(TextCtrl_Text_Line3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    StaticText20 = new wxStaticText(Panel1_Text, ID_STATICTEXT23, _("Line 4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
    FlexGridSizer65->Add(StaticText20, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    TextCtrl_Text_Line4 = new wxTextCtrl(Panel1_Text, ID_TEXTCTRL_Text_Line4, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER, wxDefaultValidator, _T("ID_TEXTCTRL_Text_Line4"));
    TextCtrl_Text_Line4->SetMaxLength(256);
    FlexGridSizer65->Add(TextCtrl_Text_Line4, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer46->Add(FlexGridSizer65, 1, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Notebook_Text1 = new wxNotebook(Panel1_Text, IDD_NOTEBOOK_Text, wxDefaultPosition, wxDefaultSize, 0, _T("IDD_NOTEBOOK_Text"));
    Notebook_Text1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_SCROLLBAR));
    Panel_Text1 = new wxPanel(Notebook_Text1, ID_PANEL_Text1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_Text1"));
    FlexGridSizer69 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer69->AddGrowableCol(1);
    StaticText162 = new wxStaticText(Panel_Text1, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer69->Add(StaticText162, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FontPickerCtrl1 = new wxFontPickerCtrl(Panel_Text1, ID_FONTPICKER_Text_Font1, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_FONTDESC_AS_LABEL|wxFNTP_USEFONT_FOR_LABEL, wxDefaultValidator, _T("ID_FONTPICKER_Text_Font1"));
    FlexGridSizer69->Add(FontPickerCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextFont1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_FONTPICKER_Text_Font1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_FONTPICKER_Text_Font1"));
    BitmapButton_TextFont1->SetDefault();
    BitmapButton_TextFont1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer69->Add(BitmapButton_TextFont1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText78 = new wxStaticText(Panel_Text1, ID_STATICTEXT79, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT79"));
    FlexGridSizer69->Add(StaticText78, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer48 = new wxFlexGridSizer(0, 3, 0, 0);
    Choice_Text_Dir1 = new wxChoice(Panel_Text1, ID_CHOICE_Text_Dir1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Dir1"));
    FlexGridSizer48->Add(Choice_Text_Dir1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextDir1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_CHOICE_Text_Dir1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Dir1"));
    BitmapButton_TextDir1->SetDefault();
    BitmapButton_TextDir1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer48->Add(BitmapButton_TextDir1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_TextToCenter1 = new wxCheckBox(Panel_Text1, ID_CHECKBOX_TextToCenter1, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_TextToCenter1"));
    CheckBox_TextToCenter1->SetValue(false);
    CheckBox_TextToCenter1->SetToolTip(_("Move to center and stop"));
    FlexGridSizer48->Add(CheckBox_TextToCenter1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer69->Add(FlexGridSizer48, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_TextToCenter1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_TextToCenter1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_TextToCenter1"));
    BitmapButton_TextToCenter1->SetDefault();
    BitmapButton_TextToCenter1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer69->Add(BitmapButton_TextToCenter1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText107 = new wxStaticText(Panel_Text1, ID_STATICTEXT108, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT108"));
    FlexGridSizer69->Add(StaticText107, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Effect1 = new wxChoice(Panel_Text1, ID_CHOICE_Text_Effect1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Effect1"));
    FlexGridSizer69->Add(Choice_Text_Effect1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextEffect1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_CHOICE_Text_Effect1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Effect1"));
    BitmapButton_TextEffect1->SetDefault();
    BitmapButton_TextEffect1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer69->Add(BitmapButton_TextEffect1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText98 = new wxStaticText(Panel_Text1, ID_STATICTEXT99, _("Count down"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT99"));
    FlexGridSizer69->Add(StaticText98, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Count1 = new wxChoice(Panel_Text1, ID_CHOICE_Text_Count1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Count1"));
    FlexGridSizer69->Add(Choice_Text_Count1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextCount1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_CHOICE_Text_Count1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Count1"));
    BitmapButton_TextCount1->SetDefault();
    BitmapButton_TextCount1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer69->Add(BitmapButton_TextCount1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText100 = new wxStaticText(Panel_Text1, ID_STATICTEXT101, _("Position"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT101"));
    FlexGridSizer69->Add(StaticText100, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Text_Position1 = new wxSlider(Panel_Text1, ID_SLIDER_Text_Position1, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Text_Position1"));
    FlexGridSizer69->Add(Slider_Text_Position1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextPosition1 = new wxBitmapButton(Panel_Text1, ID_BITMAPBUTTON_SLIDER_Text_Position1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Text_Position1"));
    BitmapButton_TextPosition1->SetDefault();
    BitmapButton_TextPosition1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer69->Add(BitmapButton_TextPosition1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel_Text1->SetSizer(FlexGridSizer69);
    FlexGridSizer69->Fit(Panel_Text1);
    FlexGridSizer69->SetSizeHints(Panel_Text1);
    Panel_Text2 = new wxPanel(Notebook_Text1, ID_PANEL_Text2, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_Text2"));
    FlexGridSizer74 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer74->AddGrowableCol(1);
    StaticText163 = new wxStaticText(Panel_Text2, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer74->Add(StaticText163, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FontPickerCtrl2 = new wxFontPickerCtrl(Panel_Text2, ID_FONTPICKER_Text_Font2, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_FONTDESC_AS_LABEL|wxFNTP_USEFONT_FOR_LABEL, wxDefaultValidator, _T("ID_FONTPICKER_Text_Font2"));
    FlexGridSizer74->Add(FontPickerCtrl2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextFont2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_FONTPICKER_Text_Font2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_FONTPICKER_Text_Font2"));
    BitmapButton_TextFont2->SetDefault();
    BitmapButton_TextFont2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer74->Add(BitmapButton_TextFont2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText57 = new wxStaticText(Panel_Text2, ID_STATICTEXT57, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT57"));
    FlexGridSizer74->Add(StaticText57, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer49 = new wxFlexGridSizer(0, 3, 0, 0);
    Choice_Text_Dir2 = new wxChoice(Panel_Text2, ID_CHOICE_Text_Dir2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Dir2"));
    FlexGridSizer49->Add(Choice_Text_Dir2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextDir2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_CHOICE_Text_Dir2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Dir2"));
    BitmapButton_TextDir2->SetDefault();
    BitmapButton_TextDir2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer49->Add(BitmapButton_TextDir2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_TextToCenter2 = new wxCheckBox(Panel_Text2, ID_CHECKBOX_TextToCenter2, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_TextToCenter2"));
    CheckBox_TextToCenter2->SetValue(false);
    CheckBox_TextToCenter2->SetToolTip(_("Move to center and stop"));
    FlexGridSizer49->Add(CheckBox_TextToCenter2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer74->Add(FlexGridSizer49, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_TextToCenter2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_Text2Center2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_Text2Center2"));
    BitmapButton_TextToCenter2->SetDefault();
    BitmapButton_TextToCenter2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer74->Add(BitmapButton_TextToCenter2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText108 = new wxStaticText(Panel_Text2, ID_STATICTEXT109, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT109"));
    FlexGridSizer74->Add(StaticText108, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Effect2 = new wxChoice(Panel_Text2, ID_CHOICE_Text_Effect2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Effect2"));
    FlexGridSizer74->Add(Choice_Text_Effect2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextEffect2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_CHOICE_Text_Effect2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Effect2"));
    BitmapButton_TextEffect2->SetDefault();
    BitmapButton_TextEffect2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer74->Add(BitmapButton_TextEffect2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText103 = new wxStaticText(Panel_Text2, ID_STATICTEXT104, _("Count down"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT104"));
    FlexGridSizer74->Add(StaticText103, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Count2 = new wxChoice(Panel_Text2, ID_CHOICE_Text_Count2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Count2"));
    FlexGridSizer74->Add(Choice_Text_Count2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextCount2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_CHOICE_Text_Count2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Count2"));
    BitmapButton_TextCount2->SetDefault();
    BitmapButton_TextCount2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer74->Add(BitmapButton_TextCount2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText102 = new wxStaticText(Panel_Text2, ID_STATICTEXT103, _("Position"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT103"));
    FlexGridSizer74->Add(StaticText102, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Text_Position2 = new wxSlider(Panel_Text2, ID_SLIDER_Text_Position2, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Text_Position2"));
    FlexGridSizer74->Add(Slider_Text_Position2, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextPosition2 = new wxBitmapButton(Panel_Text2, ID_BITMAPBUTTON_SLIDER_Text_Position2, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Text_Position2"));
    BitmapButton_TextPosition2->SetDefault();
    BitmapButton_TextPosition2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer74->Add(BitmapButton_TextPosition2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel_Text2->SetSizer(FlexGridSizer74);
    FlexGridSizer74->Fit(Panel_Text2);
    FlexGridSizer74->SetSizeHints(Panel_Text2);
    Panel_Text3 = new wxPanel(Notebook_Text1, ID_PANEL_Text3, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_Text3"));
    FlexGridSizer25 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer25->AddGrowableCol(1);
    StaticText164 = new wxStaticText(Panel_Text3, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer25->Add(StaticText164, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FontPickerCtrl3 = new wxFontPickerCtrl(Panel_Text3, ID_FONTPICKER_Text_Font3, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_FONTDESC_AS_LABEL|wxFNTP_USEFONT_FOR_LABEL, wxDefaultValidator, _T("ID_FONTPICKER_Text_Font3"));
    FlexGridSizer25->Add(FontPickerCtrl3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextFont3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_FONTPICKER_Text_Font3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_FONTPICKER_Text_Font3"));
    BitmapButton_TextFont3->SetDefault();
    BitmapButton_TextFont3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer25->Add(BitmapButton_TextFont3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText15 = new wxStaticText(Panel_Text3, ID_STATICTEXT16, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
    FlexGridSizer25->Add(StaticText15, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer50 = new wxFlexGridSizer(0, 3, 0, 0);
    Choice_Text_Dir3 = new wxChoice(Panel_Text3, ID_CHOICE_Text_Dir3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Dir3"));
    FlexGridSizer50->Add(Choice_Text_Dir3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextDir3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_CHOICE_Text_Dir3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Dir3"));
    BitmapButton_TextDir3->SetDefault();
    BitmapButton_TextDir3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer50->Add(BitmapButton_TextDir3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_TextToCenter3 = new wxCheckBox(Panel_Text3, ID_CHECKBOX_TextToCenter3, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_TextToCenter3"));
    CheckBox_TextToCenter3->SetValue(false);
    CheckBox_TextToCenter3->SetToolTip(_("Move to center and stop"));
    FlexGridSizer50->Add(CheckBox_TextToCenter3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer25->Add(FlexGridSizer50, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_TextToCenter3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_TextToCenter3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_TextToCenter3"));
    BitmapButton_TextToCenter3->SetDefault();
    BitmapButton_TextToCenter3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer25->Add(BitmapButton_TextToCenter3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText16 = new wxStaticText(Panel_Text3, ID_STATICTEXT17, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    FlexGridSizer25->Add(StaticText16, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Effect3 = new wxChoice(Panel_Text3, ID_CHOICE_Text_Effect3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Effect3"));
    FlexGridSizer25->Add(Choice_Text_Effect3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextEffect3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_CHOICE_Text_Effect3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Effect3"));
    BitmapButton_TextEffect3->SetDefault();
    BitmapButton_TextEffect3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer25->Add(BitmapButton_TextEffect3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText17 = new wxStaticText(Panel_Text3, ID_STATICTEXT18, _("Count down"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
    FlexGridSizer25->Add(StaticText17, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Count3 = new wxChoice(Panel_Text3, ID_CHOICE_Text_Count3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Count3"));
    FlexGridSizer25->Add(Choice_Text_Count3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextCount3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_CHOICE_Text_Count3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Count3"));
    BitmapButton_TextCount3->SetDefault();
    BitmapButton_TextCount3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer25->Add(BitmapButton_TextCount3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText18 = new wxStaticText(Panel_Text3, ID_STATICTEXT19, _("Position"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    FlexGridSizer25->Add(StaticText18, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Text_Position3 = new wxSlider(Panel_Text3, ID_SLIDER_Text_Position3, 50, 0, 100, wxDefaultPosition, wxSize(177,24), 0, wxDefaultValidator, _T("ID_SLIDER_Text_Position3"));
    FlexGridSizer25->Add(Slider_Text_Position3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextPosition3 = new wxBitmapButton(Panel_Text3, ID_BITMAPBUTTON_SLIDER_Text_Position3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Text_Position3"));
    BitmapButton_TextPosition3->SetDefault();
    BitmapButton_TextPosition3->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer25->Add(BitmapButton_TextPosition3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel_Text3->SetSizer(FlexGridSizer25);
    FlexGridSizer25->Fit(Panel_Text3);
    FlexGridSizer25->SetSizeHints(Panel_Text3);
    Panel_Text4 = new wxPanel(Notebook_Text1, ID_PANEL_Text4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL_Text4"));
    FlexGridSizer29 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer29->AddGrowableCol(1);
    StaticText165 = new wxStaticText(Panel_Text4, wxID_ANY, _("Font"), wxDefaultPosition, wxDefaultSize, 0, _T("wxID_ANY"));
    FlexGridSizer29->Add(StaticText165, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FontPickerCtrl4 = new wxFontPickerCtrl(Panel_Text4, ID_FONTPICKER_Text_Font4, wxNullFont, wxDefaultPosition, wxDefaultSize, wxFNTP_FONTDESC_AS_LABEL|wxFNTP_USEFONT_FOR_LABEL, wxDefaultValidator, _T("ID_FONTPICKER_Text_Font4"));
    FlexGridSizer29->Add(FontPickerCtrl4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextFont4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_FONTPICKER_Text_Font4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_FONTPICKER_Text_Font4"));
    BitmapButton_TextFont4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer29->Add(BitmapButton_TextFont4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText22 = new wxStaticText(Panel_Text4, ID_STATICTEXT24, _("Movement"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
    FlexGridSizer29->Add(StaticText22, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    FlexGridSizer52 = new wxFlexGridSizer(0, 3, 0, 0);
    Choice_Text_Dir4 = new wxChoice(Panel_Text4, ID_CHOICE_Text_Dir4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Dir4"));
    FlexGridSizer52->Add(Choice_Text_Dir4, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextDir4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_CHOICE_Text_Dir4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Dir4"));
    BitmapButton_TextDir4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer52->Add(BitmapButton_TextDir4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_TextToCenter4 = new wxCheckBox(Panel_Text4, ID_CHECKBOX_TextToCenter4, _("C"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_TextToCenter4"));
    CheckBox_TextToCenter4->SetValue(false);
    CheckBox_TextToCenter4->SetToolTip(_("Move to center and stop"));
    FlexGridSizer52->Add(CheckBox_TextToCenter4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer29->Add(FlexGridSizer52, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_TextToCenter4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_TextToCenter4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_TextToCenter4"));
    BitmapButton_TextToCenter4->SetDefault();
    BitmapButton_TextToCenter4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer29->Add(BitmapButton_TextToCenter4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText29 = new wxStaticText(Panel_Text4, ID_STATICTEXT29, _("Effect"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT29"));
    FlexGridSizer29->Add(StaticText29, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Effect4 = new wxChoice(Panel_Text4, ID_CHOICE_Text_Effect4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Effect4"));
    FlexGridSizer29->Add(Choice_Text_Effect4, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextEffect4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_CHOICE_Text_Effect4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Effect4"));
    BitmapButton_TextEffect4->SetDefault();
    BitmapButton_TextEffect4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer29->Add(BitmapButton_TextEffect4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText42 = new wxStaticText(Panel_Text4, ID_STATICTEXT47, _("Count down"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT47"));
    FlexGridSizer29->Add(StaticText42, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Choice_Text_Count4 = new wxChoice(Panel_Text4, ID_CHOICE_Text_Count4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Text_Count4"));
    FlexGridSizer29->Add(Choice_Text_Count4, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextCount4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_CHOICE_Text_Count4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICE_Text_Count4"));
    BitmapButton_TextCount4->SetDefault();
    BitmapButton_TextCount4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer29->Add(BitmapButton_TextCount4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText44 = new wxStaticText(Panel_Text4, ID_STATICTEXT48, _("Position"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT48"));
    FlexGridSizer29->Add(StaticText44, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    Slider_Text_Position4 = new wxSlider(Panel_Text4, ID_SLIDER_Text_Position4, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Text_Position4"));
    FlexGridSizer29->Add(Slider_Text_Position4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_TextPosition4 = new wxBitmapButton(Panel_Text4, ID_BITMAPBUTTON_SLIDER_Text_Position4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Text_Position4"));
    BitmapButton_TextPosition4->SetDefault();
    BitmapButton_TextPosition4->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer29->Add(BitmapButton_TextPosition4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel_Text4->SetSizer(FlexGridSizer29);
    FlexGridSizer29->Fit(Panel_Text4);
    FlexGridSizer29->SetSizeHints(Panel_Text4);
    Notebook_Text1->AddPage(Panel_Text1, _("Line1 Font"), false);
    Notebook_Text1->AddPage(Panel_Text2, _("Line2 Font"), false);
    Notebook_Text1->AddPage(Panel_Text3, _("Line3 Font"), false);
    Notebook_Text1->AddPage(Panel_Text4, _("Line4 Font"), false);
    FlexGridSizer46->Add(Notebook_Text1, 0, wxEXPAND|wxALIGN_LEFT|wxALIGN_TOP, 0);
    Panel1_Text->SetSizer(FlexGridSizer46);
    FlexGridSizer46->Fit(Panel1_Text);
    FlexGridSizer46->SetSizeHints(Panel1_Text);
    Panel1_Tree = new wxScrolledWindow(Choicebook1, ID_PANEL34, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL34"));
    FlexGridSizer71 = new wxFlexGridSizer(5, 3, 0, 0);
    FlexGridSizer71->AddGrowableCol(1);
    BitmapButton20 = new wxBitmapButton(Panel1_Tree, ID_BITMAPBUTTON40, tree, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON40"));
    BitmapButton20->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer71->Add(BitmapButton20, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer71->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer71->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText86 = new wxStaticText(Panel1_Tree, ID_STATICTEXT87, _("Number Branches"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT87"));
    FlexGridSizer71->Add(StaticText86, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Tree_Branches = new wxSlider(Panel1_Tree, ID_SLIDER_Tree_Branches, 3, 1, 10, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Tree_Branches"));
    FlexGridSizer71->Add(Slider_Tree_Branches, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_TreeBranches = new wxBitmapButton(Panel1_Tree, ID_BITMAPBUTTON_SLIDER_Tree_Branches, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Tree_Branches"));
    BitmapButton_TreeBranches->SetDefault();
    FlexGridSizer71->Add(BitmapButton_TreeBranches, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    Panel1_Tree->SetSizer(FlexGridSizer71);
    FlexGridSizer71->Fit(Panel1_Tree);
    FlexGridSizer71->SetSizeHints(Panel1_Tree);
    Panel1_Twinkle = new wxScrolledWindow(Choicebook1, ID_PANEL33, wxDefaultPosition, wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL33"));
    FlexGridSizer4 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer4->AddGrowableCol(1);
    StaticText85 = new wxStaticText(Panel1_Twinkle, ID_STATICTEXT86, _("Number Lights"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT86"));
    FlexGridSizer4->Add(StaticText85, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Twinkle_Count = new wxSlider(Panel1_Twinkle, ID_SLIDER_Twinkle_Count, 3, 2, 100, wxDefaultPosition, wxSize(117,24), 0, wxDefaultValidator, _T("ID_SLIDER_Twinkle_Count"));
    FlexGridSizer4->Add(Slider_Twinkle_Count, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_TwinkleCount = new wxBitmapButton(Panel1_Twinkle, ID_BITMAPBUTTON_SLIDER_Twinkle_Count, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Twinkle_Count"));
    BitmapButton_TwinkleCount->SetDefault();
    BitmapButton_TwinkleCount->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer4->Add(BitmapButton_TwinkleCount, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    StaticText104 = new wxStaticText(Panel1_Twinkle, ID_STATICTEXT105, _("Twinkle Steps"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT105"));
    FlexGridSizer4->Add(StaticText104, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Twinkle_Steps = new wxSlider(Panel1_Twinkle, ID_SLIDER_Twinkle_Steps, 30, 2, 200, wxDefaultPosition, wxSize(119,24), 0, wxDefaultValidator, _T("ID_SLIDER_Twinkle_Steps"));
    FlexGridSizer4->Add(Slider_Twinkle_Steps, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_TwinkleSteps = new wxBitmapButton(Panel1_Twinkle, ID_BITMAPBUTTON_SLIDER_Twinkle_Steps, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_SLIDER_Twinkle_Steps"));
    BitmapButton_TwinkleSteps->SetDefault();
    BitmapButton_TwinkleSteps->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer4->Add(BitmapButton_TwinkleSteps, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    CheckBox_Twinkle_Strobe = new wxCheckBox(Panel1_Twinkle, ID_CHECKBOX_Twinkle_Strobe, _("Strobe"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Twinkle_Strobe"));
    CheckBox_Twinkle_Strobe->SetValue(false);
    FlexGridSizer4->Add(CheckBox_Twinkle_Strobe, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_TwinkleStrobe = new wxBitmapButton(Panel1_Twinkle, ID_BITMAPBUTTON_CHECKBOX_Twinkle_Strobe, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHECKBOX_Twinkle_Strobe"));
    BitmapButton_TwinkleStrobe->SetDefault();
    BitmapButton_TwinkleStrobe->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer4->Add(BitmapButton_TwinkleStrobe, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer4->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1_Twinkle->SetSizer(FlexGridSizer4);
    FlexGridSizer4->Fit(Panel1_Twinkle);
    FlexGridSizer4->SetSizeHints(Panel1_Twinkle);
    Panel1_Wave = new wxScrolledWindow(Choicebook1, ID_PANEL15, wxPoint(184,10), wxDefaultSize, wxVSCROLL|wxHSCROLL, _T("ID_PANEL15"));
    FlexGridSizer51 = new wxFlexGridSizer(0, 3, 0, 0);
    FlexGridSizer51->AddGrowableCol(1);
    StaticText47 = new wxStaticText(Panel1_Wave, ID_STATICTEXT49, _("Wave Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT49"));
    FlexGridSizer51->Add(StaticText47, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Wave_Type = new wxChoice(Panel1_Wave, ID_CHOICE_Wave_Type, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Wave_Type"));
    FlexGridSizer51->Add(Choice_Wave_Type, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_WaveType = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON2, padlock16x16_green_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
    BitmapButton_WaveType->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_WaveType, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText48 = new wxStaticText(Panel1_Wave, ID_STATICTEXT50, _("Fill Colors"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT50"));
    FlexGridSizer51->Add(StaticText48, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Fill_Colors = new wxChoice(Panel1_Wave, ID_CHOICE_Fill_Colors, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Fill_Colors"));
    FlexGridSizer51->Add(Choice_Fill_Colors, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Wave_FillColors = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON3, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
    BitmapButton_Wave_FillColors->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_Wave_FillColors, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText49 = new wxStaticText(Panel1_Wave, ID_STATICTEXT52, _("Mirror Wave"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT52"));
    FlexGridSizer51->Add(StaticText49, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    CheckBox_Mirror_Wave = new wxCheckBox(Panel1_Wave, ID_CHECKBOX_Mirror_Wave, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX_Mirror_Wave"));
    CheckBox_Mirror_Wave->SetValue(false);
    FlexGridSizer51->Add(CheckBox_Mirror_Wave, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    BitmapButton_Wave_MirrorWave = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON4, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
    BitmapButton_Wave_MirrorWave->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_Wave_MirrorWave, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText50 = new wxStaticText(Panel1_Wave, ID_STATICTEXT55, _("Number of Waves"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT55"));
    FlexGridSizer51->Add(StaticText50, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Number_Waves = new wxSlider(Panel1_Wave, ID_SLIDER_Number_Waves, 900, 180, 3600, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Number_Waves"));
    FlexGridSizer51->Add(Slider_Number_Waves, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_NumberWaves = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON5, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
    BitmapButton_NumberWaves->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_NumberWaves, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText52 = new wxStaticText(Panel1_Wave, ID_STATICTEXT56, _("Thickness of Wave"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT56"));
    FlexGridSizer51->Add(StaticText52, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Thickness_Percentage = new wxSlider(Panel1_Wave, ID_SLIDER_Thickness_Percentage, 5, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Thickness_Percentage"));
    FlexGridSizer51->Add(Slider_Thickness_Percentage, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Wave_Thickness = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON6, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
    BitmapButton_Wave_Thickness->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_Wave_Thickness, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText55 = new wxStaticText(Panel1_Wave, ID_STATICTEXT58, _("Scale Height of Wave"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT58"));
    FlexGridSizer51->Add(StaticText55, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Slider_Wave_Height = new wxSlider(Panel1_Wave, ID_SLIDER_Wave_Height, 50, 0, 100, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_SLIDER_Wave_Height"));
    FlexGridSizer51->Add(Slider_Wave_Height, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Wave_Height = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON7, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
    BitmapButton_Wave_Height->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_Wave_Height, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    StaticText56 = new wxStaticText(Panel1_Wave, ID_STATICTEXT59, _("Wave Direction"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT59"));
    FlexGridSizer51->Add(StaticText56, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    Choice_Wave_Direction = new wxChoice(Panel1_Wave, ID_CHOICE_Wave_Direction, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE_Wave_Direction"));
    FlexGridSizer51->Add(Choice_Wave_Direction, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 2);
    BitmapButton_Wave_Direction = new wxBitmapButton(Panel1_Wave, ID_BITMAPBUTTON8, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
    BitmapButton_Wave_Direction->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_ACTIVECAPTION));
    FlexGridSizer51->Add(BitmapButton_Wave_Direction, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    Panel1_Wave->SetSizer(FlexGridSizer51);
    FlexGridSizer51->Fit(Panel1_Wave);
    FlexGridSizer51->SetSizeHints(Panel1_Wave);
    Choicebook1->AddPage(Panel1_Off, _("Off"), false);
    Choicebook1->AddPage(Panel1_On, _("On"), false);
    Choicebook1->AddPage(Panel1_Bars, _("Bars"), false);
    Choicebook1->AddPage(Panel1_Butterfly, _("Butterfly"), false);
    Choicebook1->AddPage(Panel1_Circles, _("Circles"), false);
    Choicebook1->AddPage(Panel1_ColorWash, _("Color Wash"), false);
    Choicebook1->AddPage(Panel1_CoroFaces, _("CoroFaces"), false);
    Choicebook1->AddPage(Panel1_Curtain, _("Curtain"), false);
    Choicebook1->AddPage(Panel1_Faces, _("Faces"), false);
    Choicebook1->AddPage(Panel1_Fan, _("Fan"), false);
    Choicebook1->AddPage(Panel1_Fire, _("Fire"), false);
    Choicebook1->AddPage(Panel1_Fireworks, _("Fireworks"), false);
    Choicebook1->AddPage(Panel1_Galaxy, _("Galaxy"), false);
    Choicebook1->AddPage(Panel1_Garlands, _("Garlands"), false);
    Choicebook1->AddPage(Panel1_Glediator, _("Glediator"), false);
    Choicebook1->AddPage(Panel1_Life, _("Life"), false);
    Choicebook1->AddPage(Panel1_Meteors, _("Meteors"), false);
    Choicebook1->AddPage(Panel1_Morph, _("Morph"), false);
    Choicebook1->AddPage(Panel1_Piano, _("Piano"), false);
    Choicebook1->AddPage(Panel1_Pictures, _("Pictures"), false);
    Choicebook1->AddPage(Panel1_Pinwheel, _("Pinwheel"), false);
    Choicebook1->AddPage(Panel1_Ripple, _("Ripple"), false);
    Choicebook1->AddPage(Panel1_Shimmer, _("Shimmer"), false);
    Choicebook1->AddPage(Panel1_Shockwave, _("Shockwave"), false);
    Choicebook1->AddPage(Panel1_SingleStrand, _("SingleStrand"), false);
    Choicebook1->AddPage(Panel1_Snowflakes, _("Snowflakes"), false);
    Choicebook1->AddPage(Panel1_Snowstorm, _("Snowstorm"), false);
    Choicebook1->AddPage(Panel1_Spirals, _("Spirals"), false);
    Choicebook1->AddPage(Panel1_Spirograph, _("Spirograph"), false);
    Choicebook1->AddPage(Panel1_Strobe, _("Strobe"), false);
    Choicebook1->AddPage(Panel1_Text, _("Text"), false);
    Choicebook1->AddPage(Panel1_Tree, _("Tree"), false);
    Choicebook1->AddPage(Panel1_Twinkle, _("Twinkle"), false);
    Choicebook1->AddPage(Panel1_Wave, _("Wave"), false);
    FlexGridSizer1->Add(Choicebook1, 1, wxRIGHT|wxEXPAND|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 2);
    FlexGridSizer8 = new wxFlexGridSizer(0, 1, 0, 0);
    FlexGridSizer6 = new wxFlexGridSizer(0, 2, 0, 0);
    BitmapButton_LayerEffect = new wxBitmapButton(this, ID_BITMAPBUTTON_CHOICEBOOK1, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON_CHOICEBOOK1"));
    BitmapButton_LayerEffect->SetDefault();
    FlexGridSizer6->Add(BitmapButton_LayerEffect, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_normal = new wxBitmapButton(this, ID_BITMAPBUTTON87, padlock16x16_green_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON87"));
    BitmapButton_normal->SetDefault();
    BitmapButton_normal->Hide();
    FlexGridSizer6->Add(BitmapButton_normal, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_locked = new wxBitmapButton(this, ID_BITMAPBUTTON1, padlock16x16_red_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
    BitmapButton_locked->SetDefault();
    BitmapButton_locked->Hide();
    FlexGridSizer6->Add(BitmapButton_locked, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    BitmapButton_random = new wxBitmapButton(this, ID_BITMAPBUTTON88, padlock16x16_blue_xpm, wxDefaultPosition, wxSize(13,13), wxBU_AUTODRAW|wxNO_BORDER, wxDefaultValidator, _T("ID_BITMAPBUTTON88"));
    BitmapButton_random->SetDefault();
    BitmapButton_random->Hide();
    FlexGridSizer6->Add(BitmapButton_random, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer8->Add(FlexGridSizer6, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 1);
    FlexGridSizer1->Add(FlexGridSizer8, 1, wxEXPAND|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 2);
    SetSizer(FlexGridSizer1);
    SetSizer(FlexGridSizer1);
    Layout();

    Connect(IDD_SLIDER_Eff_On_Start,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(ID_TEXTCTRL_Eff_On_Start,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(IDD_SLIDER_Eff_On_End,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(ID_TEXTCTRL_Eff_On_End,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Bars_BarCount,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Bars_Direction,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Bars_Highlight,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Bars_3D,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Butterfly_Color,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Butterfly_Style,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Butterfly_Chunks,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Butterfly_Skip,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Circles_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Circles_Size,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Bounce,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Radial,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Plasma,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Radial_3D,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CirclesBubbles,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Collide,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Random_m,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Circles_Linear_Fade,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_ColorWash_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_ColorWash_VFade,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_ColorWash_HFade,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Curtain_Edge,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Curtain_Effect,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Curtain_Swag,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Curtain_Repeat,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_CenterX,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_CenterX,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_CenterX,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_CenterY,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_CenterY,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_CenterY,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Start_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Start_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Start_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Start_Angle,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Start_Angle,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Start_Angle,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_End_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_End_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_End_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Revolutions,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl360);
    Connect(IDD_TEXTCTRL_Fan_Revolutions,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider360);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Revolutions,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Num_Blades,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Num_Blades,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Num_Blades,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Blade_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Blade_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Blade_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Blade_Angle,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Blade_Angle,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Blade_Angle,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Num_Elements,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Num_Elements,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Num_Elements,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Element_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Element_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Element_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Duration,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Duration,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Duration,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Fan_Accel,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Fan_Accel,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Fan_Accel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fire_Height,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fire_HueShift,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Fire_GrowFire,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fireworks_Number_Explosions,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fireworks_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fireworks_Velocity,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Fireworks_Fade,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_CenterX,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_CenterX,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_CenterX,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_CenterY,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_CenterY,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_CenterY,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Start_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_Start_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Start_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_Start_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Start_Angle,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_Start_Angle,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Start_Angle,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_End_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_End_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_End_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_End_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_End_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_End_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Revolutions,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl360);
    Connect(IDD_TEXTCTRL_Galaxy_Revolutions,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider360);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Revolutions,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Duration,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_Duration,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Duration,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Galaxy_Accel,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Galaxy_Accel,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Galaxy_Accel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Garlands_Type,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Garlands_Spacing,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BUTTON_GLED_FILE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnButton_Glediator_FilenameClick);
    Connect(ID_BITMAPBUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Life_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Life_Seed,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Meteors_Type,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Meteors_Effect,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Meteors_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Meteors_Length,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Meteors_Swirl_Intensity,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_Start_X1,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_Start_X1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_Start_X1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_Start_Y1,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_Start_Y1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::OnChoicePicturesDirectionSelect);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_Start_Y1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_Start_X2,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_Start_X2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_Start_X2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_Start_Y2,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_Start_Y2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_Start_Y2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_MorphStartLength,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_MorphStartLength,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_MorphStartLength,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_CHECKBOX_Morph_Start_Link,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnCheckBox_Morph_Start_LinkClick);
    Connect(ID_SLIDER_Morph_End_X1,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_End_X1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_End_X1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_End_Y1,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_End_Y1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_End_Y1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_End_X2,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_End_X2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_End_X2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Morph_End_Y2,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Morph_End_Y2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Morph_End_Y2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_MorphEndLength,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_MorphEndLength,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_MorphEndLength,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_CHECKBOX_Morph_End_Link,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnCheckBox_Morph_End_LinkClick);
    Connect(ID_SLIDER_MorphDuration,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_MorphDuration,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_MorphDuration,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_MorphAccel,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_MorphAccel,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_MorphAccel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_ShowHeadAtStart,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_MorphUseHeadStartColor,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_MorphUseHeadEndColor,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_CHOICE_Piano_Style,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&EffectsPanel::OnPiano_StyleSelect);
    Connect(ID_BITMAPBUTTON_SLIDER_Piano_Style,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Piano_NumKeys,wxEVT_SCROLL_TOP|wxEVT_SCROLL_BOTTOM|wxEVT_SCROLL_LINEUP|wxEVT_SCROLL_LINEDOWN|wxEVT_SCROLL_PAGEUP|wxEVT_SCROLL_PAGEDOWN|wxEVT_SCROLL_THUMBTRACK|wxEVT_SCROLL_THUMBRELEASE|wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&EffectsPanel::OnSlider_Piano_NumKeysCmdScroll);
    Connect(ID_BITMAPBUTTON_Piano_NumKeys,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Piano_KeyWidth,wxEVT_SCROLL_TOP|wxEVT_SCROLL_BOTTOM|wxEVT_SCROLL_LINEUP|wxEVT_SCROLL_LINEDOWN|wxEVT_SCROLL_PAGEUP|wxEVT_SCROLL_PAGEDOWN|wxEVT_SCROLL_THUMBTRACK|wxEVT_SCROLL_THUMBRELEASE|wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&EffectsPanel::OnSlider_Piano_NumRowsCmdScroll);
    Connect(ID_BITMAPBUTTON_Piano_NumRows,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Piano_KeyPlacement,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BUTTON_Piano_CueFilename,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnButton_Piano_CueFilenameClick);
    Connect(ID_BITMAPBUTTON_Piano_Filename,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnButton_Piano_MapFilenameClick);
    Connect(ID_BITMAPBUTTON_Piano_MapFilename,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnButton_Piano_ShapeFilenameClick);
    Connect(ID_BITMAPBUTTON_Piano_ShapeFilename,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Piano_Clipping,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_BUTTON_PICTURES_FILENAME,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_CHOICE_Pictures_Direction,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&EffectsPanel::OnChoicePicturesDirectionSelect);
    Connect(ID_BITMAPBUTTON_CHOICE_Pictures_Direction,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Pictures_GifSpeed,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Pictures_GifSpeed,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Pictures_GifSpeed,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_MovieIs20FPS,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_PicturesXC,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_PicturesXC,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(IDD_TEXTCTRL_PicturesYC,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_SLIDER_PicturesYC,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(ID_SLIDER_PicturesEndXC,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_PicturesEndXC,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(IDD_TEXTCTRL_PicturesEndYC,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_SLIDER_PicturesEndYC,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(ID_BITMAPBUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Pinwheel3D,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_DutyFactor,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_ShimmerUseAllColors,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Shimmer_Blink_Timing,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_BlinksPerRow,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_CenterX,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_CenterX,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_CenterX,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_CenterY,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_CenterY,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_CenterY,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_Start_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_Start_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_End_Radius,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_End_Radius,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_End_Radius,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_Start_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_Start_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_Start_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_End_Width,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_End_Width,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_End_Width,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Shockwave_Accel,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Shockwave_Accel,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON_SLIDER_Shockwave_Accel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SingleStrand_Colors,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Number_Chases,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Color_Mix1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Chase_Spacing1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Chase_Type1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Chase_3dFade1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Chase_Group_All,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Skips_BandSize,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Skips_BandSize,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON44,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Skips_SkipSize,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Skips_SkipSize,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON46,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_SLIDER_Skips_StartPos,wxEVT_COMMAND_SLIDER_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedTextCtrl);
    Connect(IDD_TEXTCTRL_Skips_StartPos,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&EffectsPanel::UpdateLinkedSlider);
    Connect(ID_BITMAPBUTTON47,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON48,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Snowflakes_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Snowflakes_Type,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Snowstorm_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Snowstorm_Length,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirals_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirals_Rotation,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirals_Thickness,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirals_Direction,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Spirals_Blend,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Spirals_3D,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Spirals_Grow,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Spirals_Shrink,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_R,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_r,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Spirograph_d,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Spirograph_Animate,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON49,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON51,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON50,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_FONTPICKER_Text_Font1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Dir1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_TextToCenter1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Effect1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Count1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Text_Position1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_FONTPICKER_Text_Font2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Dir2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_Text2Center2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Effect2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Count2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Text_Position2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_FONTPICKER_Text_Font3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Dir3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_TextToCenter3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Effect3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Count3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Text_Position3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_FONTPICKER_Text_Font4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Dir4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_TextToCenter4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Effect4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHOICE_Text_Count4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Text_Position4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Tree_Branches,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Twinkle_Count,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_SLIDER_Twinkle_Steps,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON_CHECKBOX_Twinkle_Strobe,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_BITMAPBUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(ID_CHOICEBOOK1,wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED,(wxObjectEventFunction)&EffectsPanel::OnChoicebook1PageChanged);
    Connect(ID_BITMAPBUTTON_CHOICEBOOK1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&EffectsPanel::OnLockButtonClick);
    Connect(wxEVT_PAINT,(wxObjectEventFunction)&EffectsPanel::OnPaint1);
    Connect(wxEVT_SIZE,(wxObjectEventFunction)&EffectsPanel::OnResize);
    //*)

    this->SetName(name);
}

EffectsPanel::~EffectsPanel()
{
    //(*Destroy(EffectsPanel)
    //*)
}


// returns ",E1_" or ",E2_"
wxString EffectsPanel::GetAttrPrefix()
{
    wxString WinName=this->GetName();
    return ",E" + WinName.Right(1) + "_";
}

//#define WANT_DEBUG_IMPL
//#define WANT_DEBUG  -99 //unbuffered in case app crashes
//#include "djdebug.cpp"
#ifndef debug_function //dummy defs if debug cpp not included above
#define debug(level, ...)
#define debug_more(level, ...)
#define debug_function(level)
#endif

// this is recursive
wxString EffectsPanel::GetEffectStringFromWindow(wxWindow *ParentWin)
{
    wxString s,ChildName,AttrName;
    int i;
    wxWindowList &ChildList = ParentWin->GetChildren();
    for ( wxWindowList::Node *node = ChildList.GetFirst(); node; node = node->GetNext() )
    {
        wxWindow *ChildWin = (wxWindow *)node->GetData();
        if (!ChildWin->IsEnabled()) {
            continue;
        }
        ChildName=ChildWin->GetName();
        AttrName = "E_" + ChildName.Mid(3);
        if (ChildName.StartsWith("ID_SLIDER"))
        {
            wxSlider* ctrl=(wxSlider*)ChildWin;
            s+=AttrName+ "=" + wxString::Format("%d",ctrl->GetValue()) + ",";
        }
        else if (ChildName.StartsWith("ID_TEXTCTRL"))
        {
            wxTextCtrl* ctrl=(wxTextCtrl*)ChildWin;
            wxString v = ctrl->GetValue();
            v.Replace("&", "&amp;", true);
            v.Replace(",", "&comma;", true);
            s+=AttrName + "=" + v + ",";
        }
        else if (ChildName.StartsWith("ID_CHOICE"))
        {
            wxChoice* ctrl=(wxChoice*)ChildWin;
            s+=AttrName + "=" + ctrl->GetStringSelection() + ",";
        }
        else if (ChildName.StartsWith("ID_CHECKBOX"))
        {
            wxCheckBox* ctrl=(wxCheckBox*)ChildWin;
            wxString checkedVal =(ctrl->IsChecked()) ? "1" : "0";
            s+=AttrName + "=" + checkedVal + ",";
        }
        else if (ChildName.StartsWith("ID_FILEPICKER"))
        {
            wxFilePickerCtrl* ctrl=(wxFilePickerCtrl*)ChildWin;
            s+=AttrName + "=" + ctrl->GetFileName().GetFullPath() + ",";
        }
        else if (ChildName.StartsWith("ID_FONTPICKER"))
        {
            wxFontPickerCtrl* ctrl=(wxFontPickerCtrl*)ChildWin;
            wxFont f = ctrl->GetSelectedFont();
            if (f.IsOk()) {
                wxString FontDesc=f.GetNativeFontInfoUserDesc();
                FontDesc.Replace(" unknown-90","");
                s+=AttrName + "=" + FontDesc + ",";
            } else {
                s+=AttrName + "=,";
            }
        }
        else if (ChildName.StartsWith("ID_NOTEBOOK") || ChildName.StartsWith("IDD_NOTEBOOK"))
        {
            wxNotebook* ctrl=(wxNotebook*)ChildWin;
            //for IDD_ stuff, don't record the value of the actual page selected
            if (ChildName.StartsWith("ID_NOTEBOOK")) {
                s+= AttrName + "=" ;
                s+=ctrl->GetPageText(ctrl->GetSelection());
                s+=",";
            }
            for(i=0; i<ctrl->GetPageCount(); i++)
            {
                wxString pageString = GetEffectStringFromWindow(ctrl->GetPage(i));
                if (pageString.size() > 0) {
                    s += pageString;
                    if (!s.EndsWith(",")) {
                        s += ",";
                    }
                }
            }
        }
    }
    s = s.Mid(0,s.size()-1);
    return s;
}

int EffectsPanel::GetRandomSliderValue(wxSlider* slider)
{
    return isRandom(slider)? rand() % (slider->GetMax()-slider->GetMin()) + slider->GetMin(): slider->GetValue(); //want random? -DJ
}

wxString EffectsPanel::GetRandomEffectStringFromWindow(wxWindow *w, const wxString &prefix) {
    wxWindowList &ChildList = w->GetChildren();
    wxString s;
    for ( wxWindowList::Node *node = ChildList.GetFirst(); node; node = node->GetNext() )
    {
        wxWindow *ChildWin = (wxWindow *)node->GetData();
        wxString ChildName = ChildWin->GetName();
        wxString AttrName = prefix + ChildName.Mid(3) + "=";

        if (ChildName.StartsWith("ID_SLIDER")) {
            wxSlider* ctrl=(wxSlider*)ChildWin;
            if (ChildName.Contains("Spirograph_r"))
            {
                // always set little radius, r, to its minimum value
                s += AttrName + wxString::Format("%d", 0);
            }
            else
            {
                s += AttrName + wxString::Format("%d", GetRandomSliderValue(ctrl));
            }
        } else if (ChildName.StartsWith("ID_TEXTCTRL")) {
            wxTextCtrl* ctrl=(wxTextCtrl*)ChildWin;
            wxString v = ctrl->GetValue();
            v.Replace("&", "&amp;", true);
            v.Replace(",", "&comma;", true);
            s += AttrName + v;
        } else if (ChildName.StartsWith("ID_CHOICE")) {
            wxChoice* ctrl=(wxChoice*)ChildWin;
            s += AttrName + ctrl->GetString(isRandom(ctrl)? rand()%ctrl->GetCount(): ctrl->GetSelection()); //-DJ
        } else if (ChildName.StartsWith("ID_CHECKBOX")) {
            if(ChildName.Contains("Spirograph_Animate")) {
                // always animate spirograph
                s+=AttrName+wxString::Format("%d", 1 );
            } else {
                wxCheckBox* ctrl = (wxCheckBox*)ChildWin;
                wxString v = (isRandom(ctrl)? (rand()%2): ctrl->GetValue())? "1" : "0"; //want random? -DJ
                s += AttrName + v;
            }
        } else if (ChildName.StartsWith("ID_NOTEBOOK")) {
            wxNotebook *notebook = (wxNotebook*)ChildWin;
            int i = rand() % notebook->GetPageCount();
            s += AttrName+notebook->GetPageText(i);
            s += GetRandomEffectStringFromWindow(notebook->GetPage(i), prefix);
        }
    }
    return s;
}

// assumes effidx does not refer to Text effect
//modifed for partially random, allow random colors also -DJ
//void djdebug(const char* fmt, ...); //_DJ
wxString EffectsPanel::GetRandomEffectString(int effidx)
{
    wxString s,ChildName,AttrName;
    wxString prefix=GetAttrPrefix();

//    djdebug("GetRandomEffectString: %s rnd? %d", (const char*)Slider_Speed->GetName().c_str(), isRandom(Slider_Speed));

    // get speed
   //~ s = prefix + wxString::Format("SLIDER_Speed=%d", GetRandomSliderValue(Slider_Speed));

    // get effect controls
    wxWindow *window = Choicebook1->GetPage(effidx);
    s += GetRandomEffectStringFromWindow(window, prefix);

    return s;
}


wxString EffectsPanel::GetEffectString()
{
    wxString s,ChildName,AttrName;
    wxString prefix=GetAttrPrefix();
    //~s=prefix+wxString::Format("SLIDER_Speed=%d",Slider_Speed->GetValue());
    //~s+=prefix+"TEXTCTRL_Fadein="+TextCtrl_Fadein->GetValue();
    //~s+=prefix+"TEXTCTRL_Fadeout="+TextCtrl_Fadeout->GetValue();
    //~s+=prefix+wxString::Format("CHECKBOX_FitToTime=%d",CheckBox_FitToTime->GetValue()?1:0);
    //~s+=prefix+wxString::Format("CHECKBOX_OverlayBkg=%d",CheckBox_OverlayBkg->GetValue()?1:0);

    // get effect controls
    s+=GetEffectStringFromWindow(Choicebook1->GetCurrentPage());

    // get palette
    wxColour color;
    for (int i=1; i<=PALETTE_SIZE; i++)
    {
//~        color=GetPaletteColor(i);
        AttrName.Printf("BUTTON_Palette%d=",i);
        s+=prefix+AttrName+color.GetAsString(wxC2S_HTML_SYNTAX);
        AttrName.Printf("CHECKBOX_Palette%d",i);
        wxCheckBox* ctrl=(wxCheckBox*)wxWindow::FindWindowByName("ID_"+AttrName,this);
        wxString v=(ctrl->IsChecked()) ? "1" : "0";
        s+=prefix+AttrName+"="+v;
    }
    return s;
}

//selectable clear canvas before render: -DJ
//this allows multiple effects to be overlayed for composite models
//also provides useful "bread crumbs" for some effects such as Spirograph
bool EffectsPanel::WantOverlayBkg(void)
{
    //~return CheckBox_OverlayBkg->GetValue();
    return false;
}

void EffectsPanel::OnButton_Glediator_FilenameClick(wxCommandEvent& event)
{
    wxString filename = wxFileSelector( "Choose Glediator *.gled", *CurrentDir, "", "",
                                       "Glediator files (*.gled)|*.gled", wxFD_OPEN );
    if (!filename.IsEmpty()) TextCtrl_Glediator_Filename->SetValue(filename);
}

#if defined(__WXMAC__)
//OSX doesn't allow wildcards in the "name" part
static const wxString NOTES_WILDCARD("Notes cue files (*notes.txt;*.not)|*.txt;*.not");
static const wxString CUEMAP_WILDCARD("Cue map files (*map.txt;*.map)|*.txt;*.map");
#else
static const wxString NOTES_WILDCARD("Notes cue files (*notes.txt;*.not)|*notes.txt;*.not");
static const wxString CUEMAP_WILDCARD("Cue map files (*map.txt;*.map)|*map.txt;*.map");
#endif

void EffectsPanel::OnButton_Piano_CueFilenameClick(wxCommandEvent& event)
{
    wxString filename = wxFileSelector( "Choose Notes Cue File", *CurrentDir, "", "",
                                       NOTES_WILDCARD, wxFD_OPEN );
    if (!filename.IsEmpty()) TextCtrl_Piano_CueFilename->SetValue(filename);
}

void EffectsPanel::OnButton_Piano_MapFilenameClick(wxCommandEvent& event)
{
    wxString filename = wxFileSelector( "Choose Cue Map File", *CurrentDir, "", "",
                                        CUEMAP_WILDCARD, wxFD_OPEN );
    if (!filename.IsEmpty()) TextCtrl_Piano_MapFilename->SetValue(filename);
}

void EffectsPanel::OnButton_Piano_ShapeFilenameClick(wxCommandEvent& event)
{
    wxString filename = wxFileSelector( "Choose Shapes File", *CurrentDir, "", "",
                                       "Key shapes files " + wxImage::GetImageExtWildcard(), wxFD_OPEN );
    if (!filename.IsEmpty()) TextCtrl_Piano_ShapeFilename->SetValue(filename);
}

void EffectsPanel::OnChoicebook1PageChanged(wxChoicebookEvent& event)
{
    EffectChanged=true;
    wxScrolledWindow* w = (wxScrolledWindow*)Choicebook1->GetPage(Choicebook1->GetSelection());

    wxCommandEvent eventEffectChanged(EVT_SELECTED_EFFECT_CHANGED);
    // We do not have an actual effect in grid to send
    // Set Index of page.
    eventEffectChanged.SetInt(Choicebook1->GetSelection());
    eventEffectChanged.SetClientData(nullptr);
    wxPostEvent(GetParent(), eventEffectChanged);

    w->FitInside();
    w->SetScrollRate(5, 5);
    w->Refresh();
    GetEffectStringFromWindow(Choicebook1->GetPage(Choicebook1->GetSelection()));
}

//  Pinwheel
/*
void EffectsPanel::Update_TextCtrl_Pinwheel_Arms()
{
    TextCtrl_Pinwheel_Arms->SetValue(wxString::Format("%d",Slider_Pinwheel_Arms->GetValue()));
}

void EffectsPanel::OnSlider_Pinwheel_ArmsCmdScroll(wxScrollEvent& event)
{
    Update_TextCtrl_Pinwheel_Arms();
}
*/


//new Piano effect UI handlers: -DJ
void EffectsPanel::OnPiano_StyleSelect(wxCommandEvent& event)
{
//TODO?
}

//#define WANT_DEBUG 99
//#include "djdebug.cpp"
void EffectsPanel::OnSlider_Piano_NumKeysCmdScroll(wxScrollEvent& event)
{
//    debug(1, "#keys %d", Slider_Piano_NumKeys->GetValue());
//    TextCtrl_Speed->SetValue(wxString::Format("%d",Slider_Speed->GetValue()));
//    txtCtrlSparkleFreq->SetValue(wxString::Format("%d",Slider_SparkleFrequency->GetValue()));
//wxMessageBox(wxString::Format("# Keys (%d):", Slider_Piano_NumKeys->GetValue()));
//broken, use wxsl_lables instead for now:
    StaticText_Piano_NumKeys->SetLabel(wxString::Format("# Keys (%d):", Slider_Piano_NumKeys->GetValue())); //show slider value for user friendliness
//    Layout();
}

void EffectsPanel::OnSlider_Piano_NumRowsCmdScroll(wxScrollEvent& event)
{
//    debug(1, "#rows %d", Slider_Piano_NumRows->GetValue());
//broken, use wxsl_lables instead for now:
    StaticText_Piano_NumRows->SetLabel(wxString::Format("# Rows (%d):", Slider_Piano_NumRows->GetValue())); //show slider value for user friendliness
//    Layout();
//wxMessageBox(wxString::Format("# Rows (%d):", Slider_Piano_NumRows->GetValue()));
}


//add lock/unlock/random state flags -DJ
//these could be used to make fields read-only, but initially they are just used for partially random effects
//void djdebug(const char* fmt, ...); //_DJ
//typedef enum { Normal, Locked, Random } EditState;
void EffectsPanel::setlock(wxButton* button) //, EditState& islocked)
{
    wxString parent = button->GetName();
    if (parent.StartsWith("ID_BITMAPBUTTON_")) parent = "ID_" + parent.substr(16); //map to associated control
    EditState& islocked = buttonState[std::string(parent)]; //creates entry if not there
//    djdebug("ctl %s was %d", (const char*)parent.c_str(), islocked);
    switch (islocked) //cycle thru states
    {
    case Locked:
        islocked = Random;
        button->SetBitmapLabel(BitmapButton_random->GetBitmapLabel());
        break;
//        case Random:
//            islocked = Normal;
//            button->SetBitmapLabel(BitmapButton_normal->GetBitmapLabel());
//            break;
    default:
        islocked = Locked;
        button->SetBitmapLabel(BitmapButton_locked->GetBitmapLabel());
        break;
    }
}
//#define isRandom(ctl)  (buttonState[std::string(ctl->GetName())] == Random)
bool EffectsPanel::isRandom_(wxControl* ctl, const char*debug)
{
//    if (!ctl->GetName().length()) djdebug("NO NAME FOR %s", debug);
    bool retval = (buttonState[std::string(ctl->GetName())] != Locked); //== Random);
//    djdebug("isRandom(%s) = %d", (const char*)ctl->GetName().c_str(), retval);
    return retval;
}
bool EffectsPanel::isRandom_(void)
{
    return isRandom(Choicebook1);
}

void EffectsPanel::OnLockButtonClick(wxCommandEvent& event) {
    wxButton * button = (wxButton*)event.GetEventObject();
    setlock(button);
}


void EffectsPanel::OnCheckBox_Morph_Start_LinkClick(wxCommandEvent& event)
{
    wxCheckBox* control=(wxCheckBox*)event.GetEventObject();
    enableControlsByName("ID_SLIDER_Morph_Start_X2", !control->IsChecked());
    enableControlsByName("ID_SLIDER_Morph_Start_Y2", !control->IsChecked());
}

void EffectsPanel::OnCheckBox_Morph_End_LinkClick(wxCommandEvent& event)
{
    wxCheckBox* control=(wxCheckBox*)event.GetEventObject();
    enableControlsByName("ID_SLIDER_Morph_End_X2", !control->IsChecked());
    enableControlsByName("ID_SLIDER_Morph_End_Y2", !control->IsChecked());
}

void EffectsPanel::OnResize(wxSizeEvent& event)
{

}

void EffectsPanel::OnPaint1(wxPaintEvent& event)
{

}


//generic routines that can replace the above and be completely implemented in the codeblocks
//gui based on the ID names of the two controls.  No need for "member" variables
void EffectsPanel::UpdateLinkedSlider(wxCommandEvent& event)
{
    wxTextCtrl * txt = (wxTextCtrl*)event.GetEventObject();
    wxString name = txt->GetName();
    if (name.Contains("IDD_")) {
        name.Replace("IDD_TEXTCTRL_", "ID_SLIDER_");
    } else {
        name.Replace("ID_TEXTCTRL_", "IDD_SLIDER_");
    }
    wxSlider *slider = (wxSlider*)txt->GetParent()->FindWindowByName(name);
    if (slider == nullptr) {
        return;
    }
    int value = wxAtoi(txt->GetValue());

    if (value < slider->GetMin()) {
        value = slider->GetMin();
        wxString val_str;
        val_str << value;
        txt->ChangeValue(val_str);
    }
    else if (value > slider->GetMax()) {
        value = slider->GetMax();
        wxString val_str;
        val_str << value;
        txt->ChangeValue(val_str);
    }
    slider->SetValue(value);
}

void EffectsPanel::UpdateLinkedTextCtrl(wxScrollEvent& event)
{
    wxSlider * slider = (wxSlider*)event.GetEventObject();
    wxString name = slider->GetName();
    if (name.Contains("ID_")) {
        name.Replace("ID_SLIDER_", "IDD_TEXTCTRL_");
    } else {
        name.Replace("IDD_SLIDER_", "ID_TEXTCTRL_");
    }
    wxTextCtrl *txt = (wxTextCtrl*)slider->GetParent()->FindWindowByName(name);
    txt->ChangeValue(wxString::Format("%d",slider->GetValue()));
}


void EffectsPanel::UpdateLinkedSlider360(wxCommandEvent& event)
{
    wxTextCtrl * txt = (wxTextCtrl*)event.GetEventObject();
    wxString name = txt->GetName();
    if (name.Contains("IDD_")) {
        name.Replace("IDD_TEXTCTRL_", "ID_SLIDER_");
    } else {
        name.Replace("ID_TEXTCTRL_", "IDD_SLIDER_");
    }
    wxSlider *slider = (wxSlider*)txt->GetParent()->FindWindowByName(name);
    if (slider == nullptr) {
        return;
    }
    double val;
    txt->GetValue().ToDouble(&val);
    int value = (int)(val * 360.0);

    if (value < slider->GetMin()) {
        value = slider->GetMin();
        txt->ChangeValue(wxString::Format("%0.2f",(double)value/360.0));
    } else if (value > slider->GetMax()) {
        value = slider->GetMax();
        wxString val_str;
        val_str << value;
        txt->ChangeValue(wxString::Format("%0.2f",(double)value/360.0));
    }
    slider->SetValue(value);
}
void EffectsPanel::UpdateLinkedTextCtrl360(wxScrollEvent& event)
{
    wxSlider * slider = (wxSlider*)event.GetEventObject();
    wxString name = slider->GetName();
    if (name.Contains("ID_")) {
        name.Replace("ID_SLIDER_", "IDD_TEXTCTRL_");
    } else {
        name.Replace("IDD_SLIDER_", "ID_TEXTCTRL_");
    }
    wxTextCtrl *txt = (wxTextCtrl*)slider->GetParent()->FindWindowByName(name);
    txt->ChangeValue(wxString::Format("%0.2f",slider->GetValue()/360.0));
}


void EnableControl(wxWindow *w, int id, bool e) {
    wxWindow *c = w->FindWindowById(id);
    if (c) c->Enable(e);
}
void EffectsPanel::OnChoicePicturesDirectionSelect(wxCommandEvent& event)
{
    bool enable = "vector" == Choice_Pictures_Direction->GetStringSelection();
    EnableControl(Choice_Pictures_Direction->GetParent(), IDD_TEXTCTRL_PicturesEndXC, enable);
    EnableControl(Choice_Pictures_Direction->GetParent(), IDD_TEXTCTRL_PicturesEndYC, enable);
    EnableControl(Choice_Pictures_Direction->GetParent(), ID_SLIDER_PicturesEndXC, enable);
    EnableControl(Choice_Pictures_Direction->GetParent(), ID_SLIDER_PicturesEndYC, enable);
    PictureEndPositionPanel->Enable(enable);
}

void EffectsPanel::enableControlsByName(const wxString &name, bool enable) {
    wxWindow *w = FindWindowByName(name);
    if (w != nullptr) {
        w->Enable(enable);
    }
    wxString n2 = "IDD_" + name.SubString(3, name.size());
    w = FindWindowByName(name);
    if (w != nullptr) {
        w->Enable(enable);
    }
}
