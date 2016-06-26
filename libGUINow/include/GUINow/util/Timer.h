/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Timer.h
 * Author: bert
 *
 * Created on 26 januari 2016, 15:04
 */
#pragma once
#ifndef TIMER_H
#define TIMER_H

#include <3ds.h>

namespace GP {
    
    class Timer {
    private:
        static int milestone;
        static u64 previousFrame;
        static u64 currentFrame;
    public:
    	static float actualFps;
    	static int roundedFps;

        static void sleep(int microsecond);
        static void sleepu(int milisecond);
        static void setMileStone();
        static void sleep_mile(int miliseconds);
        static u64 getTime();
        static void frame();
    };
}

#endif /* TIMER_H */

