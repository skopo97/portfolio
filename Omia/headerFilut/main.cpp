#include <iostream>

#include "math_functions.h"

int main() {

  bool running{true};
  std::cout << "Welcome to calculator app" << std::endl;

  int a{};
  int b{};
  std::cout << "Enter first number : ";
  getNumber(a);
  std::cout << "Enter second number : ";
  getNumber(b);

  while (running)

  {
    std::cout << "a value = " << a << "and b value " << b << '\n';

    std::cout << '\n';
    std::cout << "Enter operation\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Set new numbers\n";
    std::cout << "0. Exit\n";

    int option{};
    std::cin >> option;
    if (option == 0) {
      running = false;
      std::cout << "Exiting, thanks for using my calculator";
      return 0;
    }

    if (option == 1) {
      add(a, b);
      std::cout << "Numbers " << a << " and " << b
                << " added together = " << add(a, b) << '\n';
    }

    if (option == 4) {
      while (b == 0) {
        std::cout << "Cannot divide by 0, enter a new number\n";
        getNumber(b);
      }
      divide(a, b);
      std::cout << "Numbers " << a << " and " << b
                << " divided = " << divide(a, b) << '\n';
    }

    if (option == 5) {
      getNumber(a);
      getNumber(b);
    }
  }
}
