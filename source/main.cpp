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
/*
 * 
 */
int main(int argc, char** argv) {
    
    //initialise our screens
    GP::TopScreen top = GP::TopScreen();
    GP::BottomScreen bottom = GP::BottomScreen();
    
    
    for(int i = 0; i < 20; i++) {
        //top.fill(&GP::Drawable());
    }
    
    GP::Button button = GP::Button((char*)"aaaaad");
    bottom.fill(&button);
    
    for(int i = 0; i < 60; i++) {
        top.draw();
        bottom.draw();
        GP::Timer::sleep_mile((float)1000 / 60);
    }
    
    return 0;
}