
class Solution{
public:

unordered_map<string,int> m;
int helper(string s,  int i , int j , bool isTrue )
{
    
    
    if(i > j )
    return false ;
    
    if(i == j){
    if(isTrue == true)
    {
        return s[i] == 'T';
    }
    else if(isTrue == false)
    {
        return s[i] == 'F';
    }
    
    }    
    string temp  ="";
    temp.append(to_string(i));
    temp.push_back(' ');
    temp.append(to_string(j));
    temp.push_back(' ');
    temp.append(to_string(isTrue));
    
    if(m.find(temp) != m.end())
    {
        return m[temp];
    }
    
    int ans  =0;
    for(int k = i+1; k <=j-1 ; k = k + 2)
    {
        
        int lt  = helper(s,i,k-1,true);
        int lf =  helper(s,i,k-1,false);
        int rt = helper(s,k+1,j,true);
        int rf =  helper(s,k+1,j,false);
        
        if(s[k] == '&')
        {
            if(isTrue == true)
            {
                ans += lt * rt;
            }
            else
            {
                ans += (lt * rf )+( lf * rt) +( lf * rf);
            }
        }
        else if(s[k] == '|')
        {
            if(isTrue == true)
            {
                ans +=( lt * rf )+ (lf * rt) +( lt * rt);
            }
            else 
            {
                ans +=( lf* rf) ;
            }
        }
        
        else if(s[k] == '^')
        {
            if(isTrue == true)
            {
                ans += (lt * rf) + (lf * rt);
            }
            else
            {
                ans += (lt * rt )+ (lf * rf);
            }
        }


    }
    
 return  m[temp]  = ans % 1003 ;
 
    
    
    
    
    
}


    int countWays(int N, string s){
        
        // m.clear();
        int i = 0;
         int j  = N -1;
         bool isTrue = true;
         return helper(s,i,j,isTrue);
        
        
        
    }
};
