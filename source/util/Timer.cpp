/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Timer.h"
#include <unistd.h>
#include <stdio.h>

namespace GP {
    
    int Timer::milestone = 0;
    
    void Timer::sleep(int microsecond) {
        usleep(microsecond * 1000);
    }
    
    void Timer::sleepu(int milisecond) {
        usleep(milisecond);
    }
    
    void Timer::setMileStone() {
        Timer::milestone = 0; //get system time
    }
    
    void Timer::sleep_mile(int milisecond) {
        int now = 0; //get system time
        
        Timer::sleepu((milisecond * 1000) - (now - Timer::milestone));
    }
}