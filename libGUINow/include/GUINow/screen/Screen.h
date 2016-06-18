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
#include "ScreenType.h"

namespace GP {
    
    class Screen {
    private:
        Drawable** objects;
        int objectCount;
    public:

        PasiveEventHandler changed;

        u8* buffer;
        Screen();

        ScreenType type;
        Vector2 dimensions;

        int draw();
        void fill(Drawable *object);
        void clear();
        virtual void getFrameBuffer();
    };
}

#endif /* SCREEN_H */

