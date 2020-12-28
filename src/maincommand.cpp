#include "maincommand.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>


mainCommand::mainCommand(std::string args) {
       this->args = args;
}

void mainCommand::download() {
    //remove temp files
    remove("/tmp/ytdl_prg");
    remove("/tmp/ytdl_stderr");


    //main command
    std::system(this->args.c_str());
    //std::cout << 100 << std::endl;

    //check for errors
    int errors = 0;
    std::string err_str;
    std::ifstream err_file("/tmp/ytdl_stderr");

    if (err_file.good()) {
        getline(err_file, err_str);
    }

    if (!err_str.empty()) {
        errors = 1;
    }

    emit returnFinished(errors);
    emit finished();
}

