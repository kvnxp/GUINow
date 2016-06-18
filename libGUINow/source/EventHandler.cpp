/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/event/EventHandler.h"
namespace GP {
    
    EventHandler::EventHandler() {
            
    }


    void EventHandler::setEvent(void (*event)()) {
        this->event = event;
    }

    void EventHandler::Event() {
        this->event();
    }
}