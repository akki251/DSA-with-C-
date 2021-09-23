class Solution {
  public:
    vector < vector < int >> threeSum(vector < int > & a) {
      vector < vector < int >> ans;
ans = {};
        if(a.size() < 3)
            return ans;
        
      sort(a.begin(), a.end());
      int low = 0;
      int high = a.size() - 1;
      for (int i = 0; i < a.size() - 2; i++) {
          
          if(i == 0 || (i > 0 && a[i] != a[i-1])){
          
        low = i + 1;
        high = a.size() - 1;
        while (low < high) {
          if (a[i] + a[low] + a[high] == 0) {
            vector < int > res;
            res.push_back(a[i]);
            res.push_back(a[low]);
            res.push_back(a[high]);
            ans.push_back(res);
            low++;
            high--;

            while (a[low] == a[low - 1] && low < high)
              low++;

            while (a[high] == a[high + 1] && low < high)
              high--;

          } else if (a[i] + a[low] + a[high] < 0) {
            low++;
          } else {
            high--;
          }

        } 
              
          }
     
      }
           return ans;
    }

};