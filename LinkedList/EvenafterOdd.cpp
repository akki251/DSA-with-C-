// https://classroom.codingninjas.com/app/classroom/me/9525/content/153197/offering/1873422/problem/331
Node *evenAfterOdd(Node *head)
{
	 
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *headE = NULL;
    Node *tailE = NULL;
    Node *headO = NULL;
    Node * tailO = NULL;

    
    while(head!= NULL)
    {
        
        
        if(head->data % 2 == 0) // data is even
        {
            if(headE == NULL)
            {
                headE = head;
                tailE = head;
            }
            
            else 
            {
                tailE->next = head;
                tailE = head;
            }
            
            
        }
        
        else 
        {
            if(headO == NULL)
            {
                headO = head;
                tailO = head;
            }
            
            else 
            {
                tailO->next = head;
                tailO = head;
            }
            
        }
        
        
        
        head = head->next;
        
    }
    
    
     
     
    
    if(headO == NULL)
    {
        tailE->next = NULL;
        return headE;
    }
    
    
    if(headE == NULL)
    {
          tailO->next = NULL;
        return headO;
    }
    
     
   tailE->next = NULL;
     tailO->next = NULL;
    tailO->next = headE;
    
    return headO;
    
    
    
}