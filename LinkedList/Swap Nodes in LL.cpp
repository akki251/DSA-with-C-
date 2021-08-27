// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/


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
    
   
    ListNode* swapNodes(ListNode* head, int k) {
        
        
        
        int count  = 1;
        ListNode *temp = head;
        int len = 0;
        while(temp!=NULL)
        {
            len++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp!=NULL && count < k)
        {
             count++;
            temp = temp->next;
        }
        ListNode *temp2 = head;
        
        int length = len;
        count = 1;
        
         while(temp2!=NULL && count <= length -k)
        {
             count++;
            temp2 = temp2->next;
        }
        
        int temp3=  temp->val;
        temp->val = temp2->val;
        temp2->val = temp3;
        
        
        return head;
        
        
        
    }
};