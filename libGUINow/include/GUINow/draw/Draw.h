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
#pragma once
#ifndef DRAW_H
#define DRAW_H

#include "../util/Color.h"
#include "../util/Rectangle2D.h"
#include "../util/Vector2.h"
#include "../screen/Screen.h"
#include <3ds.h>

namespace GP {
    
    class Draw {
    public:
        static void pixel(Screen* screen, int x, int y, Color color);
        static void pixel(u8 *screen, int x, int y, Color color);
        static void pixel(Vector2 vector, Color color);

        static void line(u8 *screen, int x1, int y1, int x2, int y2, Color color);

        static void rectangle(Screen* screen, Rectangle2D rectangle, Color color);
        static void rectangle(u8* screen, Rectangle2D rectangle, Color color);

        static void rectangle(u8* screen, Vector2 dimensions, Color color);
        static void rectangle(Screen* screen, Vector2 dimensions, Color color);
        
        static void elipse(u8* screen, Rectangle2D dimensions, Color backgroundColor);
        static void line();
        
        static void clear(u8* screen, Vector2 dimensions);
    };
}

#endif /* DRAW_H */