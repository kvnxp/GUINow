/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drawable.h
 * Author: bert
 *
 * Created on 25 januari 2016, 23:09
 */
#pragma once
#ifndef DRAWABLE_H
#define DRAWABLE_H

#include "../util/Rectangle2D.h"
#include "../event/Event.h"
#include "../event/EventHover.h"
#include <3ds.h>

namespace GP {
    
    class Drawable {
    protected:
    	Event** events;
    	int eventCount;
    public:
        Rectangle2D dimensions;

        //events, since everything drawalble can be clicked on!
        EventHover hover;
        
        Drawable();
        
        virtual int draw(u8* screen);
        virtual void addEvent(Event* event);
        virtual void checkEvents();
    };
}

#endif /* DRAWABLE_H */

