class Solution {
  public:
 
    bool isHeap(struct Node* root) {

           
           
           queue<Node * > q;
           q.push(root);
           
           while(!q.empty())
           {
               int n = q.size();
               
               for(int i = 1;  i <= n ; i++)
               {
                   
                   Node * front = q.front();
                   q.pop();
                   
                   if(front->left == NULL && front->right != NULL)
                   return false; 
                   
                   
                   if(front->left)
                   {
                       
                       q.push(front->left);
                       if(front->left->data > front->data)
                       return false; 
                   }
                   
                   if(front->right)
                   {
                       
                       q.push(front->right);
                       if(front->right->data > front->data)
                       return false;
                   }
                   
                   
                   
               }
           }


return true; 
