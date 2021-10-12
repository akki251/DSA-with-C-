 {


bool static compare(pair<int, int> a, pair <int, int> b)
{
    if(a.second == b.second)
    return a.first < b.first;
    return a.second < b.second;
}
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    
    
    int maxMeetings(int start[], int end[], int n)
    {
       
       
      vector<pair<int,int>>  v;
      
      for(int i = 0 ; i  < n  ; i++)
      {
          v.push_back({start[i] , end[i]});
      }
      
      sort(v.begin() , v.end() , compare) ;
      
      int cnt = 1;
      int endTime  = v[0].second;
      
      for(int i = 1;  i < n ;  i++)
      {
          if(v[i].first > endTime)
          {
              endTime = v[i].second;
              cnt++;
          }
      }
      
      return cnt;
      
      
      
      
      
      
      
       
       
    }