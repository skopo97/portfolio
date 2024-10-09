#include <vector>
#include <iostream>

void moveZeroes(std::vector<int> &nums)
{

    std::vector<int> newNums;
    int zeroCount = {0};

    for (int i : nums)
    {

        if (i != 0)
        {
            newNums.emplace_back(i);
        }
        else
        {
            zeroCount++;
        }
    }
    for (zeroCount; zeroCount > 0; zeroCount--)
    {
        newNums.emplace_back(0);
    }

    for (int i : newNums)
    {
        std::cout << i << ",";
    }
}
int main()
{
    std::vector<int> test = {0, 1, 0, 3, 12};

    moveZeroes(test);
}
