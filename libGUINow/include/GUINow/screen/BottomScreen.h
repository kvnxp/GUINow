/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BottomScreen.h
 * Author: bert
 *
 * Created on 25 januari 2016, 23:49
 */
#pragma once
#ifndef BOTTOMSCREEN_H
#define BOTTOMSCREEN_H

#include "Screen.h"
#include "../util/Touch.h"

namespace GP {
    
    class BottomScreen : public Screen {
    public:
        BottomScreen();
        void getFrameBuffer();
    };
}

#endif /* BOTTOMSCREEN_H */