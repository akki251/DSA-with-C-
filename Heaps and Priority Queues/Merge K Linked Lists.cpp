typedef pair<int, ListNode *>  Node ;
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
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         
     if(lists.size() == 0)
         return NULL;
 
        priority_queue <Node , vector<Node>  , greater<Node> > pq;
        
        for(int i = 0 ; i < lists.size() ; i++)
        {
            
            if(lists[i])
                pq.push({lists[i]->val , lists[i]});
            
        }
        
        ListNode  * head = NULL;
        ListNode  * tail = NULL;
        
        
        while(!pq.empty())
        {
            
                auto front  =pq.top();
            pq.pop();
            
            
            
            if(head == NULL)
            {
                head = front.second;
                tail =  front.second;
            }
            
            else 
            {
                tail->next = front.second;
                tail = tail->next;
            }
            
            
                
            if(front.second->next)
            {
                pq.push({front.second->next->val , front.second->next});
            }
            
            
        }
        
        
        return head; 
        
    }

        
        
        
        
        
    
     
};