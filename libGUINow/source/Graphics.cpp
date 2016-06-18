/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/Graphics.h"
#include "3DSGUI/draw/Draw.h"
#include <3ds.h>

namespace GP {
    
    Screen *Graphics::topScreen = 0;
    Screen *Graphics::bottomScreen = 0;
    
    bool Graphics::changeBuffers = false;
    
    void Graphics::init() {
        gfxInitDefault();
    }
    void Graphics::dinit() {
        gfxExit();
    }
    
    void Graphics::setScreen(Screen *screen) {
        if(screen->type == ScreenType::TOP) {
            Graphics::topScreen = screen;
        }
        else if(screen->type == ScreenType::BOTTOM) {
            Graphics::bottomScreen = screen;
        }
        else {
            //Unset screen, don't know what to do yet
        }
    }
    
    int Graphics::draw() {
        int drawCount = 0;
        Graphics::changeBuffers = false;
        
        
        if(Graphics::topScreen != 0) {
            Draw::clear(Graphics::topScreen->buffer, Graphics::topScreen->dimensions);
            drawCount += Graphics::topScreen->draw();
            Graphics::changeBuffers = Graphics::changeBuffers || Graphics::topScreen->changed.getState();
        }
        if(Graphics::bottomScreen != 0) {
            Draw::clear(Graphics::bottomScreen->buffer, Graphics::bottomScreen->dimensions);
            drawCount += Graphics::bottomScreen->draw();
            Graphics::changeBuffers = Graphics::changeBuffers || Graphics::bottomScreen->changed.getState();
        }
        
        return drawCount;
    }
    
    void Graphics::changeFrameBuffers() {
        if(Graphics::changeBuffers) {
            gfxSwapBuffers();
            Graphics::getFrameBuffers();
        }
    }
    
    void Graphics::getFrameBuffers() {
        gfxFlushBuffers();
        if(Graphics::topScreen != 0) {
            Graphics::topScreen->getFrameBuffer();
        }
        if(Graphics::bottomScreen != 0) {
            Graphics::bottomScreen->getFrameBuffer();
        }
    }
}