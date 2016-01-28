/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "BottomScreen.h"

namespace GP {
    
    BottomScreen::BottomScreen() : Screen() {
        this->type = ScreenType::BOTTOM;
        this->dimensions = Vector2(320, 240);
    }
}

