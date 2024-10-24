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
    std::vector<int> nums = {10, 5, 6, 50, 5};

    std::vector<int> output = twoSum(nums, 55);

    if (!output.empty())
    {
        std::cout << "Indices: " << output[0] << ", " << output[1] << std::endl;
    }
    else
    {
        std::cout << "No two sum solution found." << std::endl;
    }

    return 0;
}
