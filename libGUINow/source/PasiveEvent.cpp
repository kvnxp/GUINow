/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/PasiveEvent.h"

namespace GP {

    void PasiveEvent::trigger() {
        this->hasEvent = true;
    }

    bool PasiveEvent::getState() {
        if(this->hasEvent) {
            this->hasEvent = false;
            return true;
        }

        return false;
    }
}
