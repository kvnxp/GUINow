/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Gui.h"
#include "GUINow/util/Timer.h"
#include "GUINow/util/Keys.h"
#include "GUINow/util/Touch.h"
#include "GUINow/util/Graphics.h"

namespace GP {
    
    int Gui::fps = 30;
    bool Gui::run = true;
    int Gui::actualFps = 0;

    void Gui::setFPS(int fps) {
        Gui::fps = fps;
    }

    bool Gui::loop() {
        Timer::frame();
        Graphics::changeFrameBuffers();
        gspWaitForVBlank();
        
        if(!Gui::run) {
            return false;
        }
        
        //Timer::sleep_mile((int)((float)1000 / Gui::fps));//disable this for 60fps
        
        hidScanInput();
        Touch::scan();
        Keys::scan();
        
        return true;
    }
    
    bool Gui::loop(int &offset) {
        if(offset-- <= 0) {
            return false;
        }
        return Gui::loop();
    }
    
    void Gui::stop() {
        Gui::run = false;
    }
}


