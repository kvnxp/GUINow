/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/tools/Rectangle.h"
#include "GUINow/draw/Draw.h"

namespace GP {
    
    Rectangle::Rectangle() {
        this->dimensions.set(0, 0, 0, 0);
        this->backgroundColor = Color(0xFF, 0xFF, 0xFF);
    }
    
    int Rectangle::draw(u8* screen) {
        
        Draw::rectangle(screen, this->dimensions, this->backgroundColor);
        
        return 1;
    }
    
    void Rectangle::setBackgroundColor(Color color) {
        this->backgroundColor = color;
    }
}