// https://classroom.codingninjas.com/app/classroom/me/9525/content/153196/offering/1873406/problem/6



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
int lengthLL(Node *head)
{
    Node *temp = head;
    int count = 0;
    while(temp!= NULL)
    {
        temp = temp->next;
       count ++;
    }
    
    return count ;
    
    
}
Node *appendLastNToFirst(Node *head, int n)
{
    
    int length = lengthLL(head);
    Node *curr = head;
     Node *tail = head;
    Node *prev = NULL;
    int count  = 0;
    
    if (n > length)           // added if statement to check if n > length 
    {
        return NULL;
    }
    
    if (n == 0)               // added if statement to check if n == 0
    {
        return head;
    }
    
    while( length - count >= n + 1) // replaced while( length - count >= n) with while( length - count >= n + 1)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }
    
                   
    while(tail->next!=NULL)
    {
        tail = tail->next;
    }
    
    
    tail->next = head;
    //head->next = curr;       // commented head->next = curr;
    prev->next = NULL; 
   
    
    //return head;
    return curr;         // replaced return head with return curr;
    
    
}