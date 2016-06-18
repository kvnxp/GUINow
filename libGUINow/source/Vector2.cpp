/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/Vector2.h"

namespace GP {
    
    Vector2::Vector2() {
        this->x = 0;
        this->y = 0;
    };
    Vector2::Vector2(int x, int y) {
      this->x = x;
      this->y = y;
    };
}