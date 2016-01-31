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
#pragma once
#ifndef BUTTON_H
#define BUTTON_H

#include "../draw/Drawable.h"
#include "../util/Rectangle2D.h"
#include <3ds.h>

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
        void draw(u8* screen);
        
    };
}

#endif /* BUTTON_H */

