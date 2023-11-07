#include <vector>
#include <iostream>

int sum(std::vector<int> nums)
{
    if (nums.size() <= 0)
    {
        return 0;
    }
    else
    {
        nums.erase(nums.begin());
        return nums[0] + sum(nums);
    }
}