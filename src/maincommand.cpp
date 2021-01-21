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
    int sys_return = std::system(this->args.c_str());

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

    if (sys_return != 0) {
        errors = 1;
    }

    //remove progress file
    remove("/tmp/ytdl_prg");

    emit returnFinished(errors);
    emit finished();
}

