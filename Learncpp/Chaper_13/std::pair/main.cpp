#include <utility>
#include <iostream>

using speedOfLight = float;
speedOfLight c{299792.458};

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