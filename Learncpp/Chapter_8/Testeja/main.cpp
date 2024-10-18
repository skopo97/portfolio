#include <iostream>

int main()
{

    int number{15};

    if (number % 3 == 0 && number % 5 == 0)
    {
        std::cout << "Fizzbuzz";
    }
    std::cout << "fail";
}
