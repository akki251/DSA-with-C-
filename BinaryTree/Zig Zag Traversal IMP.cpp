  vector <int> zigZagTraversal(Node* root)
    {
    
    
          stack <Node*> currentLevel;
          stack <Node*> nextLevel;

        currentLevel.push(root);
     bool leftRight = true; 
     vector<int> ans ;
 
 while(!currentLevel.empty())
 {
     
 
     
         Node  * front = currentLevel.top();
         currentLevel.pop();
         ans.push_back(front->data);
         
         if(leftRight)
         {
             if(front->left)
              nextLevel.push(front->left);
              if(front->right)
              nextLevel.push(front->right);
         }
         else 
         {
             
               if(front->right)
              nextLevel.push(front->right);
             if(front->left)
              nextLevel.push(front->left);
            
         }
     
  if(currentLevel.size() == 0)
  {
      leftRight = !leftRight;
      swap(currentLevel,nextLevel);
  }
     
 }
 
 return ans;
    	
    }