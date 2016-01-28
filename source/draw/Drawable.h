/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drawable.h
 * Author: bert
 *
 * Created on 25 januari 2016, 23:09
 */

#ifndef DRAWABLE_H
#define DRAWABLE_H

#include "Drawable.h"
#include "../util/Rectangle2D.h"
#include <stdio.h>

namespace GP {
    
    class Drawable {
    public:
        Rectangle2D dimensions;
        virtual void draw() {
            printf("Drawed");
        }
    };
}

#endif /* DRAWABLE_H */

