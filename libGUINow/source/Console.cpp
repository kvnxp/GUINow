#include "GUINow/util/Console.h"
#include <string.h>

namespace GP {

	Console Console::console = Console();

	Console::Console() : Drawable() {
		this->textCounter = 0;
		this->text = new Text[30];
	}

	void Console::addText(char* text) {
		this->text[this->textCounter++] = Text(text);
	}

	int Console::draw(u8* screen) {
		//todo check if the text fits on the screen
		int i;
		for(i = 0; i < this->textCounter; i++) {
			this->text[i].setPosition(5, 12 * i + 8); // + 8 for our fontheight
			this->text[i].draw(screen);
		}

		return i;
	}
}