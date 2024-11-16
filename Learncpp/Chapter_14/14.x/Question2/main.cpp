#include <iostream>

class Fraction {
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
public:
    //Constructor
    explicit Fraction(int numerator = 0, int denominator = 1) : m_numerator{numerator}, m_denominator{denominator}{}

    //getFraction
    void getFraction() {

        std::cout << "Enter a value for numerator: ";
        std::cin >> m_numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> m_denominator;
        std::cout << '\n';
    }


    //Multiply
    Fraction multiply(const Fraction &f2) const
    {
        return Fraction{ m_numerator * f2.m_numerator, m_denominator * f2.m_denominator };
    }
    //print
    void printFraction() const {
        std::cout << m_numerator << '/' << m_denominator << '\n';
    }

};




int main()
{
    Fraction f1{};
    f1.getFraction();

    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}