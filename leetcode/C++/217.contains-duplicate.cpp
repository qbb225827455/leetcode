/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort( nums.begin(), nums.end() );
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};
// int main()
// {
//     Solution s;
//     vector<int> v = {1, 2, 3, 4};
//     bool bAnswer = s.containsDuplicate(v);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     cout << "Answer = " << bAnswer << endl;
// }
// @lc code=end
