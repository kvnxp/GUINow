/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/Keys.h"

namespace GP {
    
    KeyState Keys::up = KeyState::UP;
    KeyState Keys::down = KeyState::UP;
    KeyState Keys::left = KeyState::UP;
    KeyState Keys::right = KeyState::UP;
    KeyState Keys::a = KeyState::UP;
    KeyState Keys::b = KeyState::UP;
    KeyState Keys::x = KeyState::UP;
    KeyState Keys::y = KeyState::UP;
    KeyState Keys::l = KeyState::UP;
    KeyState Keys::r = KeyState::UP;
    KeyState Keys::start = KeyState::UP;
    KeyState Keys::select = KeyState::UP;
    
    void Keys::scan() {
        hidScanInput();
        u32 kDown = hidKeysDown();
        u32 kHeld = hidKeysHeld();
        
        if((kDown & KEY_UP) || (kHeld & KEY_UP)) {
            if(Keys::up == KeyState::DOWN) {
                Keys::up = KeyState::HELD;
            }
            else {
                Keys::up = KeyState::DOWN;
            }
        }
        else {
            if(Keys::up == KeyState::DOWN) {
                Keys::up = KeyState::RELEASED;
            }
            else {
                Keys::up = KeyState::UP;
            }
        }
        
        if((kDown & KEY_DOWN) || (kHeld & KEY_DOWN)) {
            if(Keys::down == KeyState::DOWN) {
                Keys::down = KeyState::HELD;
            }
            else {
                Keys::down = KeyState::DOWN;
            }
        }
        else {
            if(Keys::down == KeyState::DOWN) {
                Keys::down = KeyState::RELEASED;
            }
            else {
                Keys::down = KeyState::UP;
            }
        }
        
        if((kDown & KEY_LEFT) || (kHeld & KEY_LEFT)) {
            if(Keys::left == KeyState::DOWN) {
                Keys::left = KeyState::HELD;
            }
            else {
                Keys::left = KeyState::DOWN;
            }
        }
        else {
            if(Keys::left == KeyState::DOWN) {
                Keys::left = KeyState::RELEASED;
            }
            else {
                Keys::left = KeyState::UP;
            }
        }
        
        if((kDown & KEY_RIGHT) || (kHeld & KEY_RIGHT)) {
            if(Keys::right == KeyState::DOWN) {
                Keys::right = KeyState::HELD;
            }
            else {
                Keys::right = KeyState::DOWN;
            }
        }
        else {
            if(Keys::right == KeyState::DOWN) {
                Keys::right = KeyState::RELEASED;
            }
            else {
                Keys::right = KeyState::UP;
            }
        }
        
        if((kDown & KEY_A) || (kHeld & KEY_A)) {
            if(Keys::a == KeyState::DOWN) {
                Keys::a = KeyState::HELD;
            }
            else {
                Keys::a = KeyState::DOWN;
            }
        }
        else {
            if(Keys::a == KeyState::DOWN) {
                Keys::a = KeyState::RELEASED;
            }
            else {
                Keys::a = KeyState::UP;
            }
        }
        
        if((kDown & KEY_B) || (kHeld & KEY_B)) {
            if(Keys::b == KeyState::DOWN) {
                Keys::b = KeyState::HELD;
            }
            else {
                Keys::b = KeyState::DOWN;
            }
        }
        else {
            if(Keys::b == KeyState::DOWN) {
                Keys::b = KeyState::RELEASED;
            }
            else {
                Keys::b = KeyState::UP;
            }
        }
        
        if((kDown & KEY_X) || (kHeld & KEY_X)) {
            if(Keys::x == KeyState::DOWN) {
                Keys::x = KeyState::HELD;
            }
            else {
                Keys::x = KeyState::DOWN;
            }
        }
        else {
            if(Keys::x == KeyState::DOWN) {
                Keys::x = KeyState::RELEASED;
            }
            else {
                Keys::x = KeyState::UP;
            }
        }
        
        if((kDown & KEY_Y) || (kHeld & KEY_Y)) {
            if(Keys::y == KeyState::DOWN) {
                Keys::y = KeyState::HELD;
            }
            else {
                Keys::y = KeyState::DOWN;
            }
        }
        else {
            if(Keys::y == KeyState::DOWN) {
                Keys::y = KeyState::RELEASED;
            }
            else {
                Keys::y = KeyState::UP;
            }
        }
        
        if((kDown & KEY_L) || (kHeld & KEY_L)) {
            if(Keys::l == KeyState::DOWN) {
                Keys::l = KeyState::HELD;
            }
            else {
                Keys::l = KeyState::DOWN;
            }
        }
        else {
            if(Keys::l == KeyState::DOWN) {
                Keys::l = KeyState::RELEASED;
            }
            else {
                Keys::l = KeyState::UP;
            }
        }
        
        if((kDown & KEY_R) || (kHeld & KEY_R)) {
            if(Keys::r == KeyState::DOWN) {
                Keys::r = KeyState::HELD;
            }
            else {
                Keys::r = KeyState::DOWN;
            }
        }
        else {
            if(Keys::r == KeyState::DOWN) {
                Keys::r = KeyState::RELEASED;
            }
            else {
                Keys::r = KeyState::UP;
            }
        }
        
        if((kDown & KEY_START) || (kHeld & KEY_START)) {
            if(Keys::start == KeyState::DOWN) {
                Keys::start = KeyState::HELD;
            }
            else {
                Keys::start = KeyState::DOWN;
            }
        }
        else {
            if(Keys::start == KeyState::DOWN) {
                Keys::start = KeyState::RELEASED;
            }
            else {
                Keys::start = KeyState::UP;
            }
        }
        
        if((kDown & KEY_SELECT) || (kHeld & KEY_SELECT)) {
            if(Keys::select == KeyState::DOWN) {
                Keys::select = KeyState::HELD;
            }
            else {
                Keys::select = KeyState::DOWN;
            }
        }
        else {
            if(Keys::select == KeyState::DOWN) {
                Keys::select = KeyState::RELEASED;
            }
            else {
                Keys::select = KeyState::UP;
            }
        }
    }
}