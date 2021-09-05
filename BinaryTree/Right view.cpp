// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1


vector<int> rightView(Node *root)
    {
        
        vector <int> v;
        if(root == NULL)
        return v;
       queue <Node * > q;
       q.push(root);
       
       while(!q.empty())
       {
           
           
           int n = q.size();
           for(int i = 1; i <= n ; i++)
           {
               Node * front = q.front();
               q.pop();
               
               if( i == n)
               v.push_back(front->data);
               
               if(front->left)
               q.push(front->left);
               
               
               if(front->right)
               q.push(front->right);
           }
           
           
       }
       
       
       return v;
    }
};