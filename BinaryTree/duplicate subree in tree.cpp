//  https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1#
 
  unordered_map<string,int> m;
    string helper(Node * root)
    {
      
                if(!root) return "%";
                string s = "";
                
                if(root->left == NULL && root->right == NULL )
                {
                    s = s + to_string(root->data);
                    return s;
                }
                
                s=  s + to_string(root->data);
                s =  s + helper(root->left);
                s= s + helper(root->right);
                m[s]++;
                
                return s;
    }
    int dupSub(Node *root) {
        
         
       helper(root);
       
       for(auto it : m)
       {
           if(it.second >= 2)
                 return true;     
       }
       
       return false;
         
    }