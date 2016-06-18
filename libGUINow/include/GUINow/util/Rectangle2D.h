/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rectangle2D.h
 * Author: bert
 *
 * Created on 25 januari 2016, 23:43
 */
#pragma once
#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

#include "../event/PasiveEventHandler.h"

namespace GP {
    
    class Rectangle2D {
    private:
        PasiveEventHandler eventChange;
    public:
        int x;
        int y;
        int width;
        int height;
        
        Rectangle2D();
        Rectangle2D(int x, int y, int width, int height);
        void set(int x, int y, int width, int height);
    };
}

#endif /* RECTANGLE2D_H */

