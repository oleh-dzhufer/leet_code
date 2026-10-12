/*You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
"*/

#include <vector>
#include <map>
#include <iostream>
std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> seen;
    for (int i = 0; i < nums.size(); i++)
    {
        // curr + x = target
        // x = target - curr
        int x = target - nums[i];
        if (auto it = seen.find(x); it != seen.end())
        {
            return {it->second, i};
        }
        seen[nums[i]] = i;
    }
    return {};
}

int main()
{
    std::vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    int target = 7;
    std::vector<int> res = twoSum(nums, target);
    for (int i = 0; i < 2; i++)
    {
        std::cout << res[i];
    }
    return 1;
}