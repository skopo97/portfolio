#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int> &numbers, int target)
{

    std::vector<int> newVector;
    size_t i = 0;
    size_t j = numbers.size() - 1;

    while (i < j)
    {

        if (numbers[i] + numbers[j] == target)
        {
            newVector.emplace_back(static_cast<int>(i + 1));
            newVector.emplace_back(static_cast<int>(j + 1));

            return newVector;
        }
        else if (numbers[i] + numbers[j] > target)
        {
            --j;
        }
        else if (numbers[i] + numbers[j] < target)
        {
            ++i;
        }
    }
    return {};
}

int main()
{
    std::vector<int> testCases = {5, 25, 75};
    std::vector<int> result = twoSum(testCases, 100);

    for (int i : result)
    {
        std::cout << i;
    }
}
