#include "maincommand.h"
#include <iostream>
#include <cstring>
#include <unistd.h>


mainCommand::mainCommand(std::string args) {
       this->args = args;
}

void mainCommand::download() {
    int result_num = std::system(this->args.c_str());
    emit returnFinished(result_num);
    emit finished();
}

