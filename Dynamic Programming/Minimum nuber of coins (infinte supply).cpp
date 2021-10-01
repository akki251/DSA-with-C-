/*
 * @lc app=leetcode id=322 lang=cpp
 *
 * [322] Coin Change
 */

// @lc code=start
class Solution
{
public:
    int coinChange(vector<int> &a, int sum)
    {

        int n = a.size();
        int output[n + 1][sum + 1];

        for (int j = 0; j <= sum; j++)
        {
            output[0][j] = INT_MAX-1;
        }
  
        for (int i = 0; i <= n; i++)
        {
            output[i][0] = 0;
        }

       
        for (int i = 1; i <= n; i++)
        {
            for ( int j = 1; j <= sum; j++)
            {
                if (a[i - 1] > j)
                {
                    output[i][j] = output[i - 1][j];
                }
                else
                {
                    output[i][j] = min(output[i - 1][j], 1 + output[i][j - a[i - 1]]);
                }
            }
        }
        if(output[n][sum] == INT_MAX-1)
        return -1;
        return output[n][sum];
    }
};
// @lc code=end
