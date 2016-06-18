/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Gui.h
 * Author: bert
 *
 * Created on 31 januari 2016, 20:27
 */
#pragma once
#ifndef GUI_H
#define GUI_H

namespace GP {
    class Gui {
        static int fps;
        static bool run;
    public:
        static void setFPS(int fps);
        static bool loop();
        static void stop();
    };
}


#endif /* GUI_H */

