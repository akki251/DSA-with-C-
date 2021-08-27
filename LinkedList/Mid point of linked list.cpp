
// https://classroom.codingninjas.com/app/classroom/me/9525/content/153197/offering/1873408/problem/328

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

Node *midPoint(Node *head)
{
  if(head == NULL || head->next == NULL)
      return head;
     Node * slow = head;
    Node * fast = head;
    
    while(fast -> next != NULL && fast->next->next!= NULL)
    {

           slow = slow ->next;
        fast = fast->next->next;
        
    }
    
    return slow;
    
}