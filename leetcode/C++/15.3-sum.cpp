/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<vector<int> > threeSum(vector<int> &nums)
    {
        vector<vector<int> > iResult;
        int point_j, point_k;
        int i3Sum;
        sort(nums.begin(), nums.end());
        // for (int i : nums)
        //     cout << i << " ";
        // cout << endl;

        // If array num.size small than 3 , return []
        if (nums.size() < 3)
            return {};

        for (int i = 0; i < nums.size() - 1; i++)
        {
            point_j = i + 1;
            point_k = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            while (point_j < point_k)
            {
                i3Sum = nums[i] + nums[point_j] + nums[point_k];
                if (i3Sum == 0)
                {
                    cout << i << " " << point_j << " " << point_k << endl;
                    iResult.push_back({nums[i], nums[point_j], nums[point_k]});
                    while (point_j < point_k && nums[point_j] == nums[point_j + 1])
                        point_j++;
                    while (point_j < point_k && nums[point_k] == nums[point_k - 1])
                        point_k--;
                    point_j++;
                    point_k--;
                }
                else if (i3Sum > 0)
                    point_k--;
                else if (i3Sum < 0)
                    point_j++;
            }
        }
        return iResult;
    }
};

// int main()
// {
//     vector<vector<int> > v;
//     Solution s;
//     vector<int> inp = {-1, 0, 1, 2, -1, -4};
//     vector<int> inp2;
//     v = s.threeSum(inp2);
// }
// @lc code=end
