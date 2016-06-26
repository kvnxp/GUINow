/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Graphics.h
 * Author: bert
 *
 * Created on 2 februari 2016, 20:52
 */

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "../screen/Screen.h"
#include "../screen/TopScreen.h"
#include "../screen/BottomScreen.h"

namespace GP {
    
    class Graphics {
    private:
        static Screen *topScreen;
        static Screen *bottomScreen;
    public:
        static bool changeBuffers;
        static void init();
        static void dinit();
        static void setScreen(Screen *screen);
        static int draw();
        static void changeFrameBuffers();
        static void getFrameBuffers();
        static void clearCurrent();
        static void clear();

        static void warnEmulator();
        static void checkEmulator();
    };
}

#endif /* GRAPHICS_H */

