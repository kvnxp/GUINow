/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   EventHover.h
 * Author: bert
 *
 * Created on 20 juni 2016, 0:16
 */
#pragma once
#ifndef EVENTHOVER_H
#define EVENTHOVER_H

#include "Event.h"

namespace GP {
    
    class EventHover : public Event {
    public:
        void check(Rectangle2D rectangle);
    };
}

#endif /* EVENTHOVER_H */

