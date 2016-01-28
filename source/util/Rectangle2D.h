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

#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

namespace GP {
    
    class Rectangle2D {
    public:
        int x;
        int y;
        int width;
        int height;
        
        Rectangle2D() {
            this->x = 0;
            this->y = 0;
            this->width = 0;
            this->height = 0;
        }
        Rectangle2D(int x, int y, int width, int height) {
            this->x = x;
            this->y = y;
            this->width = width;
            this->height = height;
        }
    };
}

#endif /* RECTANGLE2D_H */

