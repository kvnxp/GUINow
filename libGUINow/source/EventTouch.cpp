/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/EventTouch.h"

namespace GP {
    
    void EventTouch::check(Rectangle2D rectangle) {

    	if(!Touch::touched) {
    		if(this->focus) {
    			this->action();
    		}
    		this->focus = false;
    	}
        else {
        	this->focus = Touch::checkTouch(rectangle);
        }
        
    }
}