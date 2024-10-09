#include <iostream>
#include <string>



int main() {

    std::cout << "Enter the name of person #1: ";
    std::string name1 {};
    std::getline(std::cin, name1);
    std::cout << "Enter the age of person #1: ";
    int age1 {};
    std::cin >> age1;

    std::cout << "Enter the name of person #2: ";
    std::string name2 {};
    std::getline(std::cin >> std::ws, name2);
    std::cout << "Enter the age of person #2: ";
    int age2 {};
    std::cin >> age2;

    if(age1 > age2) {
        std::cout << name1 << "(" << age1<< ")" << " is older than " << name2 << "(" << age2 << ")\n";
    }
    std::cout << name2 << "(" << age2<< ")" << " is older than " << name1 << "(" << age1 << ")\n";


    return 0;
}
