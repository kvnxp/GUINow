/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/Gui.h"
#include "3DSGUI/util/Timer.h"
#include "3DSGUI/util/Keys.h"
#include "3DSGUI/util/Graphics.h"

namespace GP {
    
    int Gui::fps = 30;
    bool Gui::run = true;

    void Gui::setFPS(int fps) {
        Gui::fps = fps;
    }

    bool Gui::loop() {
        Graphics::changeFrameBuffers();
        
        if(!Gui::run) {
            return false;
        }
        
        Timer::sleep_mile((int)((float)1000 / Gui::fps));
        
        Keys::scan();
        
        return true;
    }
    
    /*bool Gui::loop(int offset) {
        if(offset <= 0) {
            return false;
        }
        return Gui::loop();
    }*/
    
    void Gui::stop() {
        Gui::run = false;
    }
}

