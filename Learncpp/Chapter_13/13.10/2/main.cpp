#include <iostream>
#include <limits>

template <typename T>
struct fraction
{
    T numerator{};
    T denominator{};
};

void checkInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input. Please try again.\n";
}

template <typename T>
T getNumerator()
{
    T numerator;
    while (true)
    {
        std::cout << "Enter a value for the numerator: ";
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
template <typename T>
T getDenominator()
{
    T denominator{};
    while (true)
    {
        std::cout << "Enter a value for the denominator: ";
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

template <typename T>
void multiplyFraction(const fraction<T> &frac1, const fraction<T> &frac2)
{
    const T resultNumer = frac1.numerator * frac2.numerator;
    const T resultDenom = frac1.denominator * frac2.denominator;
    std::cout << '\n'
              << "The result of the multiplication is: " << resultNumer << '/' << resultDenom << '\n';
}

int main()
{

    // fraction frac1{getNumerator(), getDenominator()};
    std::cout << '\n';
    fraction<double> frac2{getNumerator<double>(), getDenominator<double>()};

    fraction<double> frac3{getNumerator<double>(), getDenominator<double>()};

    multiplyFraction(frac2, frac3);
}
