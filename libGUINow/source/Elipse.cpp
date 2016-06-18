/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/tools/Elipse.h"
#include "GUINow/draw/Draw.h"

namespace GP {
    
    Elipse::Elipse() {
        this->dimensions.set(0, 0, 0, 0);
        this->backgroundColor = Color(0xFF, 0xFF, 0xFF);
    }
    
    Elipse::Elipse(int radius) {
        this->dimensions.height = radius;
        this->dimensions.width = radius;
        this->backgroundColor = Color(0xFF, 0xFF, 0xFF);
    }
    
    int Elipse::draw(u8* screen) {
        
        Draw::elipse(screen, this->dimensions, this->backgroundColor);
        
        return 1;
    }
    
    void Elipse::setBackgroundColor(Color color) {
        this->backgroundColor = color;
    }
}