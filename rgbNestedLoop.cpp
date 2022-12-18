// Copyright (c) 2022 SpencerS All rights reserved.
//
// Created by: SpencerS
// Created on: November 20, 2022
// A program which displays all RGB values from 0-256

#include <iostream>

int main() {
    // For all red values
    for (int red = 0; red <= 255; red++) {
        // For all green values
        for (int green = 0; green <= 255; green++) {
            // For all blue values
            for (int blue = 0; blue <= 255; blue++) {
                // Displays all RGB values from 0-256 in order
                // with colours
                printf("\033[1;38;2;%i;%i;%imRGB(%i, %i, %i)",
                       red, green, blue, red, green, blue);
                // for a return courage
                std::cout << "" << std::endl;
            }
        }
    }
}
