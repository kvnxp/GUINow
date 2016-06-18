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
#pragma once
#ifndef DRAWABLE_H
#define DRAWABLE_H

#include "../util/Rectangle2D.h"
#include <3ds.h>

namespace GP {
    
    class Drawable {
    public:
        Rectangle2D dimensions;
        virtual int draw(u8* screen) {
            return 0;
        };
    };
}

#endif /* DRAWABLE_H */

