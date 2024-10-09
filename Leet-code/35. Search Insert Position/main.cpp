#include <iostream>
#include <vector>


int searchInsert(std::vector<int>& nums, int target) {

    size_t size = nums.size();
    //if target larger than last index
    if(target > nums[size-1]) {
        return static_cast<int>(size);
    }

    for(size_t j = 0; j < size; j++) {
        if(nums[j] >= target) {
            return static_cast<int>(j);
        }
    }

    return static_cast<int>(size);
}
int main()
{
    bool syota = true;
    std::vector<int> nums;
    while(syota) {
        int luku;
        std::cout << "Syötä luku: ";
        std::cin >> luku;
        if(luku == 0) {
            syota = false;
        } else {
            nums.push_back(luku);
        }
    }

    std::cout << searchInsert(nums, 5);
}
