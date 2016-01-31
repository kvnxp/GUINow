/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector2.h
 * Author: bert
 *
 * Created on 25 januari 2016, 23:42
 */
#pragma once
#ifndef VECTOR2_H
#define VECTOR2_H

namespace GP {
    
    class Vector2 {
    public:
        int x;
        int y;
        
        Vector2() {
            this->x = 0;
            this->y = 0;
        };
        Vector2(int x, int y) {
          this->x = x;
          this->y = y;
        };
    };
}

#endif /* VECTOR2_H */

