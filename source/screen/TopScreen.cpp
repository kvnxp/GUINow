/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "TopScreen.h"

namespace GP {
    
    TopScreen::TopScreen() : Screen() {
        this->type = ScreenType::TOP;
        this->dimensions = Vector2(400, 240);
    }
}