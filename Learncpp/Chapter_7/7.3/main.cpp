#include <iostream>
#include <utility>

int getInteger()
{
    int a;
    std::cin >> a;
    return a;
}

void swapValues(int &a, int &b)
{
    std::swap(a, b);
}

int main()
{

    std::cout << "Enter an integer: \n";
    int integer{getInteger()};

    std::cout << "Enter a larger integer: \n";

    int largerInteger{getInteger()};

    if (integer > largerInteger)
    {
        std::cout << "Swapping the values \n";
        swapValues(integer, largerInteger);
        std::cout << "The smaller value is " << largerInteger << '\n';
        std::cout << "The larger value is " << integer << '\n';
    }
    else
    {
        std::cout << "The smaller value is " << integer << '\n';
        std::cout << "The larger value is " << largerInteger << '\n';
    }
}
