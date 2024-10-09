//
// Created by sami on 9/13/24.
//
#include <iostream>
#include "io.h"


int readNumbers() {
    std::cout << "Enter first number: " << '\n';
    int first_number {};
    std::cin >> first_number;
    std::cout << "Enter second number: " << '\n';
    int second_number {};
    std::cin >> second_number;

    return first_number + second_number;
}

void writeAnswer(int answer) {
    std::cout << "Answer: " << answer << '\n';
}
