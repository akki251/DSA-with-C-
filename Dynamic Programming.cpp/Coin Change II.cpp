/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution
{
public:
    int change(int sum, vector<int> &a)
    {
        int n = a.size();

        int output[n + 1][sum + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i == 0)
                    output[i][j] = 0;
                if (j == 0)
                    output[i][j] = 1;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (a[i - 1] > j)
                    output[i][j] = output[i - 1][j];
                else
                {
                    output[i][j] = output[i - 1][j] + output[i][j - a[i - 1]];
                }
            }
        }


        return output[n][sum];
    }
};
// @lc code=end
