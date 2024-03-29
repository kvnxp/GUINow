/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/draw/Draw.h"
#include <math.h>

namespace GP {
    
    void Draw::pixel(u8 *screen, int x, int y, Color color) {
        if(x < 0 || y < 0) {
            return;
        }
        
        y = 240 - y - 1;
        int hulp = x;
        x = y;
        y = hulp;

        u32 v=(x + y * 240) * 3;

        if((v < 288000 && v > 0)) {
            screen[v] = color.b; //blue
            screen[v + 1] = color.g; //Green
            screen[v + 2] = color.r; //red
        }
    }
    
    void Draw::pixel(Screen *screen, int x, int y, Color color) {
        Draw::pixel(screen->buffer, x, y, color);
    }
    
    void Draw::line(u8 *screen, int x1, int y1, int x2, int y2, Color color) {
        int diffX = x2 - x1;
        if(diffX < 0) {
            diffX = diffX * -1;
        }
        
        int diffY = y2 - y1;
        if(diffY < 0) {
            diffY = diffY * -1;
        }
        
        for(int i = 0; i <= diffX; i++) {
            Draw::pixel(screen, x1 + i, y1, color);
        }
        for(int i = 0; i <= diffY; i++) {
            Draw::pixel(screen, x1, y1 + i, color);
        }
    }
    
    void Draw::rectangle(u8* screen, Rectangle2D rectangle, Color color) {
        int i, j;
        for(i = 0; i <= rectangle.width; i++) {
            for(j = 0; j <= rectangle.height; j++) {
                Draw::pixel(screen, rectangle.x + i, rectangle.y + j, color);
            }
        }
    }

    void Draw::rectangle(u8* screen, Vector2 vector, Color color) {
        int i, j;
        for(i = 0; i <= vector.x; i++) {
            for(j = 0; j <= vector.y; j++) {
                Draw::pixel(screen, vector.x + i, vector.y + j, color);
            }
        }
    }

    void Draw::emptyRectangle(u8* screen, Rectangle2D rectangle, Color color) {
        Draw::line(screen, rectangle.x, rectangle.y, rectangle.x + rectangle.width, rectangle.y, color);
        Draw::line(screen, rectangle.x, rectangle.y, rectangle.x, rectangle.y + rectangle.height, color);
        Draw::line(screen, rectangle.x + rectangle.width, rectangle.y, rectangle.x + rectangle.width, rectangle.y + rectangle.height, color);
        Draw::line(screen, rectangle.x, rectangle.y + rectangle.height, rectangle.x + rectangle.width, rectangle.y + rectangle.height, color);
    }
    
    void Draw::rectangle(Screen* screen, Rectangle2D rectangle, Color color) {
        Draw::rectangle(screen->buffer, rectangle, color);
    }

    void Draw::rectangle(Screen* screen, Vector2 dimensions, Color color) {
        Draw::rectangle(screen->buffer, dimensions, color);
    }

    void Draw::emptyRectangle(Screen* screen, Rectangle2D rectangle, Color color) {
        Draw::rectangle(screen->buffer, rectangle, color);
    }
    
    void Draw::elipse(u8* screen, Rectangle2D dimensions, Color backgroundColor) {
        int radius = dimensions.width / 2;
        int r2 = (dimensions.width / 2) * (dimensions.width / 2);
        int centerX = dimensions.width / 2 + dimensions.x;
        int centerY = dimensions.height / 2 + dimensions.y;
        
        int y;
        for(int x = -radius; x < radius; x++) {
            y = (int)(sqrt(r2 - x * x) + 0.5);
            Draw::pixel(screen, centerX + x, centerY + y, backgroundColor);
            Draw::pixel(screen, centerX + x, centerY - y, backgroundColor);
            //Fill
            Draw::line(screen, centerX + x, centerY - y, centerX + x, centerY + y, backgroundColor);
        }
    }
    
    void Draw::clear(u8* screen, Vector2 dimensions) {
        Color black = Color(0x00, 0x00, 0x00);
        
        for(int x = 0; x < dimensions.x; x++) {
            for(int y = 0; y < dimensions.y; y++) {
                Draw::pixel(screen, x, y, black);
            }
        }
    }
}
