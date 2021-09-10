
if(!root)
return 0; // question given

while(root->left != NULL)
{
    root = root ->left;
}

return root->data;