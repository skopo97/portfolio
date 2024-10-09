#include <iostream>

bool isPrime(int n) {
    if (n == 0 || n == 1) {
        std::cout << "The number is not prime";
        return false;
    }
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                std::cout << "The number is not prime";
                return false;
            }
        }
        std::cout << "The number is prime";
        return true;
    }
}

int main() {
    std::cout << "Enter a number between 0 and 9";
    int number{};
    std::cin >> number;

    isPrime(number);


    return 0;
}
