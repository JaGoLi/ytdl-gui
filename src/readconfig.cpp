#include "readconfig.h"
#include <iostream>
#include <fstream>
#include <string>
#include <QDebug>
#include <QString>

readConfig::readConfig(std::string in_file) {
    this->in_file = in_file;
}

std::string readConfig::remove_whitespace(std::string input) {
    size_t last_pos = input.find_last_of(' ');
    if (last_pos == input.size() - 1) {
        input = input.substr(0, input.size() - 1);
        return remove_whitespace(input);
    }
    else {
        return input;
    }
}

void readConfig::get_values() {
    std::fstream curr_file;
    std::string curr_line;
    std::string curr_word;

    curr_file.open(in_file, std::ios::in);

    if (curr_file.is_open()) {
        int counter = 0;
        while (getline(curr_file, curr_line) && counter < 8) {
            std::string reduced = remove_whitespace(curr_line);
            int last_space = reduced.find_last_of(' ');
            values[counter++] = reduced.substr(last_space + 1, reduced.size() - last_space);
        }
    }

    curr_file.close();
}
