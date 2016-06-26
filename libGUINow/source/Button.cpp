/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/tools/Button.h"
#include "GUINow/screen/Screen.h"
#include <cstring>
#include <stdio.h>
#include "GUINow/util/Color.h"
#include "GUINow/draw/Draw.h"
#include "GUINow/util/Font.h"

namespace GP {
    
    Button::Button() : Drawable() {
        Button::setDefault();
    }
    
    Button::Button(char* text) : Drawable() {
        std::strcpy(this->text, text);
        Button::setDefault();
    }

    void Button::setDefault() {
        this->textColor = Color::RED;
        this->backgroundColor = Color::GREEN;

        this->textHoldColor = Color::GREEN;
        this->backgroundHoldColor = Color::RED;

        this->addEvent(&this->hover);
        this->addEvent(&this->touch);
    }   

    void Button::setText(char* text) {
        std::strcpy(this->text, text);
    }
    
    int Button::draw(u8* screen) {
        bool holding = this->hover.getState();
        //printf("fghjk%s\n", this->text);
        Draw::emptyRectangle(screen, this->dimensions, Color(0x88, 0x88, 0x88));
        Draw::rectangle(screen, Rectangle2D(this->dimensions.x + 1, this->dimensions.y + 1, this->dimensions.width - 2, this->dimensions.height - 2), holding ? this->backgroundHoldColor : this->backgroundColor);
        Font::drawString(screen, this->dimensions, this->text, holding ? this->textHoldColor : this->textColor);
        
        return 1;
    }

    void Button::setColor(Color color) {
        this->textColor = color;
    }

    void Button::setHoldColor(Color color) {
        this->textHoldColor = color;
    }

    void Button::setBackgroundColor(Color color) {
        this->backgroundColor = color;
    }

    void Button::setBackgroundHoldColor(Color color) {
        this->backgroundHoldColor = color;
    }

}