#include <iostream>

class Fraction {
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
public:
    //Constrcutor
    Fraction(){};

    //getFraction
    Fraction getFraction() {
        Fraction temp{};
        std::cout << "Enter a value for numerator: ";
        std::cin >> temp.m_numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> temp.m_denominator;
        std::cout << '\n';

        return temp;
    }


    //Multiply
    void multiply(const Fraction &f2)
     {
        const int resultNumer {m_numerator * f2.m_numerator};
        const int resultDenom {m_denominator * f2.m_denominator};
        std::cout << '\n'
              << "The result of the multiplication is: " << resultNumer << '/' << resultDenom << '\n';
     }

};


int main()
{
    Fraction f1{ f1.getFraction() };
    Fraction f2{ f2.getFraction() };

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2);

    return 0;
}