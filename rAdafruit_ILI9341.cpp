#include "B4RDefines.h"

namespace B4R {
	void B4RAdafruitILI9341::Initialize(Byte CS, Byte DC) {
		ili = new (be) Adafruit_ILI9341(CS, DC);
		ili->begin();
		init();
	}
	void B4RAdafruitILI9341::init() {
		gfx.gfx = ili;
		GFX = &gfx;
	}
	void B4RAdafruitILI9341::FillScreen (UInt Color) {
		ili->fillScreen(Color);
	}
	UInt B4RAdafruitILI9341::Color (Byte R, Byte G, Byte B) {
		return ili->color565(R, G, B);
	}
	void B4RAdafruitILI9341::SetRotation(Byte b) {
		ili->setRotation(b);
	}
}