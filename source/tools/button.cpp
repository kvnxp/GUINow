/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Button.h"
#include "../screen/screen.h"
#include <cstring>
#include <stdio.h>
#include "../util/Color.h"
#include "../draw/Draw.h"

namespace GP {
    
    Button::Button() : Drawable() {
        
    }
    
    Button::Button(char* text) : Drawable() {
        std::strcpy(this->text, text);
    }
    
    void Button::draw(u8* screen) {
        //printf("fghjk%s\n", this->text);
        Draw::rectangle(screen, this->dimensions, Color(0xBB, 0xFF, 0xBB));
    }
}