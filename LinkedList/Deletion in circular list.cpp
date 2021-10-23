/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
                int data;
                Node *next;
                Node(int data)
                {
                        this->data = data;
                        this->next = NULL;
                }
        };

*****************************************************************/

Node* deleteNode(Node* head, int key) 
{
    
    
    
    if(!head)
        return head ;
    
    // if only one node is present and that too the key.
    if(head->data == key && head->next == head )
    {
         head = NULL;
        return head ;
    }
    
    Node * prev = NULL;
    Node * curr = head ;
    Node * temp = curr;
    Node * prev2 = curr ;
    bool isFound = false ;
    while(curr ->next != head)
    {
        
  
        if(curr ->data == key )
        {
            
          isFound = true;
            temp = curr;
           prev2 = prev; 
        }
        
        
        
        
        prev= curr;
        curr =curr->next;
    }
    
    if(!isFound)
        return head ;
    
    
    if(isFound && temp == head)
    {
        curr->next =  temp->next;
        head = head->next; 
        return head ;
    }
    
    if(isFound && curr->data == key)
    {
        prev->next = head ;
        return head ;
    }
    
    
    else {
 
        prev2->next = temp->next;
        return head; 
    }
    
    
}
    
    
    
