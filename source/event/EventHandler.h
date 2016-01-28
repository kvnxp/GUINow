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

#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

namespace GP {
    
    typedef enum EventType {
        CLICK
    }EventType;
    
    class EventHandler {
    private:
        void *event;
    public:
        EventHandler();
        EventType type;
        
        void setEvent(void* event) {
            this->event = event;
        }
        
        void Event() {
            this->event();
        }
    };
}

#endif /* EVENTHANDLER_H */

