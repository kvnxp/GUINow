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

#include <3ds.h>
#include <3ds/services/fs.h>

#include <cstring>
#include <fstream>

namespace GP {
    
    class FileSystem {
    private:
    	char* filename;

    	std::ifstream streamRead;
    	std::ofstream streamWrite;

    public:
        FileSystem();
        FileSystem(char* filename);
        ~FileSystem();
        
        void setFile(char* filename);

        bool startWrite();
        bool startRead();

        void write(void* content);
        void read(void* buffer, int length);
    };
}

#endif /* FileSystem_H */

