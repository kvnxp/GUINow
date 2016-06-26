/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Touch.h
 * Author: bert
 *
 * Created on 19 juni 2016, 20:13
 */

#ifndef TOUCH_H
#define TOUCH_H

#include <3ds.h>
#include "Vector2.h"
#include "Rectangle2D.h"

namespace GP {
    
    class Touch {
    public:
        static bool touched;
        static bool firstTouch;
        static Vector2 position;

        static void scan();
        static bool checkTouch(Rectangle2D rectangle);
        static bool empty();
    };
}

#endif /* TOUCH_H */
