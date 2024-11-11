#include <algorithm>
#include <vector>
#include <iostream>


bool containsDuplicate(std::vector<int> &nums){
    bool  duplicate{false};

    std::sort(nums.begin(), nums.end());

    for (size_t i = 1; i < nums.size(); ++i)
      {
        if(nums[i] == nums[i - 1]){
            return true;
        }
    }


    return duplicate;
}


int main(){
    std::vector<int> nums {1,2,3,1};

    std::cout << containsDuplicate(nums);

}