/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Timer.h"
#include <unistd.h>
#include <stdio.h>

namespace GP {
    
    int Timer::milestone = 0;

    u64 Timer::previousFrame = 0;
    u64 Timer::currentFrame = 0;

    float Timer::actualFps = 0;
    int Timer::roundedFps = 0;
    
    void Timer::sleep(int microsecond) {
        usleep(microsecond * 1000);
    }
    
    void Timer::sleepu(int milisecond) {
        usleep(milisecond);
    }
    
    void Timer::setMileStone() {
        Timer::milestone = osGetTime(); //get system time
    }
    
    u64 Timer::getTime() {
        return osGetTime();
    }
    
    void Timer::sleep_mile(int milisecond) {
        int now = Timer::getTime(); //get system time
        
        Timer::sleepu((milisecond * 1000) - (now - Timer::milestone));
        Timer::milestone = now;
    }

    void Timer::frame() {
        Timer::previousFrame = Timer::currentFrame;
        Timer::currentFrame = Timer::getTime();

        float temp = Timer::actualFps;
        Timer::actualFps = 1000.f / (Timer::currentFrame - Timer::previousFrame);
        Timer::roundedFps = (int)((temp + Timer::actualFps) / 2 + 0.5);
    }


}