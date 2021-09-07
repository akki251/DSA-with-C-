
string inorderHelper(Node * root , vector <Node *> & v)
{

    if(!root)
    return "%";
    
    string s= "";
    
    s= s + inorderHelper(root->left, v);
    s = s + to_string(root->data);
    s = s + inorderHelper(root->right ,v );
    
    m[s] ++;
    
    if(m[s] == 2)
    v.push_back(root);
    
    return s;
    

}

vector<Node*> printAllDups(Node* root)
{
vector<Node *> v;
m.clear();
       inorderHelper(root,  v );

return v;

}