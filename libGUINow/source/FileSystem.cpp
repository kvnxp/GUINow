/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "GUINow/util/FileSystem.h"
#include <vector>
#include <string>

namespace GP {
    
    FileSystem::FileSystem() {
		romfsInit();
    	chdir("sdmc:/");
    }

    FileSystem::~FileSystem() {
		romfsExit();
    }

    std::string FileSystem::list(std::string directory) {
    	std::vector<std::string> result;
    	std::string t = "test,";

	    bool hasSlash = directory.size() != 0 && directory[directory.size() - 1] == '/';
	    const std::string dirWithSlash = hasSlash ? directory : directory + "/";

	    DIR* dir = opendir(dirWithSlash.c_str());
	    if(dir == NULL) {
	        return "nope";// result;
	    }

	    while(true) {
	        struct dirent* ent = readdir(dir);
	        if(ent == NULL) {
	            break;
	        }

	        std::string path = dirWithSlash + std::string(ent->d_name);
	        result.push_back(path);
	        t = t + path;
	    }

	    closedir(dir);
    	return t;
    }

    void FileSystem::create(std::string filename, u8* data) {
    	FILE * pFile;
    	chdir("sdmc:/");
		pFile = fopen ("tekst.txt", "wb");
		fwrite (data , sizeof(u8), sizeof(data), pFile);
		fclose (pFile);
    }

    void FileSystem::read(char* file, char* buffer) {
    	FILE* myfile = fopen(file, "rb");
		if (myfile != NULL) {
		    short stringlength = 6;
		    fseek(myfile , 0, SEEK_SET);
		    fread(&buffer[0], sizeof(char), (size_t)stringlength, myfile);
		    fclose(myfile );
		}
    }
}