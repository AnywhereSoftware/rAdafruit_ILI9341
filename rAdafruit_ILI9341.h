#pragma once
#include "B4RDefines.h"
#include "Adafruit_ILI9341.h"
#include "rAdafruitGFX.h"
//~version: 1.00
namespace B4R {
	//~shortname: AdafruitILI93411
	class B4RAdafruitILI9341 {
		private:
			uint8_t be[sizeof(Adafruit_ILI9341)];
			Adafruit_ILI9341* ili;
			B4RAdafruitGFX gfx;
			void init();
		public:
			//Gets the graphics object. Make sure to call Display to apply the changes.
			B4RAdafruitGFX* GFX;
			void Initialize(Byte CS, Byte DC);
			void FillScreen (UInt Color);
			//Rotation should be between 0 to 3.
			void SetRotation(Byte Rotation);
			UInt Color (Byte R, Byte G, Byte B);
			#define /*UInt COLOR_BLACK;*/ B4RAdafruitILI9341_COLOR_BLACK ILI9341_BLACK 
			#define /*UInt COLOR_NAVY;*/ B4RAdafruitILI9341_COLOR_NAVY ILI9341_NAVY 
			#define /*UInt COLOR_DARKGREEN;*/ B4RAdafruitILI9341_COLOR_DARKGREEN ILI9341_DARKGREEN 
			#define /*UInt COLOR_DARKCYAN;*/ B4RAdafruitILI9341_COLOR_DARKCYAN ILI9341_DARKCYAN 
			#define /*UInt COLOR_MAROON;*/ B4RAdafruitILI9341_COLOR_MAROON ILI9341_MAROON 
			#define /*UInt COLOR_PURPLE;*/ B4RAdafruitILI9341_COLOR_PURPLE ILI9341_PURPLE 
			#define /*UInt COLOR_OLIVE;*/ B4RAdafruitILI9341_COLOR_OLIVE ILI9341_OLIVE 
			#define /*UInt COLOR_LIGHTGREY;*/ B4RAdafruitILI9341_COLOR_LIGHTGREY ILI9341_LIGHTGREY 
			#define /*UInt COLOR_BLACK;*/ B4RAdafruitILI9341_COLOR_BLACK ILI9341_BLACK 
			#define /*UInt COLOR_DARKGREY;*/ B4RAdafruitILI9341_COLOR_DARKGREY ILI9341_DARKGREY 
			#define /*UInt COLOR_BLUE;*/ B4RAdafruitILI9341_COLOR_BLUE ILI9341_BLUE 
			#define /*UInt COLOR_GREEN ;*/ B4RAdafruitILI9341_COLOR_GREEN  ILI9341_GREEN  
			#define /*UInt COLOR_CYAN;*/ B4RAdafruitILI9341_COLOR_CYAN ILI9341_CYAN 
			#define /*UInt COLOR_RED;*/ B4RAdafruitILI9341_COLOR_RED ILI9341_RED 
			#define /*UInt COLOR_MAGENTA;*/ B4RAdafruitILI9341_COLOR_MAGENTA ILI9341_MAGENTA 
			#define /*UInt COLOR_YELLOW;*/ B4RAdafruitILI9341_COLOR_YELLOW ILI9341_YELLOW 
			#define /*UInt COLOR_WHITE ;*/ B4RAdafruitILI9341_COLOR_WHITE  ILI9341_WHITE  
			#define /*UInt COLOR_ORANGE ;*/ B4RAdafruitILI9341_COLOR_ORANGE  ILI9341_ORANGE  
			#define /*UInt COLOR_GREENYELLOW;*/ B4RAdafruitILI9341_COLOR_GREENYELLOW ILI9341_GREENYELLOW 
			#define /*UInt COLOR_PINK;*/ B4RAdafruitILI9341_COLOR_PINK ILI9341_PINK    
	};
}