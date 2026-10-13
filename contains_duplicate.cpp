/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true*/
#include <vector>
#include <map>
#include <iostream>

using std::map;
using std::vector;

bool containsDuplicate(vector<int> &nums)
{
    vector<int> seen;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int x = 0; x < seen.size(); x++)
        {
            if (nums[i] == seen[x])
            {
                return true;
            }
        }
        seen.push_back(nums[i]);
    }
    return false;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    std::cout << containsDuplicate(nums);
}