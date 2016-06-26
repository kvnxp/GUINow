/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <cstring>
#include "GUINow/screen/Screen.h"
#include "GUINow/draw/Draw.h"

namespace GP {
    
    Screen::Screen() {
        this->type = ScreenType::UNDEFINED;
        this->objects = new Drawable * [10];
        this->objectCount = 0;
    }
    
    int Screen::draw() {
        int drawCount = 0;
        
        for(int i = 0; i < this->objectCount; i++) {
            drawCount += this->objects[i]->draw(this->buffer);
        }
        
        this->changed.trigger();
        
        return drawCount;
    }

    void Screen::checkEvents() {
         for(int i = 0; i < this->objectCount; i++) {
            this->objects[i]->checkEvents();
        }
    }
    
    void Screen::fill(Drawable *object) {
        this->objects[this->objectCount++] = object;
        this->changed.trigger();
    }

    void Screen::clear() {
        //Draw::rectangle(this->buffer, Rectangle2D(1, 1, 200, 200), Color(0x00, 0x00, 0x00));
        memset(this->buffer, 0, this->dimensions.x * this->dimensions.y * 3);
    }
    
    void Screen::getFrameBuffer() {
        this->buffer = gfxGetFramebuffer(GFX_TOP, GFX_LEFT, NULL, NULL);
    }
}