/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Keys.h
 * Author: bert
 *
 * Created on 31 januari 2016, 23:50
 */

#ifndef KEYS_H
#define KEYS_H

#include <3ds.h>

namespace GP {
    typedef enum KeyState {
        UP, DOWN, RELEASED
    }KeyState;
    
    class Keys {
    public:
        static KeyState up;
        static KeyState down;
        static KeyState left;
        static KeyState right;
        static KeyState a;
        static KeyState b;
        static KeyState x;
        static KeyState y;
        static KeyState l;
        static KeyState r;
        static KeyState start;
        static KeyState select;
        
        static void scan();
    };
}

#endif /* KEYS_H */

