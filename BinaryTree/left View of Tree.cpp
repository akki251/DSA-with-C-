// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1#

vector <int > v;
if(root == NULL)
return v;

queue <Node *> pendingNodes ;
pendingNodes.push(root);


while(pendingNodes.size() != 0)
{


int n = pendingNodes.size();

for(int i = 1 ; i <= n ; i++)
{
    Node * front = pendingNodes.front();
    pendingNodes.pop();
    
    if(i == 1)
    v.push_back(front->data);


 
    
    if(front->left)
    pendingNodes.push(front->left);
    
    
    if(front->right)
    pendingNodes.push(front->right);

}
}
 
 return v;