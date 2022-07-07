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
        int iResult = INT_MIN;
        int iSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            iSum += nums[i];
            iResult = MaxNumber(iResult, iSum) ? iResult : iSum;

            if (iSum < 0)
                iSum = 0;
        }
        return iResult;
    }
    bool MaxNumber(int a, int b)
    {
        return (a > b);
    }
};
// @lc code=end
