// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// This program calculates the perimeter of a square
//     with inputted side length

#include <iostream>


float perimeterCalculator(float sideLength) {
    // I calculate perimeter of a square
    float perimeter;

    // squares have four sides
    perimeter = sideLength * 4;
    return perimeter;
}


int main() {
    // I am main, I manage input and output
    std::string strSideLength;
    float fltSideLength;
    float perimeter;

    // input & process
    while (true) {
        // I repeat until valid input is given
        std::cout << "Enter the side length of your square (cm): ";
        std::cin >> strSideLength;

        // check if input is string or impossible to be edge length
        try {
            fltSideLength = std::stof(strSideLength);
            if (fltSideLength <= 0) {
                // length can't be negative nor non-existant
                std::cout << "Enter valid side length" << std::endl;
                continue;
            }
        }
        catch (std::invalid_argument) {
            std::cout << "Enter valid side length" << std::endl;
            continue;
        }
        // process
        perimeter = perimeterCalculator(fltSideLength);
        break;
    }


    // output
    std::cout << "The perimeter of your square is " << perimeter;
    std::cout << " cm." << std::endl;
    std::cout << "\nDone." << std::endl;
}
