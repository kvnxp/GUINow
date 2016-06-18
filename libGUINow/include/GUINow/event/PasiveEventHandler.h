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
    
    class PasiveEventHandler : public EventHandler {
    private:
        bool hasEvent;
    public:
        PasiveEventHandler();
        
        void trigger();
        
        void Event();
        
        bool getState();
    };
}

#endif /* PASIVEEVENTHANDLER_H */

