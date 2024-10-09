#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int> &nums)
{
    if (nums.size() == 0)
    {
        return 0;
    }

    int count = {1};
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 1])
        {
            nums[count] = nums[i];
            count++;
        }
    }

    std::cout << count << "," << " nums = ";
    for (int t : nums)
    {
        std::cout << t;
    }

    return count;
}
int main()
{

    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    std::cout << removeDuplicates(nums);
}
