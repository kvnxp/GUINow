/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Button.h"
#include <stdio.h>
#include <string>

namespace GP {
    
    Button::Button() : Drawable() {
        
    }
    
    Button::Button(char* text) : Drawable() {
        strcpy(this->text, text);
    }
    
    void Button::draw() {
        printf("fghjk%s\n", this->text);
    }
}