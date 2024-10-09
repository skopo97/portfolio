#include <iostream>
#include <map>
#include <string>

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;

    std::map<int, std::string> numbersToWords;
    numbersToWords[1] = "one";
    numbersToWords[2] = "two";
    numbersToWords[3] = "three";
    numbersToWords[4] = "four";
    numbersToWords[5] = "five";
    numbersToWords[6] = "six";
    numbersToWords[7] = "seven";
    numbersToWords[8] = "eight";
    numbersToWords[9] = "nine";

    for (int n = a; n <= b; n++)
    {
        if (numbersToWords.find(n) != numbersToWords.end())
        {
            std::cout << numbersToWords[n] << std::endl;
        }
        else if (n > 9)
        {
            if (n % 2 == 0)
            {
                std::cout << "even\n";
            }
            else
            {
                std::cout << "odd\n";
            }
        }
    }
}
