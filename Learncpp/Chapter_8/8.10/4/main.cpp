#include <iostream>

int fizzbuzz(int value)
{

        for (int i{1}; i <= value; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "fizzbuzz\n";
        }
        else if (i % 5 == 0)
        {
            std::cout << "buzz\n";
        }
        else if (i % 3 == 0)
        {
            std::cout << "fizz\n";
        }
        else
        {
            std::cout << i << '\n';
        }
    }

    return 0;
}
int main()
{

    fizzbuzz(15);
}
