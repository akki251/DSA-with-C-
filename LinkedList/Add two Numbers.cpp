class Solution
{
    public:
    Node * reverse(Node * head)
    {
        if(head == NULL || head->next == NULL)
        return head;
        
        Node * newHead=  reverse(head->next);
        head->next->next = head;
        head->next =  NULL;
        return newHead;
    }
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        first =reverse(first);
        second = reverse(second);
        Node * res = NULL;
        Node * temp = NULL;
        Node * prev = NULL;
        int carry = 0;
        int sum = 0;
        while(first != NULL || second != NULL)
        {
            
              if(first && second)
              {
                  sum = carry + first->data + second->data;
              }
             else  if(first)
              {
                  sum = carry + first->data ;
              }
              
             else if(second)
              {
                  sum = carry +  second->data;
              }
              
              if(sum >= 10)
              {
                  carry = 1;
              }
              else
              {
                  carry = 0;
              }
              
              sum = sum%10;
              
              temp = new Node(sum);
              
              if(res == NULL)
              {
                  res = temp;
                  
              }
              
              else 
              {
                  prev->next = temp;
                
              }
              
              prev = temp;
              
              if(first)
              first = first->next;
              if(second)
              second = second->next;
            
        }
        
        
        if(carry > 0)
        {
            temp->next = new  Node(carry);
        }
        
        return reverse(res);
        
        
    }
};