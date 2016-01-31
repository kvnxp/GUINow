/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bert
 *
 * Created on 25 januari 2016, 22:41
 */
#include "screen/screen.h"
#include "screen/TopScreen.h"
#include "screen/BottomScreen.h"
#include "util/Timer.h"
#include "tools/Button.h"
#include "Gui.h"
#include "draw/Draw.h"
#include "util/Color.h"
#include <3ds.h>
#include <stdio.h>
/*
 * 
 */

int main(int argc, char** argv) {
    
    gfxInitDefault();
    
    /*PrintConsole topConsole;
    PrintConsole bottomConsole;
    consoleInit(GFX_TOP, &topConsole);
    consoleInit(GFX_BOTTOM, &bottomConsole);*/
    
    //consoleSelect(&topConsole);
    
    //set our desired fps
    GP::Gui::setFPS(30);
    //initialise our screens
    GP::TopScreen top = GP::TopScreen();
    GP::BottomScreen bottom = GP::BottomScreen();
    
    
    //create a button to display
    GP::Button button = GP::Button((char*)"aaaaad");
    button.dimensions.width = 20;
    button.dimensions.height = 10;
    button.dimensions.x = 1;
    button.dimensions.y = 1;
    bottom.fill(&button); //put it on the bottom screen
    
    gfxFlushBuffers();
    gfxSwapBuffers();
        
    int frameCount = 0;
    while(GP::Gui::loop() && aptMainLoop()) {
        //draw the screens
        top.draw();
        bottom.draw();
        
        //print our framecount
        //printf("framecount: %d\n", ++frameCount);
        GP::Draw::pixel(&top, 10 + frameCount / 30, 10, GP::Color(0xFF, 0xFF, 0xFF));
        
        //if we want to stop
        if(frameCount >= 60) {
            //GP::Gui::stop();
        }
        frameCount++;
    }
    
    return 0;
}