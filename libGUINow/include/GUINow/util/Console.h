/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Font.h
 * Author: bert
 *
 * Created on 3 februari 2016, 21:22
 */

#ifndef CONSOLE_H
#define CONSOLE_H

#include <3ds.h>
#include "Vector2.h"
#include "../tools/Text.h"
#include "../draw/Drawable.h"

namespace GP {
    
    class Console : public Drawable{
    private:
    	Vector2 cursor;
    	Text* text;
    	int textCounter;
    public:
        static Console console;

        Console();

        void addText(char* text);
        int draw(u8* screen);
    };
}

#endif /* FONT_H */

