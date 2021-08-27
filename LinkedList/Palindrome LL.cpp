// https://classroom.codingninjas.com/app/classroom/me/9525/content/153196/offering/1873406/problem/330

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

Node* reverseLinkedList(Node *head)
{
    Node * curr = head;
    Node * prev = NULL;
    Node * forw = NULL;
    
    while(curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    
    return prev;
}

Node * MidPointLL(Node * head)
{
    
    Node * slow = head;
    Node * fast = head;
    
    
    while(fast->next!= NULL && fast->next->next != NULL)
    {
        slow = slow -> next;
        fast = fast->next->next;
    }
    
    
    return slow;
    
}
bool isPalindrome(Node *head)
{
    if(head == NULL || head->next == NULL)
        return true;
    
    Node * mid = MidPointLL(head);
    Node * newHead = reverseLinkedList(mid->next);
    
    Node * c1 = head;
    Node * c2 =newHead;
    
    while(c2!= NULL)
    {
        if(c1->data != c2->data)
            return false;
        
        c1 = c1->next;
        c2 = c2->next;
    }
    
    return true;
    
    
    
    
    
}