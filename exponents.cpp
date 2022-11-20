// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program is an exponents calculator

#include <iostream>
#include <string>

int main() {
    // this function calculates the exponent of a number
    std::string stringNumber;
    int intNumber;
    float floatNumber;
    int loopCounter = 0;
    int answer = 1;

    // input
    std::cout << "This program calculates the"
    "exponents of an integer." << std::endl;
    std::cout << "Enter a integer: ";
    std::cin >> stringNumber;

    // process and output
    try {
        intNumber = std::stoi(stringNumber);
        floatNumber = std::stof(stringNumber);
        if (intNumber < 0) {
            std::cout << "This is not a positive integer.";
        }
        if (floatNumber != intNumber) {
            std::cout << "Invalid Integer";
        } else {
            for (int loopCounter = 0; loopCounter <= intNumber; loopCounter++) {
                answer = loopCounter * loopCounter;
                std::cout << loopCounter << "² = " << answer << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid input.";
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
