#include <iostream>
#include <vector>
//#include <algorithm>

std::vector<int> twoSum(std::vector<int> &numbers, int target)
{

    std::vector<int> newVector;
    size_t i = 0;
    size_t j = numbers.size() - 1;

    while (i < j)
    {

        if (numbers[i] + numbers[j] == target)
        {
            newVector.emplace_back(static_cast<int>(i));
            newVector.emplace_back(static_cast<int>(j));

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
    std::vector<int> testCases = {1,5,7,11,12,19,25};
    //std::sort(testCases.begin(), testCases.end());

    std::vector<int> result = twoSum(testCases, 19);

    for (int i : result)
    {
        std::cout << i << " ";
    }

}
