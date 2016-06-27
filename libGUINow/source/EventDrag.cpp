/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/event/EventDrag.h"

/*
bool focus;
Vector2 offset;
void check(Rectangle2D rectangle);
*/
namespace GP {
    
    void EventDrag::check(Rectangle2D rectangle) {

    	if(Touch::touched) {

            if(!this->previous && Touch::checkTouch(rectangle)) {
                this->focus = true;
                this->start = Vector2(Touch::position.x, Touch::position.y);
            }
            if(this->focus) {
                this->offset.x = Touch::position.x - this->start.x;
                this->offset.y = Touch::position.y - this->start.y;

                this->start.x = Touch::position.x;
                this->start.y = Touch::position.y;
            }
            this->previous = true;
        }
        else {
            this->previous = false;
            this->focus = false;
            this->offset.x = 0;
            this->offset.y = 0;
        }
    }
}