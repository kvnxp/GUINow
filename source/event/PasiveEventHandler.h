/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PasiveEventHandler.h
 * Author: bert
 *
 * Created on 26 januari 2016, 0:16
 */
#pragma once
#ifndef PASIVEEVENTHANDLER_H
#define PASIVEEVENTHANDLER_H

#include "EventHandler.h"

namespace GP {
    
    class PasiveEventHandler : EventHandler {
    private:
        bool trigger;
    public:
        PasiveEventHandler() {
            this->trigger = false;
        }
        
        void trigger() {
            this->trigger = true;
        }
        
        void Event() {
            if(this->trigger) {
                this->trigger = false;
                this->Event();
            }
        }
    };
}

#endif /* PASIVEEVENTHANDLER_H */

