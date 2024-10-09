#include <iostream>
#include <string>

int main() {
    std::string a;
    std::string b;
    std::cin >> a;
    std::cin >> b;

    const size_t aLength = a.length();
    const size_t bLength = b.length();

    std::cout << aLength << " " << bLength << "\n";
    std::cout << a << b << "\n";

    const char aChar = a[0];
    const char bChar = b[0];

    a[0] = bChar;
    b[0] = aChar;


    std::cout << a << " " << b << "\n";
    return 0;
}
