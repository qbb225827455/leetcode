/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = i;
        for (int i = 0; i < nums.size(); i++)
        {
            int n = target - nums[i];
            if (mp.count(n) && mp[n] != i)
                return { i, mp[n] };
        }
        return {};
        // for (int i = 0; i < nums.size(); i++)
        // {
        //     for (int j = i + 1; j < nums.size(); j++)
        //     {
        //         if (target == nums[i] + nums[j])
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};
    }
};
// @lc code=end
