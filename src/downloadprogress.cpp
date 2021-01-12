#include <QDialog>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unistd.h>

#include "downloadprogress.h"

downloadProgress::downloadProgress(Ui::downloadStatus* input) {
    this->download_ui = input;
}

void downloadProgress::updateStatus() {
    download_ui->progressBar->setValue(0);

    //read file
    std::string last_line;
    int prog_num = 0;

    while (true) {
        std::string file_name = "/tmp/ytdl_prg";
        std::ifstream curr_file;
        curr_file.open(file_name.c_str(), std::fstream::in);
        if (curr_file.is_open()) {

            curr_file.seekg(-1, std::ios_base::end);
            if (curr_file.peek() == '\n') {
                curr_file.seekg(-1, std::ios_base::cur);
                //int curr_char = curr_file.tellg();
                for (int curr_char = curr_file.tellg(); curr_char > 0; curr_char--) {
                    if (curr_file.peek() == '\n') {
                        curr_file.get();
                        break;
                    }

                    curr_file.seekg(curr_char, std::ios_base::beg);
                }
            }
            getline(curr_file, last_line);
            if (!last_line.empty()) {
                int last_val = prog_num;
                prog_num = std::stoi(last_line);

                //break loop if at end
                if (prog_num < last_val ||  prog_num == 100) {
                    download_ui->progressBar->setValue(100);
                    break;
                }

                download_ui->progressBar->setValue(prog_num);
            }

        }
        sleep(1);
    }

    download_ui->progressBar->setFormat("Saving and converting...");
    emit finished();
}
