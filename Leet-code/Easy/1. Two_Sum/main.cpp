#include <iostream>
#include <vector>

int Two_Sum(const std::vector<int>& nums, const int target) {

    for(size_t i = 0; i < nums.size(); i++) {
        for (size_t j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                std::cout << "[" << i << ", " << j << "]" << std::endl;

            }
        }
    }


    return 0;
}

int main() {
    std::vector<int> nums;

    std::cout << "nums = ";
    for (int i = 0; i < 4; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int target{};
    std::cout << "target = ";
    std::cin >> target;

    Two_Sum(nums, target);

}