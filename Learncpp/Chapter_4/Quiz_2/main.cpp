#include <iostream>

int main() {
    std::cout << "Enter a double value: ";
    double n1{};
    std::cin >> n1;
    std::cout << "Enter a double value: ";
    double n2{};
    std::cin >> n2;

    std::cout << "Enter an operator (+, -, *, /): ";
    char op{};
    std::cin >> op;

    switch(op) {
        case '+':
            std::cout << n1 << " + " << n2 << " = " << n1 + n2 << '\n';
            break;
        case '-':
            std::cout << n1 << " - " << n2 << " = " << n1 - n2 << '\n';
            break;
        case '*':
            std::cout << n1 << " * " << n2 << " = " << n1 * n2 << '\n';
            break;
        case '/':
            if (n2 == 0) {
                std::cout << "Error: Division by zero\n";
            } else {
                std::cout << n1 << " / " << n2 << " = " << n1 / n2 << '\n';
            }
            break;
    }
    return 0;
}
