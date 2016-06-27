#include "GUINow/tools/Slider.h"

namespace GP {

	Slider::Slider() {
		this->dimensions.width = 100;
		this->value = 0;

		this->dimensions.height = 10;

		this->addEvent(&this->drag);
	}

	int Slider::getWidth() {
		return this->dimensions.width;
	}

	void Slider::setWidth(int width) {
		this->dimensions.width = width;
	}

    int Slider::getValue() {
    	return this->value;
    }

    void Slider::setValue(int value) {
    	if(value > this->dimensions.width) {
    		this->value = this->dimensions.width;
    	}
    	else {
    		if(value < 0) {
    			this->value = 0;
    		}
    		else {
    			this->value = value;
    		}
    	}
    }

    int Slider::draw(u8* screen) {

    	this->setValue(this->value + this->drag.offset.x);
        Draw::emptyRectangle(screen, this->dimensions, Color(0x88, 0x88, 0x88));
        //Font::drawString(screen, this->dimensions, this->text, holding ? this->textHoldColor : this->textColor);
        Draw::rectangle(screen, Rectangle2D(this->dimensions.x + this->value - 4, this->dimensions.y - 3, 8, this->dimensions.height + 6), Color(0x88, 0x88, 0x88));
        return 1;
    }

    void Slider::checkEvents() {
        for(int i = 0; i < this->eventCount; i++) {
        	//check events on our slider drag thingy
            this->events[i]->check(Rectangle2D(this->dimensions.x + this->value - 4, this->dimensions.y - 3, 8, this->dimensions.height + 6));
        }
    }
}