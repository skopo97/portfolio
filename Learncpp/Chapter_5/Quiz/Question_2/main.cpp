
#include <iostream>

int main()
{
    std::cout << "How old are you?\n";

    int age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    constexpr int legalDrivingAge{16};
    if(age >= legalDrivingAge)
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << ".\n";

    return 0;
}