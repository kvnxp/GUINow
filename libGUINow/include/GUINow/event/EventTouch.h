/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EventHover.h
 * Author: bert
 *
 * Created on 22 juni 2016, 0:18
 */
#pragma once
#ifndef EVENTTOUCH_H
#define EVENTTOUCH_H

#include "Event.h"
#include "../util/Touch.h"

namespace GP {
    
    class EventTouch : public Event {
    public:
    	bool focus;
        void check(Rectangle2D rectangle);
    };
}

#endif /* EVENTTOUCH_H */

