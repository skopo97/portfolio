#include <vector>
#include <iostream>
int singleNumber(std::vector<int> &nums)
{

    int seenOnce{};

    for (int i : nums)
    {
        seenOnce ^= i;
       }
    return seenOnce;
}

int main()
{

    std::vector<int> test = {2, 2, 1};

    std::cout << singleNumber(test);
}
