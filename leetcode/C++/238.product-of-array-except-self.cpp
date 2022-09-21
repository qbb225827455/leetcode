/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> iResult(nums.size(), 0);
        // Find maximum product in array nums[]
        int iMaxProduct = 1;
        for (int i : nums)
        {
            if (i != 0)
                iMaxProduct *= i;
        }

        // Count zero value in array nums[]
        int iCount_0 = 0;
        for (int i : nums)
        {
            if (i == 0)
                iCount_0++;
        }

        switch (iCount_0)
        {
        // No zero value in array nums[]
        case 0:
            for (int i = 0; i < nums.size(); i++)
            {
                iResult[i] = iMaxProduct / nums[i];
            }
            return iResult;

        // One zero value in array nums[]
        case 1:
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                    iResult[i] = iMaxProduct;
                else
                    iResult[i] = 0;
            }
            return iResult;

        // More than one zero value in array nums[]
        default:
            return iResult;
        }
    }
};
// int main(){
//     Solution ss;
//     vector<int> nums = { -1, 1, 0, -3, 3 };
//     ss.productExceptSelf(nums);
// }
// @lc code=end
