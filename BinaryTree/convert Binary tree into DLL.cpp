// https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1#
void solve(Node *  &head, Node *  &tail , Node * root)
    {
        if(!root)
        return;
        solve(head,tail,root->left);
        
        if(head == NULL)
        {
            head = root;
            tail = root;
        }
        
        else 
        {
            tail->right = root;
            tail->right->left = tail;
            tail = tail->right;
            
            
        }
        
        
        solve(head,tail,root->right);
        
        
    }
    Node * bToDLL(Node *root)
    {
    
    if(root == NULL)
    return root;
     
     Node * head = NULL;
     Node * tail = NULL;
    solve(head,tail,root);
            
            
            return head;    
                
    
    
    }
};