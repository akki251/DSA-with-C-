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


class Slop {
    public : 
    int forwardSlop;
    int backwardSlop;
    int maxLen;
    Slop()
    {
    forwardSlop = -1;
    backwardSlop = -1 ;
    maxLen = 0;
        
    }
};

class Solution {
public:
    
    
    
    
    Slop longestZigZag_helper(TreeNode* root) {
        
        if(!root)
        {   
            Slop curr ;
            return curr;
        }
        auto left = longestZigZag_helper(root->left);
        auto right = longestZigZag_helper(root->right);
        
        Slop myAns ;
        myAns.maxLen = max( max(left.backwardSlop ,right.forwardSlop) + 1 , max(left.maxLen , right.maxLen))  ;
        myAns.forwardSlop =  left.backwardSlop + 1;
        myAns.backwardSlop =  right.forwardSlop + 1;
        return myAns;
        
    }
    int longestZigZag(TreeNode* root) {
       
        
        return longestZigZag_helper(root).maxLen ;
        
    }
    
};
    