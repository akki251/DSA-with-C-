// https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1#

Node* findIntersection(Node* head1, Node* head2)
{
   
   
    Node *temp1 = head1;
    Node *temp2 = head2;
    Node *newHead = NULL;
    Node *curr =NULL;
    
      
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data <  temp2->data)
        {
         temp1 = temp1->next;
        
        }
        
else  if(temp2->data < temp1->data)
    {
        temp2 = temp2->next;
    }
    
    else 
    {
     
     if(newHead == NULL)
     {
         Node *newNode = new Node(temp1->data);
         newHead  = newNode;
         curr = newNode;
         
     }
     
else 
{
    Node *newNode = new Node(temp1->data);
      curr->next =newNode ;
      curr = curr->next;
    
    
}

temp1 =temp1->next;
temp2= temp2->next;

        
    }
        
        
    }
    
 
 curr->next = NULL;
    
    
    return newHead;
   