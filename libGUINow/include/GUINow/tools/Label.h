/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Label.h
 * Author: bert
 *
 * Created on 20 juni 2016, 0:02
 */
#pragma once
#ifndef LABEL_H
#define LABEL_H

#include "../draw/Drawable.h"
#include "../util/Rectangle2D.h"
#include "../util/Color.h"
#include "../util/Timer.h"
#include <3ds.h>

namespace GP {
    
    class Label : public Drawable {
    private:
        char text[40];
    public:
        Color textColor;
        Color backgroundColor;
        
        Label();
        Label(char* text);
        
        void setText(char* text);

        void setColor(Color color);
        void setBackgroundColor(Color color);

        using Drawable::draw;
        int draw(u8* screen);
    };
}

#endif /* LABEL_H */