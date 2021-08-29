
// https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

int intersectPoint(Node* head1, Node* head2)
{
    int length1 = lengthLL(head1);
        int length2 = lengthLL(head2);
        bool maxL = false;
        if(length1  > length2)
        maxL = true;
        else
        maxL = false;
        
        int diff = abs(length1 - length2);
        if(maxL)
        {
              Node *temp1 = head1;
            int count = 1;
            while(count <= diff)
            {
               count++;
                temp1 = temp1->next;
            }
            
            while(temp1 != head2)
            {
                temp1= temp1->next;
                head2 = head2->next;
            }
            
            return temp1->data;
            
        }
        else 
        {
             Node *temp2 = head2;
              int count = 1;
            while(count <= diff)
            {
               count++;
                temp2 = temp2->next;
            }
              while(temp2 != head1)
            {
                temp2= temp2->next;
                head1 = head1->next;
            }
            
            return temp2->data;
        }
}
