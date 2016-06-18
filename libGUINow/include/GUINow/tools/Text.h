/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Text.h
 * Author: bert
 *
 * Created on 17 juni 2016, 0:02
 */
#pragma once
#ifndef TEXT_H
#define TEXT_H

#include "../draw/Drawable.h"
#include "../util/Vector2.h"
#include "../util/Color.h"
#include <3ds.h>

namespace GP {
    
    class Text : public Drawable {
    private:
        char text[40];
    public:
        Vector2 position;
        Color textColor;
        Color backgroundColor;
        
        Text();
        Text(char* text);
        
        void setText(char* text);
        //char* getText();

        void setColor(Color color);
        void setBackgroundColor(Color color);

        void setPosition(int x, int y);

        using Drawable::draw;
        int draw(u8* screen);
    };
}

#endif /* TEXT_H */