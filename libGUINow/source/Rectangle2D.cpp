/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/Rectangle2D.h"

namespace GP {
    
    Rectangle2D::Rectangle2D() {
        this->set(0, 0, 0, 0);
    }
    Rectangle2D::Rectangle2D(int x, int y, int width, int height) {
        this->set(x, y, width, height);
    }
    void Rectangle2D::set(int x, int y, int width, int height) {
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;

        this->eventChange.trigger();
    }
}