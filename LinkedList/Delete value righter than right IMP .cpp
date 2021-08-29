Node *reverse(Node *head)
    {
        if(head == NULL || head->next == NULL)
        return head;
        
        Node *newHead = reverse(head->next);
        
        head->next->next= head;
        head->next= NULL;
        
        return newHead;
    }
    Node *compute(Node *head)
    {
        
        if(head == NULL || head->next == NULL)
        return head;
        
       Node *newHead = reverse(head);
       
      int max = newHead->data;
      Node *finalHead = newHead;
      
      Node * prev = newHead;
      Node * forw = newHead->next;
      while(forw!=NULL)
      {
          if(forw->data >= max)
          {
               max = forw->data;
               prev = forw;
               forw = forw->next;
          }
          else 
          {
              prev->next = forw->next;
              forw = forw->next;
          }
      }
      
      head = reverse(finalHead);
      
      return head;
      
       
       
       
    }
    