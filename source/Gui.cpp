/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Gui.h"
#include "util/Timer.h"

namespace GP {
    
    int Gui::fps = 30;
    bool Gui::run = true;

    void Gui::setFPS(int fps) {
        Gui::fps = fps;
    }

    bool Gui::loop() {
        if(!Gui::run) {
            return false;
        }

        Timer::sleep_mile((float)1000 / Gui::fps);
        return true;
    }
    
    void Gui::stop() {
        Gui::run = false;
    }
}


