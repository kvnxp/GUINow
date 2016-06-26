/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Graphics.h"
#include "GUINow/util/Rectangle2D.h"
#include "GUINow/util/Gui.h"
#include "GUINow/util/Keys.h"
#include "GUINow/util/KeyState.h"

#include "GUINow/draw/Draw.h"
#include "GUINow/tools/Label.h"
#include "GUINow/tools/Button.h"
#include <3ds.h>

namespace GP {
    
    Screen *Graphics::topScreen = 0;
    Screen *Graphics::bottomScreen = 0;
    
    bool Graphics::changeBuffers = false;
    
    void Graphics::init() {
        gfxInitDefault();

        Graphics::checkEmulator();
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
            Graphics::topScreen->checkEvents();
            drawCount += Graphics::topScreen->draw();
            Graphics::changeBuffers = Graphics::changeBuffers || Graphics::topScreen->changed.getState();
        }
        if(Graphics::bottomScreen != 0) {
            Draw::clear(Graphics::bottomScreen->buffer, Graphics::bottomScreen->dimensions);
            Graphics::bottomScreen->checkEvents();
            drawCount += Graphics::bottomScreen->draw();
            Graphics::changeBuffers = Graphics::changeBuffers || Graphics::bottomScreen->changed.getState();
        }
        
        return drawCount;
    }
    
    void Graphics::changeFrameBuffers() {
        
        if(Graphics::changeBuffers || true) {
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

    void continue_hover() {
        
    }

    void Graphics::warnEmulator() {

        TopScreen topscreen = TopScreen();
        BottomScreen bottomScreen = BottomScreen();

        Label title = Label((char*)"WARNING!"); title.dimensions = Rectangle2D(0, 21, 400, 20); title.setColor(Color(0x21, 0xC4, 0x00));
        Label s1 = Label((char*)"You're using an emulator to boot GUINow"); s1.dimensions = Rectangle2D(0, 61, 400, 20); //You're using an emulator to boot GUINow. gets green
        Label s2 = Label((char*)"GUINow is optimised for 3DS use only"); s2.dimensions = Rectangle2D(0, 81, 400, 20);
        Label s3 = Label((char*)"Some functions may not work"); s3.dimensions = Rectangle2D(0, 101, 400, 20);
        Label s4 = Label((char*)"Attempt: 12"); s4.dimensions = Rectangle2D(0, 121, 400, 20);

        topscreen.fill(&title);
        topscreen.fill(&s1);
        topscreen.fill(&s2);
        topscreen.fill(&s3);
        topscreen.fill(&s4);

        Button con = Button((char*)"Continue");
        con.dimensions = Rectangle2D(110, 95, 100, 50);

        bottomScreen.fill(&con);

        Graphics::setScreen(&topscreen);
        Graphics::setScreen(&bottomScreen);

        while(GP::Gui::loop() && aptMainLoop()) {
            Graphics::draw();

            con.setText(con.touch.focus ? (char*)"true" : (char*)"false");

            if(GP::Keys::start == GP::KeyState::DOWN || con.touch.getState()) {
                break;
            }
        }

        //clear both screenbuffers (maybe throw this in a function?)
        Graphics::clear();

        Graphics::topScreen = NULL;
        Graphics::bottomScreen = NULL;
        //TODO unset screens

    }
    void Graphics::checkEmulator() {

        if(Timer::getTime() < 10000 || true) {

            //show a warnig
            Graphics::warnEmulator();

        }

    }

    void Graphics::clearCurrent() {

        if(Graphics::topScreen != 0) {
            Draw::clear(Graphics::topScreen->buffer, Graphics::topScreen->dimensions);
        }
        if(Graphics::bottomScreen != 0) {
            Draw::clear(Graphics::bottomScreen->buffer, Graphics::bottomScreen->dimensions);
        }
    }

    void Graphics::clear() {
        //clear both framebuffers
        Graphics::clearCurrent();
        Graphics::changeFrameBuffers();
        Graphics::clearCurrent();
    }
}