int lengthLL(Node * head)
{
    
    if(!head)
    return  0;
    
    return 1 + lengthLL(head->next);
}
int intersectPoint(Node* head1, Node* head2)
{
    
    
    
       int len1 = lengthLL(head1);
       int len2 = lengthLL(head2);
     
     
     if(len1 > len2)
     {
         
         
         Node * curr = head1;
         
         int count = 0;
         int diff= len1-len2;
         
         
         while(count < diff)
         {
             if(curr == NULL)
             return -1;
             curr= curr->next;
             count++;
         }
         
         while(curr != head2 && curr!= NULL && head2!=NULL )
         {
                curr =curr->next;
                head2 = head2->next;
         }
         
         
         if(curr == head2)
         return curr->data;
         else
         return -1;
         
         
         
         
         
     }
     else
     {
          Node * curr = head2;
         
         int count = 0;
         int diff= len2-len1;
         
         
         while(count < diff)
         {
             if(curr == NULL)
             return -1;
             curr= curr->next;
             count++;
         }
         
         while(curr != head1 && curr!= NULL && head1!=NULL )
         {
                curr =curr->next;
                head1 = head1->next;
         }
         
         
         if(curr == head1)
         return curr->data;
         else
         return -1;
         
     }
       
    
}

