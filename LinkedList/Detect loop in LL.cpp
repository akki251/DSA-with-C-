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

// for detectiing loop
Node *q = head;
p is the meeting point of loop, where slow and fast met;
while(p!=q)
{
  p =p->next;
  q = q->next;
}

return p;

