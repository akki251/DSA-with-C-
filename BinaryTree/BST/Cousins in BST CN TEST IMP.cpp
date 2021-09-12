# define  Node  TreeNode 
#define data val
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
    int level1  = -1;
    int level2 =-1;
    Node * parent1;
    Node * parent2;
    
        void  helper(Node * root , int x , int y , int level,  Node * parent)
        {
            
            if(!root)
                return;
            
            if(root->data == x)
            {
                level1 = level;
                parent1 = parent;
            }
            
            
            if(root->data == y)
            {
                level2 = level;
                parent2 = parent;
            }
            
            helper(root->left,x,y,level+1,root);
            helper(root->right,x,y,level+1,root);
            
            
        }
    
    
    
    bool isCousins(TreeNode* root, int x, int y) {
     helper(root , x ,y , 0 , NULL);
        return parent1 != parent2 && level1 == level2; 
        
    }
};