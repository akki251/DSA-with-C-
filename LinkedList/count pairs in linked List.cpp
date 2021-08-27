// https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1/?category[]=Linked%20List&category[]=Linked%20List&problemStatus=unsolved&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Linked%20ListproblemStatusunsolveddifficulty[]-2difficulty[]-1difficulty[]0page1category[]Linked%20List


int countPairs(struct Node* head1, struct Node* head2, int x) {
                
                int count = 0;
                
         unordered_set<int> s;
         
         
         while(head1 != NULL)
         {
             s.insert(head1->data);
             head1 = head1->next;
         }
         
         while(head2!=NULL)
         {
             
             if(s.find(x-head2->data) != s.end())
             count++;
             
             head2 = head2->next;
             
         }
          
          
          return count;     
                
    
    
    
    }