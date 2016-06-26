/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Event.h
 * Author: bert
 *
 * Created on 20 juni 2016, 0:10
 */
#pragma once
#ifndef EVENT_H
#define EVENT_H

#include "PasiveEvent.h"
#include "../util/Rectangle2D.h"

namespace GP {
    
    class Event : public PasiveEvent {
    public:
    	bool eventSet;
        void (*event)();
        
        Event();
        void action();
        void setEvent(void (*event)());
        virtual void check(Rectangle2D rectangle) = 0;
    };
}

#endif /* EVENT_H */

