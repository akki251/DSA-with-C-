// https://www.youtube.com/watch?v=otBOLvjH3As

void funct(Node * &prev , Node * root)
{
  if(!root)
  return;

  funct(prev,root-<left);
prev ->left=  NULL;
prev->right = root;
prev= root;
funct(prev,root->right);

}


void main(Node * root)
{
  Node * dummy = new Node(-1);
  node * prev =dummy;
   funct(prev, root);
   prev->left = NULL;
   prev->right = NULL;
   Node * ans = dummy->right;
   return ans;
}