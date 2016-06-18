/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/PasiveEventHandler.h"

namespace GP {
    
    PasiveEventHandler::PasiveEventHandler() {
        this->hasEvent = false;
    }

    void PasiveEventHandler::trigger() {
        this->hasEvent = true;
    }

    void PasiveEventHandler::Event() {
        if(this->hasEvent) {
            this->hasEvent = false;
            this->event();
        }
    }
        
    bool PasiveEventHandler::getState() {
        return this->hasEvent;
    }
}
