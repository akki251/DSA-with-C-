// https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1#

vector<int> reverseLevelOrder(Node *root)
{
  
        queue <Node * > pendingNodes;
        stack <int> s;
        pendingNodes.push(root);
     
        while(pendingNodes.size() != 0)
        {
            
            Node * p = pendingNodes.front();
            pendingNodes.pop();
             s.push(p->data);
    
         
            
            if(p->right)
            pendingNodes.push(p->right);
            
            if(p->left)
            pendingNodes.push(p->left);
         
            
        }
        
     
        vector <int> final;
      while(!s.empty()){
          
          final.push_back(s.top());
          s.pop();
          
      }
        
        return final;
          
          
}