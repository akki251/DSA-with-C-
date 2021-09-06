 public:
    // https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#
    /*You are required to complete this method*/
    bool check(Node *root)
    {
     queue <Node *> q;
     q.push(root);
     while(!q.empty())
     {
         
         int count = 0 ;
         int n = q.size();
         
         
         for(int i = 1 ; i <= n ; i ++)
         {
             Node * front = q.front();
             q.pop();
             
             
             if(front->left == NULL && front->right == NULL)
             count++;
             
             if(front->left )
             q.push(front->left);
             
             if(front->right )
             q.push(front->right);
             
         }
         if(count != 0){
         if(count != n)
         return false;
         }        
         
         
     }
     
     return true;
    }