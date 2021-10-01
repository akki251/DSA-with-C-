/*
 * @lc app=leetcode id=132 lang=cpp
 *
 * [132] Palindrome Partitioning II
 */

// @lc code=start
class Solution
{
public:
    int output[2001][2001];
    bool isPallindrome(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }
    int helper(string s, int i, int j)
    {

        if (i >= j)
            return 0;

        if (output[i][j] != -1)
            return output[i][j];

        if (isPallindrome(s, i, j))
            return output[i][j] = 0;

        int ans = INT_MAX;
        for (int k = i; k <= j - 1; k++)
        {
            int temp = helper(s, i, k) + helper(s, k + 1, j) + 1;
            ans = min(temp, ans);
        }

        return output[i][j] = ans;
    }
    int minCut(string s)
    {

        int i = 0;
        int j = s.length() - 1;
        memset(output, -1, sizeof(output));
        return helper(s, i, j);
    }
};
// @lc code=end
