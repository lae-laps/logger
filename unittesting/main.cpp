// main.cpp

// This file is intended to be used as a test of the library for development
// purposes and unittesting

#include <iostream>

#include "logger.hpp"

using namespace std;

int main() {
    Logger::setLevel(0);

    Logger::log(2, "Adksmlfmdslkfm lfdkms lmdsdlksmf");

    cout << "it works" << endl;

    return 0;
}
