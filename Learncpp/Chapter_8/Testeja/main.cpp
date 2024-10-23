#include <iostream>
#include <random>
#include <chrono>

int main()
{

    // std::mt19937 mt{static_cast<std::mt19937::result_type>(
    //    std::chrono::steady_clock::now().time_since_epoch().count())};

    std::mt19937 mt{std::random_device{}()};

    std::uniform_int_distribution die6{1, 6};
    for (int i{1}; i <= 10; i++)
    {
        /* code */
        std::cout << die6(mt) << '\t';

        if (i % 1 == 0)
        {
            std::cout << die6(mt) << '\n';
        }
    }

    return 0;
}
