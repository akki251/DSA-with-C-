Delete every N nodes 
// https://classroom.codingninjas.com/app/classroom/me/9525/content/153197/offering/1873422/problem/367

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

Node *skipMdeleteN(Node *head, int M, int N)
{
	
    if(head == NULL)
    return head;
    if(M==0 )           // add corner cases
        return NULL;
    if(N==0)
        return head;
    Node * curr = head;
    Node * temp;
    int count;
    
    while(curr!=NULL){
    
    for(int count = 1; count  < M  && curr != NULL ; count++)   //wrong count<=M
    {
        curr = curr -> next;
    }
    
    if(curr == NULL)
        return head;
  
    temp = curr -> next;
    for(count = 1; count <= N && temp!= NULL ; count++)
    {
        Node *del = temp;
        temp = temp->next;
        delete del;
    }
  
    curr->next = temp;
    
    curr = temp;
   
      
    }
    
    return head;
    
}