#include "maincommand.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <QDebug>


mainCommand::mainCommand(std::string args) {
    //setup args
    ytdl_command = QString::fromStdString(args);

    //setup command
    command = new QProcess(this);
    shell_prog = "bash";
    arguments << "-c" << ytdl_command;

    command->setStandardOutputFile("/tmp/ytdl_prg");
}

void mainCommand::download() {
    //output command before exec
    qDebug() << "Youtube-dl command: " << ytdl_command;

    //remove temp files
    remove("/tmp/ytdl_prg");
    remove("/tmp/ytdl_stderr");

    //conections
    connect(command, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
            this, [=](int exitCode, QProcess::ExitStatus exitStatus){processResult(exitCode, exitStatus);});

    //main command
    command->start(shell_prog, arguments);
}

void mainCommand::processResult(int result_num, QProcess::ExitStatus result_enum) {
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

    if (result_enum != 0) {
        qDebug() << "QProcess failed with error code: " << result_num;
        errors = 1;
    }

    //remove progress file
    remove("/tmp/ytdl_prg");

    emit returnFinished(errors);
    emit finished();
}
