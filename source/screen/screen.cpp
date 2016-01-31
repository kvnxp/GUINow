/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "screen.h"

namespace GP {
    
    Screen::Screen() {
        this->type = ScreenType::UNDEFINED;
        this->objects = new Drawable * [3];
        this->objectCount = 0;
    }
    
    void Screen::draw() {
        //printf("Drawing screen\n");
        int i;
        for(i = 0; i < this->objectCount; i++) {
            this->objects[i]->draw(this->buffer);
        }
    }
    
    void Screen::fill(Drawable *object) {
        this->objects[this->objectCount++] = object;
    }
}