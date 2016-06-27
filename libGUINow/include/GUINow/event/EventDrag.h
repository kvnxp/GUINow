/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EventDrag.h
 * Author: bert
 *
 * Created on 27 juni 2016, 13:32
 */
#pragma once
#ifndef EVENTDRAG_H
#define EVENTDRAG_H

#include "Event.h"
#include "../util/Touch.h"
#include "../util/Vector2.h"

namespace GP {
    
    class EventDrag : public Event {
    public:
    	bool previous = true;
    	bool focus = false;
    	Vector2 offset;
    	Vector2 start;
        void check(Rectangle2D rectangle);
    };
}

#endif /* EVENTDRAG_H */

