#include <iostream>
#include <vector>

int removeElement(std::vector<int> &nums, int val)
{
    int k{0};

    for (std::size_t i = 0; i < nums.size(); ++i)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            ++k;
        }
    }

    nums.resize(k);

    return k;
}

int main()
{

    std::vector<int> nums{3, 2, 2, 3};
    std::cout << removeElement(nums, 3);
}
