// https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

// https://www.youtube.com/watch?v=zbozWoMgKW0&t=0s


bool detectLoop(Node* head)
    {
        if(head == NULL)
        return false;
          
          Node * slow = head;
          Node *fast = head;
          
          
          while(slow  && fast && fast->next !=NULL)
          {
             
              slow = slow ->next;
              fast = fast->next->next;
               if(slow == fast)
              return true;
              
          }
          
          return false;
          
    }

// for finding first node of  loop
Node *firstNode(Node *head)
{
	Node *slow = head;
    Node *fast  = head;
    if(head == NULL || head->next == NULL)
        return NULL;
      slow = slow->next;
    fast = fast->next->next;
    while( slow && fast && fast->next != NULL)
    {
        
        if(slow == fast)
            break;
    slow = slow->next;
        fast = fast->next->next;
    }
    
    if(slow!=fast)
        return NULL;
    
    Node * curr = head;
    while( curr != fast)
    {
        curr = curr->next;
        fast = fast->next;
    }
    
    return curr;
    
    
}
