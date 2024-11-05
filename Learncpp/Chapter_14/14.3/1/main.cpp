#include <iostream>
#include <string_view>
// Provide the definition for IntPair and the print() member function here

class IntPair
{
public:
    int m_firstNum{};
    int m_secondNum{};

    void print(std::string_view prefix)
    {
        std::cout << prefix << "(" << m_firstNum << ", " << m_secondNum << ")\n";
    }
};

int main()
{
    IntPair p1{1, 2};
    IntPair p2{3, 4};

    std::cout << "p1: ";
    p1.print("Pair");

    std::cout << "p2: ";
    p2.print("Pair");

    return 0;
}