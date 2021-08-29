// https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1#

int getNthFromLast(Node *head, int n)
{
        if(head==NULL)
            return -1;
        
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
      if(n>count)
      return -1;
        int i=1;
        temp=head;
        while(i<count-n){
           temp=temp->next;
           i++;
        }
        
        if(count-n==0)
            return head->data;
            
        return temp->next->data;
        
}