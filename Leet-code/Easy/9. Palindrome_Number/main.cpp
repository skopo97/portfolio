#include <iostream>
#include <string>

bool isPalindrome(int x) {
  std::string n = std::to_string(x);

  for (size_t i = 0; i < n.length() / 2; i++) {
    if (n[i] != n[n.length() - i - 1]) {
      std::cout << "False" << std::endl;
      return false;
    }
  }

  std::cout << "True" << std::endl;
  return true;
}

int main() {
  std::cout << "Enter a number: ";
  int x{};
  std::cin >> x;
  isPalindrome(x);
  return 0;
}
