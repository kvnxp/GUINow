/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include "3DSGUI/screen/Screen.h"

namespace GP {
    
    Screen::Screen() {
        this->type = ScreenType::UNDEFINED;
        this->objects = new Drawable * [3];
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
    
    void Screen::fill(Drawable *object) {
        this->objects[this->objectCount++] = object;
        this->changed.trigger();
    }
    
    void Screen::getFrameBuffer() {
        this->buffer = gfxGetFramebuffer(GFX_TOP, GFX_LEFT, NULL, NULL);
    }
}