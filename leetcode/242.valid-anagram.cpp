/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return (s == t);
    }
};

// int main()
// {
//     string sInput1, sInput2;
//     char cBreak;
//     Solution s;
//     do
//     {
//         cin >> sInput1 >> sInput2 >> cBreak;
//         bool bAnswer = s.isAnagram(sInput1, sInput2);
//         cout << bAnswer << endl;
//     } while (cBreak == 'Y');
// }
// @lc code=end
