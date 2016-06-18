/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "3DSGUI/screen/ScreenType.h"

namespace GP {
    
    ScreenType ScreenType::UNDEFINED = ScreenType(-1);
    ScreenType ScreenType::TOP = ScreenType(0);
    ScreenType ScreenType::BOTTOM = ScreenType(1);
    
    ScreenType::ScreenType() {
        this->type = -1;
    }

    ScreenType::ScreenType(int type) {
        this->type = type;
    }
}