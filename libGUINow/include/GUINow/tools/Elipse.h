/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Elipse.h
 * Author: bert
 *
 * Created on 3 februari 2016, 16:32
 */

#ifndef ELIPSE_H
#define ELIPSE_H

#include "../draw/Drawable.h"
#include "../util/Color.h"
#include <3ds.h>

namespace GP {
    
    class Elipse : public Drawable {
    public:
        Color backgroundColor;
        
        Elipse();
        Elipse(int radius);
        
        int draw(u8* screen);
        void setBackgroundColor(Color color);
    };
}

#endif /* ELIPSE_H */

