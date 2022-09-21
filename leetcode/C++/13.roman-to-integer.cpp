/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
#include <map>
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> map_Roman;

        map_Roman.insert({'I', 1});
        map_Roman.insert({'V', 5});
        map_Roman.insert({'X', 10});
        map_Roman.insert({'L', 50});
        map_Roman.insert({'C', 100});
        map_Roman.insert({'D', 500});
        map_Roman.insert({'M', 1000});
        int result = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (map_Roman[s[i]] < map_Roman[s[i + 1]])
            {
                result = result + map_Roman[s[i + 1]] - map_Roman[s[i]];
                i ++;
            }
            else
                result = result + map_Roman[s[i]];
        }
        return result;
    }
};
// @lc code=end
