#include "Day15.h"

#include "../lib.h"

void Day15::run() {
    constexpr auto file_path = "./inputs/day15.input";
    std::ifstream infile(file_path);

    char ch;
    auto idx = 0;
    while (infile >> std::noskipws >> ch) {
        if (ch == '\n') {
            idx++;
            continue;
        }
    }
}