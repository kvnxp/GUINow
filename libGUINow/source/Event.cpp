/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/Event.h"

namespace GP {
    
    Event::Event() : PasiveEvent() {
    	this->eventSet = false;
    }


    void Event::setEvent(void (*event)()) {
        this->event = event;
        this->eventSet = true;
    }

    void Event::action() {
    	if(this->eventSet) {
    		this->event();
    	}
        else {
            this->trigger(); //set hasEvent to true
        }
    }

    void check(Rectangle2D rectangle) {

    }
}