// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// This program calculates the perimeter of a square
//     with inputted side length

#include <iostream>


float perimeterCalculator() {
    
}


int main() {
    // I calculate circumference of a circle
    std::string strSideLength;
    float fltSideLength;
    float perimeter;

    while (true) {
        std::cout << "";
        std::cin >> strSideLength;
        try {
            fltSideLength = std::stof(strSideLength);
            if (fltSideLength <= 0) {
                continue;
            }
        }
        catch (std::invalid_argument) {
            continue;
        }
        std::cout << "test";
        break;
    }


    // output
    std::cout << "" << std::endl;
    std::cout << "Circumference is " << " mm" << std::endl;
    std::cout << "\nDone." << std::endl;
}
