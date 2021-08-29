// https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1#

// recursuve;
 
 if(head == NULL || head->next == NULL)
 return head;
 
 Node *newHead = reverseDLL(head->next);
 newHead->prev = NULL; // prev of new node is null
 
 head->next->next =head; //attaching head to the end;
 
 Node *temp = head->next;  /// swapping address of next and prev;
 head->next =head->prev;
 head->prev = temp;
 
 head->next = NULL;  // asssinging null to head;
 
 return newHead; // finally return  newHead;
 
     
     
     
     
}


// https://www.youtube.com/watch?v=uz6dimvl40Q

iterative

if(head == NULL || head->next == NULL)
 return head;
     
      Node * temp;
     Node * curr= head;
     
     while(curr != NULL)
     {
         temp = curr->prev;
         curr->prev= curr ->next;
         curr->next = temp;
         curr = curr->prev;
     }
     
     temp = temp->prev;
     
     return temp;

