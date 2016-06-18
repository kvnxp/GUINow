/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Font.h
 * Author: bert
 *
 * Created on 3 februari 2016, 21:22
 */

#ifndef FONT_H
#define FONT_H

#include "Color.h"
#include "Rectangle2D.h"
#include "Vector2.h"
#include <3ds.h>

#define BYTES_PER_PIXEL	3  //Our color buffer accepts 24-bits color.
#define SCREEN_WIDTH	320
#define SCREEN_HEIGHT	240
#define SCREEN_SIZE	(BYTES_PER_PIXEL*SCREEN_WIDTH*SCREEN_HEIGHT)
#define FONT_SIZE	8
#define WIDTH           400
#define HEIGHT          240
#define TOPSIZE         288000
#define BOTTOMSIZE      230400

namespace GP {
    
    class Font {
    public:
        static const unsigned char font[];
        static void drawCharacter(u8 *screen, char character, int x, int y, Color color);
        static void drawString(u8 *screen, const char *str, int x, int y, Color color);
        static void drawString(u8 *screen, Rectangle2D dimensions, const char *str, Color color);
        static void drawString(u8 *screen, Vector2 position, const char *str, Color color);
        static int stringLength(const char *str);
    };
}

#endif /* FONT_H */

