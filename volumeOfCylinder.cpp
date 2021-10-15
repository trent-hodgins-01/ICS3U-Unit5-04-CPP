// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/15/2021
// This is the Volume of Cylinder program
// The user enters in the radius and height of a cylinder in mm
// The program displays the volume

#include <iostream>
#include <cmath>

int CalculateVolume(int radius, int height) {
    // calculate the volume
    int volume;

    volume = M_PI * (radius * radius) * height;

    return volume;
}

main() {
    // This function gets radius, height, and displays volume

    int finishedMath;
    std::string radiusAsString;
    std::string heightAsString;
    int radius;
    int height;

    // input
    std::cout << "Enter in radius (mm):  ";
    std::cin >> radiusAsString;
    std::cout << "Enter in height (mm): ";
    std::cin >> heightAsString;

    // process
    try {
        radius = std::stoi(radiusAsString);
        height = std::stoi(heightAsString);

        // call function
        finishedMath = CalculateVolume(radius, height);

        std::cout << "\nVolume is " << finishedMath << "mm²" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
