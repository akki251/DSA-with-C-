class Solution {
public:
   int maxProfit(vector<int>& a, int f) {
        

        
       int obst = -a[0];
       int osst = 0 ;
       
       for(int i = 1 ; i <  a.size() ; i++)
       {
           
           
           int nbst =0;
           int nsst = 0;
           
           if(osst - a[i] > obst)
           {
               nbst = osst  - a[i];
           }
           else 
           {
               nbst = obst;
           }
           
           
           if(obst + a[i] - f > osst)
           {
               nsst = obst + a[i]  - f;
           }
           else 
           {
               nsst = osst;
           }
           
           obst = nbst;
           osst = nsst;
           
           
       }
       
       return osst;
     
   }
        
};