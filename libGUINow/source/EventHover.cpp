/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/EventHover.h"
#include "GUINow/util/Rectangle2D.h"
#include "GUINow/util/Touch.h"

namespace GP {
    
    void EventHover::check(Rectangle2D rectangle) {
        if(Touch::checkTouch(rectangle)) {
            this->action();
        }
    }
}