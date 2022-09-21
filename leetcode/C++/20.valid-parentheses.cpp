/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <iostream>
#include <stack>
#include <map>
using namespace std;
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st_Brackets;
        map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };

        for (int i = 0; i < s.size(); i++)
        {
            if (!mp.count(s[i]))
                st_Brackets.push(s[i]);
            else
            {
                if (st_Brackets.empty() || st_Brackets.top() != mp[s[i]])
                    return false;
                st_Brackets.pop();
            }
        }
        return st_Brackets.empty();
    }
};

// @lc code=end
