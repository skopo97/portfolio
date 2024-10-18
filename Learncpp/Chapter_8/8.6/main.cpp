#include <iostream>

int calculate(int x, int y, char c)
{
    switch (c)
    {
    case '+':
        return x + y;

    case '-':
        return x - y;

    case '*':
        return x * y;

    case '/':
        return x / y;

    case '%':
        return x % y;

    default:
        std::cout << "invalid operator";
        return 0;
    }
}

int main()
{

    std::cout << "Syötä ensimmäinen numero: ";
    int numero1{};
    std::cin >> numero1;

    std::cout << "Syötä toinen numero: ";
    int numero2{};
    std::cin >> numero2;

    std::cout << "Syötä toiminto +,-,*,/ tai % : ";
    char toiminto{};
    std::cin >> toiminto;

    int vastaus{calculate(numero1, numero2, toiminto)};

    std::cout << numero1 << ' ' << toiminto << ' ' << numero2 << " = " << vastaus;
}
