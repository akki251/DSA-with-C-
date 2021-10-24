/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    #define Node TreeNode 
    
    void createParMap(unordered_map<Node * , Node *> &parMap ,Node * root)
    {
        queue<Node *> q; 
        q.push(root);
        
        
        while(!q.empty())
        {
            
       
            
            auto curr = q.front();
            q.pop();
            
            if(curr->left)
            {
                parMap[curr->left] = curr;
                q.push(curr->left);
            }
            
            
            if(curr->right)
            {
                parMap[curr->right] = curr;
                q.push(curr->right);
            }
            
            
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
     
        unordered_map<Node * , Node *> parMap;
        
        createParMap(parMap,root);
        
        
        unordered_map<Node*, bool > visited;
        
        queue<Node *> q ;
        q.push(target);
        visited[target] =  true ;
        int currLevel = 0;
        
        
        while(!q.empty())
        {
            if(currLevel++ == k)
                break;
            
            int n = q.size();
            for(int i =1 ; i <= n ; i++)
            {
                
                auto curr = q.front();
                q.pop();
                
                
                if(curr->left && !visited[curr->left])
                {
                    q.push(curr->left);
                    visited[curr->left] = true ;
                }
                
                
                if(curr->right && !visited[curr->right])
                {
                    q.push(curr->right);
                    visited[curr->right] = true ;
                }
                
                if( parMap[curr] && !visited[parMap[curr]] )
                {
                    q.push(parMap[curr]);
                    visited[parMap[curr]] = true ;
                }
                
                }
            
        }
        
        
        vector<int> ans ;
        while(!q.empty())
        {
            ans.push_back(q.front()->val);
            q.pop();
        }
        
        return ans ;
        
        
        
    }
};