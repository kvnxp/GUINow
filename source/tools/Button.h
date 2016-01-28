/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Button.h
 * Author: bert
 *
 * Created on 26 januari 2016, 0:02
 */

#ifndef BUTTON_H
#define BUTTON_H

#include "../draw/Drawable.h"
#include "../util/Rectangle2D.h"
#include <stdio.h>

namespace GP {
    
    class Button : public Drawable {
    private:
        char text[40];
    public:
        Rectangle2D dimensions;
        
        Button();
        Button(char* text);
        
        void setText(char* text);
        char* setText();
        
        using Drawable::draw;
        void draw();
        
    };
}

#endif /* BUTTON_H */

