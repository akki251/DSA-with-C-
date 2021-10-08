class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        
           int obst = -a[0];
        int osst = 0;
        int ocst =0;
        
        for(int i = 1 ; i < a.size() ; i++)
        {
            int nbst= 0;
            int nsst = 0;
            int ncst= 0;
            
            
            if(ocst - a[i] > obst )
            {
                nbst = ocst  - a[i];
            }
            else 
            {
                nbst = obst;
            }
            
            if(obst + a[i] > osst )
            {
                nsst = obst + a[i];
            }
            else 
            {
                nsst = osst;
            }
            
            if(osst > ocst)
            {
                ncst = osst;
            }
            else 
            {
                ncst = ocst;
            }
            
            
            obst = nbst;
            osst = nsst;
            ocst = ncst;
        }
        
        return osst;
        
        
        
        
    }
};