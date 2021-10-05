/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    #define Node TreeNode 
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
       vector<vector<int>> ans ; 
        
        if(!root)
            return ans ;
        
        queue<Node *> q; 
        q.push(root);
        
        int level = 1; 
                        vector<int> v; 

        while(!q.empty())
        {
            
            int n = q.size();
            v.clear();
            for(int i =1 ; i <= n ; i++)
            {
                
                auto front = q.front() ;
                q.pop();
                
                v.push_back(front->val);
                
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                
            }
            if(level & 1)
            {
                ans.push_back(v);
            }
            else 
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            level++;
            
            
            
        }
        
        
        return ans ;
        
        
        
        
    }
};