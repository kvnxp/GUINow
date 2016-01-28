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

#ifndef TIMER_H
#define TIMER_H

namespace GP {
    
    class Timer {
    private:
        static int milestone;
    public:
        static void sleep(int microsecond);
        static void sleepu(int milisecond);
        static void setMileStone();
        static void sleep_mile(int miliseconds);
    };
}

#endif /* TIMER_H */

