/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int iMin = INT_MAX;
        int iProfit_IfSoldToday = 0;
        int iProfit_MAX = 0;

        for (int i = 0; i < prices.size(); i++)
        {
            //Find the minimum price we bought
            if (iMin > prices[i])
                iMin = prices[i];

            iProfit_IfSoldToday = prices[i] - iMin;

            //Find the maximum profit
            if (iProfit_MAX < iProfit_IfSoldToday)
                iProfit_MAX = iProfit_IfSoldToday;
        }
        return iProfit_MAX;
    }
};

// int main()
// {
//     Solution s;
//     vector<int> vInput = {7, 7, 5, 3, 6, 4};
//     int iAnswer = s.maxProfit(vInput);
//     cout << iAnswer << endl;
// }
// @lc code=end
