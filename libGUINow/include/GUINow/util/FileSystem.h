/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FileSystem.h
 * Author: bert
 *
 * Created on 16 juni 2016, 20:56
 */

#ifndef FileSystem_H
#define FileSystem_H

#include <sys/unistd.h>
#include <dirent.h>

#include <algorithm>
#include <cstdio>
#include <string>

#include <3ds.h>
#include <3ds/services/fs.h>

namespace GP {
    
    class FileSystem {
    private:
    public:
        FileSystem();
        ~FileSystem();
        std::string list(std::string directory);
        void create(std::string filename, u8* data);
        void read(char* file, char* buffer);
    };
}

#endif /* FileSystem_H */

