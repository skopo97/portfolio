
#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {

  int length = digits.size();

  for (auto i{length - 1}; i >= 0; --i) {
    if (digits[i] < 9) {
      digits[i] += 1;
      return digits;
    }
    if (digits[i] == 9) {
      digits[i] = 0;
    }
  }
  digits.insert(digits.begin(), 1);
  return digits;
}

int main() {

  std::vector<int> nums{13};
  std::vector<int> result = plusOne(nums);

  for (int num : result) {
    std::cout << num;
  }
}
