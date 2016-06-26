/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/screen/BottomScreen.h"
#include "GUINow/util/Console.h"
#include <3ds.h>

namespace GP {
    
    BottomScreen::BottomScreen() : Screen() {
        this->type = ScreenType::BOTTOM;
        this->dimensions = Vector2(320, 240);
        this->getFrameBuffer();
    }
    
    void BottomScreen::getFrameBuffer() {
        this->buffer = gfxGetFramebuffer(GFX_BOTTOM, GFX_LEFT, NULL, NULL);
    }
}