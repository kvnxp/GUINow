/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/tools/Text.h"
#include "3DSGUI/util/Font.h"
#include <cstring>
#include <stdio.h>

namespace GP {
    
    Text::Text() : Drawable() {
        this->textColor = Color(0xAA, 0xAA, 0xAA);
    }
    
    Text::Text(char* text) : Drawable() {
        this->textColor = Color(0xAA, 0xAA, 0xAA);
        std::strcpy(this->text, text);
    }
    
    void Text::setText(char* text) {
        std::strcpy(this->text, text);
    }
    
    int Text::draw(u8* screen) {
        Font::drawString(screen, this->position, this->text, this->textColor);
        
        return 1;
    }

    void Text::setPosition(int x, int y) {
        this->position = Vector2(x, y);
    }

    void Text::setColor(Color color) {
        this->textColor = color;
    }

    void Text::setBackgroundColor(Color color) {
        this->backgroundColor = color;
    }
}