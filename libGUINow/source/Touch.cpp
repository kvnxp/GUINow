/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Touch.h"
#include "GUINow/util/console.h"

namespace GP {
    
    bool Touch::touched = false;
    bool Touch::firstTouch = false;
    Vector2 Touch::position = Vector2();
    
    void Touch::scan() {

    	touchPosition touch;
        hidTouchRead(&touch);

        if(touch.px > 0 || touch.py > 0) {
            Touch::firstTouch = true;
            if(Touch::touched) {
                Touch::firstTouch = false;
            }
            Touch::touched = true;
        }
        else {
            Touch::touched = false;
        }

        Touch::position.x = touch.px;
        Touch::position.y = touch.py;
    }

    bool Touch::checkTouch(Rectangle2D rectangle) {

    	if(!Touch::touched) {
    		return false;
    	}

    	if(Touch::position.x >= rectangle.x && Touch::position.x <= (rectangle.x + rectangle.width)) {
    		if(Touch::position.y >= rectangle.y && Touch::position.y <= (rectangle.y + rectangle.height)) {
    			return true;
    		}
    	}

    	return false;
    }

    bool Touch::empty() {
        return Touch::touched;
    }
}