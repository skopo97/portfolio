#include <iostream>
#include <utility>
#include <limits>

int maybe{};

int getInteger()
{
    int a{};

    while (true)
    {
        std::cin >> a;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Enter a valid integer: ";
        }
        else
        {
            return a;
        }
    }
}

void swapValues(int &a, int &b)
{
    std::swap(a, b);
}

int main()
{

    [[maybe_unused]] int maybe{};

    std::cout << "Enter an integer: ";
    int integer{getInteger()};

    std::cout << "Enter a larger integer: ";

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
