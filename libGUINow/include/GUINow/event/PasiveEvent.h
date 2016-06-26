/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PasiveEvent.h
 * Author: bert
 *
 * Created on 20 juni 2016, 0:16
 */
#pragma once
#ifndef PASIVEEVENT_H
#define PASIVEEVENT_H

namespace GP {
    
    class PasiveEvent {
    protected:
    	bool hasEvent;
    public:
        virtual void trigger();

        virtual bool getState();
    };
}

#endif /* PASIVEEVENT_H */

