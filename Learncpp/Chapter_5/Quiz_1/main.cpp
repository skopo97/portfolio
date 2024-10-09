#include <iostream>
#include <string>
#include <iterator>

std::string getName() {
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name);
    return name;
}

int getAge() {
    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;
    return age;
}

    void getFullLength(const std::string_view name, const int x) {
    const int nameLength = static_cast<int>(std::ssize(name));
    const int fullLength = nameLength + x;

    std::cout << "Your age  + length of name is: " << fullLength << '\n';
}



int main() {
    const std::string name {getName()};
    const int age {getAge()};
    getFullLength(name, age);

    return 0;
}
