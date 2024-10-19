#include <iostream>

int fizzbuzz(int value)
{
    for (int i{1}; i <= value; ++i)
    {
        bool seen{false};

        if (i % 3 == 0)
        {
            std::cout << "fizz";
            seen = true;
        }

        if (i % 5 == 0)
        {
            std::cout << "buzz";
            seen = true;
        }

        if (i % 7 == 0)
        {
            std::cout << "pop";
            seen = true;
        }

        if (!seen)
            std::cout
                << i;

        std::cout << '\n';
    }

    return 0;
}

int main()
{
    fizzbuzz(150);
    return 0;
}
