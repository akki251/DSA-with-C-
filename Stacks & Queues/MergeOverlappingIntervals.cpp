// https://www.youtube.com/watch?v=QlaDyZTCAbM


class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size() <=1 )
           return intervals;
           
           sort(intervals.begin(),intervals.end());
           
           vector<vector<int>> ans;
           ans.push_back(intervals[0]);
           
           for(int i =1 ; i < intervals.size() ; i++)
           {
                  if(intervals[i][0] <= ans.back()[1]) // checking start time of new event , with the end time of the last elem in the vector.
                  {
                      ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
                  }
               else
               {
                  ans.push_back(intervals[i]);
               }
           }
           
         return ans;
           
    }
};