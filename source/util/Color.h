/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Color.h
 * Author: bert
 *
 * Created on 26 januari 2016, 15:44
 */
#pragma once
#ifndef COLOR_H
#define COLOR_H

#include <3ds.h>

namespace GP {
    
    class Color {
    public:
        u8 r;
        u8 g; 
        u8 b;
        
        Color(u8 r, u8 g, u8 b) {
            this->r = r;
            this->g = g;
            this->b = b;
        }
        
        static Color Red;
        static Color Green;
        static Color Blue;
    };
}

#endif /* COLOR_H */

