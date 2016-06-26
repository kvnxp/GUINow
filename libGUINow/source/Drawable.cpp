/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/draw/Drawable.h"

namespace GP {

    Drawable::Drawable() {
        this->events = new Event * [10];
        this->eventCount = 0;
    }

    int Drawable::draw(u8* screen) {
    	return 0;
    }

    void Drawable::addEvent(Event* event) {
        this->events[this->eventCount++] = event;
    }

    void Drawable::checkEvents() {
        for(int i = 0; i < this->eventCount; i++) {
            this->events[i]->check(this->dimensions);
        }
    }
}