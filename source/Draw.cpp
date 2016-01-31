/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "draw/Draw.h"

namespace GP {
    
    void Draw::pixel(u8 *screen, int x, int y, Color color) {
        y = 240 - y;
        int hulp = x;
        x = y;
        y = hulp;

        u32 v=(x + y * 240) * 3;

        if((v < 288000 && v > 0)) {
            screen[v] = color.r;
            screen[v + 1] = color.g;
            screen[v + 2] = color.b;
        }
    }
    
    void Draw::pixel(Screen *screen, int x, int y, Color color) {
        Draw::pixel(screen->buffer, x, y, color);
    }
    
    void Draw::rectangle(u8* screen, Rectangle2D rectangle, Color color) {
        int i, j;
        for(i = 0; i < rectangle.width; i++) {
            for(j = 0; j < rectangle.height; j++) {
                Draw::pixel(screen, rectangle.x + i, rectangle.y + j, color);
            }
        }
    }
    
    void Draw::rectangle(Screen* screen, Rectangle2D rectangle, Color color) {
        Draw::rectangle(screen->buffer, rectangle, color);
    }
}
