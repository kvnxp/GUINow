/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/FileSystem.h"

namespace GP {
    
    FileSystem::FileSystem() {

    }

    FileSystem::FileSystem(char* filename) {
    	this->setFile(filename);
    }

    FileSystem::~FileSystem() {

    }

    void FileSystem::setFile(char* filename) {
    	strcpy(this->filename, filename);
    }

    bool FileSystem::startWrite() {
    	/*std::ofstream temp(this->filename, std::ios::binary | std::ios::out);
    	this->streamWrite = &temp;

    	if (this->streamWrite.good() && this->streamWrite.is_open()) {
    		return true;
    	}*/

    	return false;
	}
    bool FileSystem::startRead() {
    	/*std::ifstream temp(this->filename, std::ios::binary | std::ios::in);
    	this->streamRead = &temp;

    	if (this->streamRead.good() && this->streamRead.is_open()) {
    		return true;
    	}*/

    	return false;
    }

    void FileSystem::write(void* content) {
    	//this->streamWrite.write(reinterpret_cast<const char*>(&content), sizeof(content));
    }

    void FileSystem::read(void* buffer, int length) {
    	//this->streamRead.read(reinterpret_cast<char*>(&buffer), sizeof(buffer));
    }
}