/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Draw.h
 * Author: bert
 *
 * Created on 26 januari 2016, 15:43
 */

#ifndef DRAW_H
#define DRAW_H

#include "Color.h"
#include "Rectangle2D.h"
#include "Vector2.h"

namespace GP {
    
    class Draw {
    public:
        static void pixel(int x, int y, Color color);
        static void pixel(Vector2 vector, Color color);
        static void rectangle(Rectangle2D rectangle, Color color);
        static void line();
    };
}

#endif /* DRAW_H */

