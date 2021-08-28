// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1


Node * removeDuplicates( Node *head) 
    {
     
     if(head == NULL)
     return head;
     unordered_set <int> s;
     Node *curr = head;
     Node *prev = NULL;
     
     while(curr!= NULL)
     {
         
         if(s.find(curr->data) != s.end())
         {
             prev->next = curr->next;
             delete curr;
         }
         
         else 
         {
             s.insert(curr->data);
             prev = curr;
         }
         
         curr = curr->next;
         
         
     }
     
    
     return head;
     
    }