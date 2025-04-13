// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: April 13th, 2025
// This program asks the user to enter a positive number
// the input should only be a whole number, and then use the
// while loop to add and display the sum to the user.

#include <iostream>
#include <string>

int main() {
    int loopCounter = 0;
    int sum = 0;
    std::string posIntAsString;

    std::cout << "Enter a positive number: ";
    std::cin >> posIntAsString;

    try {
        int posNumber = stoi(posIntAsString);

        if (posNumber < 0) {
            std::cout << posNumber << " is not a positive number." << std::endl;
        } else {
            while (loopCounter <= posNumber) {
                std::cout << "The loop counter is " << loopCounter << std::endl;
                sum = sum + loopCounter;
                loopCounter = loopCounter + 1;

                std::cout << "The sum is " << sum << std::endl;
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid integer." << std::endl;
        std::cout << "Your input is an invalid integer" << std::endl;
    }
    std::cout << "Thank you and have a great day.";
}
