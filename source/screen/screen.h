/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   screen.h
 * Author: bert
 *
 * Created on 25 januari 2016, 22:59
 */

#pragma once
#ifndef SCREEN_H
#define SCREEN_H

#include "../util/Vector2.h"
#include <3ds.h>
#include "../draw/Drawable.h"

namespace GP {
    
    typedef enum ScreenType {
        TOP, BOTTOM, UNDEFINED
    }ScreenType;
    
    class Screen {
    private:
        Drawable** objects;
        int objectCount;
    public:
        u8* buffer;
        Screen();
        ScreenType type;
        Vector2 dimensions;
        void draw();
        void fill(Drawable *object);
    };
}

#endif /* SCREEN_H */

