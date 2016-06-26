/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/tools/Label.h"
#include "GUINow/util/Font.h"
#include <cstring>
#include <stdio.h>

namespace GP {
    
    Label::Label() : Drawable() {
        this->textColor = Color(0xFF, 0x5D, 0x0D);
    }
    
    Label::Label(char* text) : Drawable() {
        this->textColor = Color(0xFF, 0x5D, 0x0D);
        std::strcpy(this->text, text);
    }
    
    void Label::setText(char* text) {
        std::strcpy(this->text, text);
    }
    
    int Label::draw(u8* screen) {
        Font::drawString(screen, this->dimensions, this->text, this->textColor);
        
        return 1;
    }

    void Label::setColor(Color color) {
        this->textColor = color;
    }

    void Label::setBackgroundColor(Color color) {
        this->backgroundColor = color;
    }
}