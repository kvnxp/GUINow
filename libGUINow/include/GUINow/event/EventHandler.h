/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EventHandler.h
 * Author: bert
 *
 * Created on 26 januari 2016, 0:10
 */
#pragma once
#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

namespace GP {
    
    typedef enum EventType {
        CLICK
    }EventType;
    
    class EventHandler {
    public:
        void (*event)();
        EventType type;
        
        EventHandler();
        void setEvent(void (*event)());
        void Event();
    };
}

#endif /* EVENTHANDLER_H */

