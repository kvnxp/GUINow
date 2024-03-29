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
#include "../util/Color.h"
#include "../event/EventTouch.h"
#include <3ds.h>

namespace GP {
    
    class Button : public Drawable {
    private:
        char text[40];
    public:
        
        Color textColor;
        Color textHoldColor;

        Color backgroundColor;
        Color backgroundHoldColor;

        EventTouch touch;
        
        Button();
        Button(char* text);

        void setDefault();
        
        void setText(char* text);
        char* setText();

        void setColor(Color color);
        void setHoldColor(Color color);

        void setBackgroundColor(Color color);
        void setBackgroundHoldColor(Color color);
        
        using Drawable::draw;
        int draw(u8* screen);
        
    };
}

#endif /* BUTTON_H */

