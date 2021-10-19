// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program calculates the volume of a triangular prism

#include <iostream>
#include <cmath>
#include <string>

float volumeCalculator(float baseLength, float altitude, float height) {
    // This function calculates teh volume of a triangular prism
    float volume = (baseLength * altitude) / 2 * height;
    // https://stackoverflow.com/questions/14369673
    // /round-double-to-3-points-decimal
    volume = round(volume * 1000.0) / 1000.0;

    return volume;
}

int main() {
    // This function is the main function
    std::string userBaseLengthString;
    std::string userAltitudeString;
    std::string userHeightString;
    float userBaseLength;
    float userAltitude;
    float userHeight;

    std::cout << "This calculates the volume of a triangular prism."
    << std::endl;

    while (true) {
        try {
            // input & process
            std::cout << "Enter the base length (cm): ";
            std::cin >> userBaseLengthString;
            userBaseLength = std::stof(userBaseLengthString);

            std::cout << "Enter the altitude (height of the triangle): ";
            std::cin >> userAltitudeString;
            userAltitude = std::stof(userAltitudeString);

            std::cout << "Enter the height of the prism (cm): ";
            std::cin >> userHeightString;
            userHeight = std::stof(userHeightString);

            // call function & output
            std::cout << "\nThe volume of the triangular prism is " <<
            volumeCalculator(userBaseLength, userAltitude, userHeight) <<
            " cm³." << std::endl;

            break;
        } catch (...) {
            std::cout << "Invalid Input." << std::endl;
        }
    }

    std::cout << "\nDone." << std::endl;
}
