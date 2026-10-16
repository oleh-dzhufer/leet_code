#include <vector>
#include <iostream>
#include <set>

int removeDuplicates(std::vector<int> &nums)
{
    int write = 1;
    for (int read = 1; read < nums.size(); ++read)
    {
        if (nums[read] != nums[write - 1])
        {
            nums[write] = nums[read];
        }
    }
    return static_cast<int>(write);
}