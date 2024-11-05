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

    bool isEqual(IntPair p)
    {
        if (m_firstNum == p.m_firstNum && m_secondNum == p.m_secondNum)
            return true;
        else
            return false;
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

    std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
    std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

    return 0;
}