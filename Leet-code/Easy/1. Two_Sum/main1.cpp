#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> hashMap;

    for (int i = 0; i < nums.size(); ++i)
    {
        int complement = target - nums[i];

        if (hashMap.count(complement))
        {
            return {hashMap[complement], i};
        }

        hashMap[nums[i]] = i;
    }
    return {};
}

int main()
{
    std::vector<int> nums;

    std::cout << "nums = ";
    for (int i = 0; i < 4; i++)
    {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }

    int target{};
    std::cout << "target = ";
    std::cin >> target;

    twoSum(nums, target);
}
