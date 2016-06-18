/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle.h
 * Author: bert
 *
 * Created on 3 februari 2016, 22:08
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "../draw/Drawable.h"
#include "../util/Color.h"
#include <3ds.h>

namespace GP {
    
    class Rectangle : public Drawable {
    public:
        Color backgroundColor;
        
        Rectangle();
        
        int draw(u8* screen);
        void setBackgroundColor(Color color);
    };
}

#endif /* RECTANGLE_H */

