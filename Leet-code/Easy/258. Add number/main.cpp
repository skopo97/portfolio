#include <iostream>
#include <vector>
#include <string>

int addDigits(int x)
{

    while (x >= 10)
    {
        std::string number = std::to_string(x);
        int sum = 0;
        for (char c : number)
        {
            sum += static_cast<int>(c) - '0';
        }

        x = sum;
    }

    return x;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << addDigits(n);
}
