/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/Color.h"

namespace GP {
    
    Color Color::Red = Color(0xFF, 0x00, 0x00);
    Color Color::Green = Color(0x00, 0xFF, 0x00);
    Color Color::Blue = Color(0x00, 0x00, 0xFF);
    
    Color::Color() {
        this->r = 0xFF;
        this->g = 0xFF;
        this->b = 0xFF;
    }

    Color::Color(u8 r, u8 g, u8 b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }

    void Color::set(u8 r, u8 g, u8 b) {
        this->r = r;
        this->g = g;
        this->b = b;
    }
}