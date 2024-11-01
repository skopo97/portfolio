#include <iostream>
#include <limits>

struct fraction
{
    int numerator{};
    int denominator{};
};

void checkInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please try again.\n";
}

int getNumerator()
{
    int numerator;
    while (true)
    {
        std::cout << "Enter a integer value for the numerator: ";
        std::cin >> numerator;
        if (std::cin.fail())
        {
            checkInput();
        }
        else
        {
            return numerator;
        }
    }
}

int getDenominator()
{
    int denominator{};
    while (true)
    {
        std::cout << "Enter a integer value for the denominator: ";
        std::cin >> denominator;
        if (std::cin.fail())
        {
            checkInput();
        }
        else if (denominator == 0)
        {
            std::cout << "The denominator cannot be zero. Please try again.\n";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            return denominator;
        }
    }
}

void multiplyFraction(const fraction &frac1, const fraction &frac2)
{
    const int resultNumer = frac1.numerator * frac2.numerator;
    const int resultDenom = frac1.denominator * frac2.denominator;
    std::cout << '\n'
              << "The result of the multiplication is: " << resultNumer << '/' << resultDenom << '\n';
}

int main()
{

    // fraction frac1{getNumerator(), getDenominator()};
    std::cout << '\n';
    fraction frac2{getNumerator(), getDenominator()};

    fraction frac3{getNumerator(), getDenominator()};

    multiplyFraction(frac2, frac3);
}
