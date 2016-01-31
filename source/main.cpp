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
/*
 * 
 */
int main(int argc, char** argv) {
    
    //set our desired fps
    GP::Gui::setFPS(60);
    //initialise our screens
    GP::TopScreen top = GP::TopScreen();
    GP::BottomScreen bottom = GP::BottomScreen();
    
    
    //create a button to display
    GP::Button button = GP::Button((char*)"aaaaad");
    bottom.fill(&button); //put it on the bottom screen
    
    int frameCount = 0;
    while(GP::Gui::loop()) {
        //draw the screens
        top.draw();
        bottom.draw();
        
        //print our framecount
        printf("framecount: %d\n", ++frameCount);
        
        //if we want to stop
        if(frameCount >= 60) {
            GP::Gui::stop();
        }
    }
    
    return 0;
}