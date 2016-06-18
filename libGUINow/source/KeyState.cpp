/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "3DSGUI/util/KeyState.h"

namespace GP {
    
    KeyState KeyState::UP = KeyState(0);
    KeyState KeyState::DOWN = KeyState(1);
    KeyState KeyState::HELD = KeyState(2);
    KeyState KeyState::RELEASED = KeyState(3);

    KeyState::KeyState(int state) {
    	this->state = state;
    }
}