/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/tools/Button.h"
#include "3DSGUI/screen/Screen.h"
#include <cstring>
#include <stdio.h>
#include "3DSGUI/util/Color.h"
#include "3DSGUI/draw/Draw.h"
#include "3DSGUI/util/Font.h"

namespace GP {
    
    Button::Button() : Drawable() {
        
    }
    
    Button::Button(char* text) : Drawable() {
        std::strcpy(this->text, text);
    }
    
    void Button::setText(char* text) {
        std::strcpy(this->text, text);
    }
    
    int Button::draw(u8* screen) {
        //printf("fghjk%s\n", this->text);
        Draw::rectangle(screen, this->dimensions, Color(0xFF, 0x00, 0x00));
        Font::drawString(screen, this->dimensions, this->text, this->textColor);
        
        return 1;
    }

    void Button::setColor(Color color) {
        this->textColor = color;
    }
}