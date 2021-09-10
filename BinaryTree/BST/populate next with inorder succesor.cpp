 
        void helper(Node * root , Node * &prev )
         {
             if(!root)
             return ;
            
            helper(root->left,prev);
   
          if(prev)
          {
              
              
              prev->next = root;
          }    
              prev=  root;
          
         
           helper(root->right,prev);  
         }
         
    void populateNext(Node *root)
    {
        

    Node * prev = NULL;
    helper(root, prev);
      
     
        