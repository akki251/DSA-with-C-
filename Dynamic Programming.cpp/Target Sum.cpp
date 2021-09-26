class Solution {
public:
    int countSubsetSum(vector<int>& nums, int sum, int n)
    {
        int t[n + 1][sum + 1];
        for(int i = 0; i < n + 1; i++)
        {
            for(int j = 0; j < sum + 1; j++)
            {
                if(j == 0)
                    t[i][j] = 1;
                else
                    t[i][j] = 0;
            }
        }
        for(int i = 1; i < n + 1; i++)
        {
            for(int j = 0; j < sum + 1; j++)
            {
                if(nums[i - 1] <= j)
                    t[i][j] = t[i - 1][j] + t[i - 1][j - nums[i - 1]];
                else
                    t[i][j] = t[i - 1][j];
            }
        }
        return t[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i < n; i++)
            sum = sum + nums[i];
        int s = target + sum;
        if(s % 2 != 0)
            return 0;
        s = s / 2;
        if(s<0)
            s = -s;
        return countSubsetSum(nums, s, n);
    }
};