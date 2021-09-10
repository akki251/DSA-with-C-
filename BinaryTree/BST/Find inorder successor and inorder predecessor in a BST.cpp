// https://www.geeksforgeeks.org/inorder-predecessor-successor-given-key-bst/
if(!root)
return ;

if(root->key == key)
{
    
    if(root->left)
    {
        Node * temp= root->left;
        
        while(temp->right)
        temp = temp->right;
        
        pre = temp;
        // cout << pre << " ";
        
    }
    
    
    if(root->right)
    {
        Node * temp= root->right;
        
        while(temp->left)
        temp = temp->left;
        
        suc = temp;
        // cout << su << " ";
        
    }
    
    
}



if(key < root-< key)
{
    
    suc = root;
    findPreSuc(root->left,pre,suc,key);
}


if(key > root-< key)
{
    
    pre = root;
    findPreSuc(root->right,pre,suc,key);
}

       