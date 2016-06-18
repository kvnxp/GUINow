/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   KeyState.h
 * Author: bert
 *
 * Created on 4 februari 2016, 11:32
 */

#ifndef KEYSTATE_H
#define KEYSTATE_H

namespace GP {
    
    class KeyState {
        int state;
    public:
        static KeyState UP;
        static KeyState DOWN;
        static KeyState HELD;
        static KeyState RELEASED;
        
        KeyState(int state);
        
        bool operator == (const KeyState& k) const {
            return (this->state == k.state);
         }
    };
}

#endif /* KEYSTATE_H */

