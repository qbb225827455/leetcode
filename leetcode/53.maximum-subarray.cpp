/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int result = INT_MIN;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            result = MaxNumber(result, sum) ? result : sum;

            if (sum < 0)
                sum = 0;
        }
        return result;
    }
    bool MaxNumber(int a, int b)
    {
        return (a > b);
    }
};
// @lc code=end
