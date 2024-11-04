#include <utility>
#include <iostream>

template <typename T, typename U>
struct Pair
{
    T first;
    U second;
};

template <typename U = int, typename V = double, typename W = double>
struct Triple_d
{
    U first;
    V second;
    W third;
};

int main()
{
    Pair p1{1, 2.3f};

    std::cout << p1.first << '\n';
    std::cout << p1.second << '\n';

    Triple_d{2, 3, 6.654};
}