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
#ifndef SLIDER_H
#define SLIDER_H

#include <3ds.h>
#include "../draw/Draw.h"
#include "../event/EventDrag.h"

namespace GP {
    
    class Slider : public Drawable {
    private:
        int value;
    public:
        EventDrag drag;

        Slider();

        int getWidth();
        int getValue();

        void setWidth(int width);
        void setValue(int value);
        
        using Drawable::draw;
        int draw(u8* screen);
        void checkEvents();
    };
}

#endif /* SLIDER_H */

