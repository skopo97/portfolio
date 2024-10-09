#include <string>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::stringstream ss(input);

    std::vector<int> numbers;
    int value;


    char ch;
    while (ss >> value) {
        numbers.push_back(value);
        ss >> ch;
    }

    for (int i: numbers) {
        std::cout << i << std::endl;
    }
}


