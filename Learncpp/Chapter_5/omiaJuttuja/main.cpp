#include <iostream>
#include <limits>
#include <vector>
#include <string_view>
#include "sum.h"
int add(int a, int b)
{
    return a + b;
}

constexpr double square(const double x)
{
    return x * x;
}

void printLine(const std::string_view str)
{
    std::cout << str << "\n";
}

int main()
{

    // if true, return 1, else 0
    int x = (6 > 9) ? 1 : 0;
    std::cout << x << '\n';

    std::cout << "using a function from .h file : " << sum(5, 4) << '\n';
    ;
    int t{add(5, 6)};

    std::cout << "Added together : " << t << '\n';

    double r{};
    std::cout << "Enter a number to square: ";
    std::cin >> r;
    std::cout << "Squared number: " << square(r) << '\n';

    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Your name is: " << name << '\n';

    const std::string str{"Hello world!"};
    printLine(str);

    std::vector<int> nums = {1, 2, 3, 4, 5};
    size_t numsSize = nums.size();

    std::cout << "Size of nums: " << numsSize << '\n';

    return 0;
}
