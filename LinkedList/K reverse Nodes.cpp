/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
        #define Node ListNode 

    Node * reverse(Node * head , Node * ptr)
    {
        Node * curr = head;
        Node * prev = NULL;
        Node * forw = NULL;
        
        while(curr != ptr)
        {
            forw = curr->next;
            curr->next  =prev;
            prev = curr;
            curr = forw ;
        }
        
        return prev ;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        
        
        if(!head || !head->next)
            return head ; 
        
        Node * ptr=  head ;
        for(int i = 0 ; i< k ; i++ )
        {
            if(!ptr)
                return head;
            ptr = ptr->next;
                
        }
        
        Node * temp= reverse(head,ptr);
        head->next = reverseKGroup(ptr ,k);
        return temp;
        
    }
};