/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ScreenType.h
 * Author: bert
 *
 * Created on 4 februari 2016, 11:41
 */

#ifndef SCREENTYPE_H
#define SCREENTYPE_H

namespace GP {
    
    class ScreenType {
        int type;
    public:
        static ScreenType UNDEFINED;
        static ScreenType TOP;
        static ScreenType BOTTOM;
        
        ScreenType();
        ScreenType(int type);
        
        bool operator == (const ScreenType& s) const {
            return (this->type == s.type);
         }
    };
}

#endif /* SCREENTYPE_H */

