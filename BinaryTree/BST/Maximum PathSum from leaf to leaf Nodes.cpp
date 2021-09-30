class Solution {
public:
int ans = 0;
 int helper(Node * root ,int &res)
 {
     if(!root)
     return 0;
     if(!root->left && !root->right)
     return root->data;
     
     
     int left= helper(root->left, res);
     int right = helper(root->right,res);
     
if(root->left && root->right)
{
    
    res = max(res,left + right + root->data);
    
    return max(left, right) + root->data;
    
}


if(!root->left)
return right  +root->data;
return  root->data + left;



  
 }
 
    int maxPathSum(Node* root)
    {
        
        
        
        int res = INT_MIN;
        int val = helper(root,res);
        if(res == INT_MIN)
        {
             return val;
        }
        return res;
    }
};