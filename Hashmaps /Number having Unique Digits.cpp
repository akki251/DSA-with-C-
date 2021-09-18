        vector<int> uniqueNumbers(int L,int R)
          {
            
            vector<int> ans ;
            bool flag = false ;
        
            for(int i = L ; i <= R ; i++)
            {
                
              
                
                int num = i;
                
            bool check[10] = {false};
                
              
                while(num)
                {
              
              if( check[num%10] == true )
              break;
              
                    check[num%10] = true;
                    
                    num /=10;
                }
                
              if(num != 0)
              continue;
              else 
              ans.push_back(i);
                
              
                
            }
            
            return ans ;
            
          }