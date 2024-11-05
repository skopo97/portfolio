#include <utility>
#include <iostream>

template <typename T>
struct foo
{
    T bar{};
};
template <typename T>
T getBar()
{
    T bar{};
    std::cin >> bar;
    return bar;
}

int main()
{

    // Is there a way to make getBar working without specifying it's type?
    foo newFoo{getBar<int>()};

    std::cout << newFoo.bar << '\n';
}