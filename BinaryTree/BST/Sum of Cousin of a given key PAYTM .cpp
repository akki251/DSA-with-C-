// CPP program to find sum of cousins
// of given node in binary tree.
#include <bits/stdc++.h>
using namespace std;

// A Binary Tree Node
struct Node {
	int data;
	struct Node *left, *right;
};

// A utility function to create a new
// Binary Tree Node
struct Node* newNode(int item)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Function to find sum of cousins of
// a given node.
int findCousinSum(Node* root, int key)
{
	if (root == NULL)
		return -1;

	// Root node has no cousins so return -1.
	if (root->data == key) {
		return -1;
	}

	// To store sum of cousins.
	int currSum = 0;

	// To store size of current level.

	// To perform level order traversal.
	queue<Node*> q;
	q.push(root);

while(!q.empty())
{
        int n = q.size();
  
  for(int i = 1;  i <= n ; i++)
  {
    
    Node * front = q.front();
    q.pop();
    
   
    if(front->left)
    {
      q.push(front->left);
      currSum += front->left->data;

      
    }
    
    if(front->right)
    {
      q.push(front->right);
      currSum += front->right->data;
      
    }
    
       if(front->right->data == key || front->left->data == key)
       {
         if(front->left)
           currSum -= front->left->data;
         
           if(front->right)
           currSum -= front->right->data;
    
    if(currSum == 0)
return -1;
       
         return currSum;
       }
    
  }
  
  currSum = 0;
  
}
			
		
	

}

// Driver Code
int main()
{
	/*
				1
			/ \
			3 7
		/ \ / \
		6 5 4 13
			/ / \
			10 17 15
	*/

	struct Node* root = newNode(1);
	root->left = newNode(3);
	root->right = newNode(7);
	root->left->left = newNode(6);
	root->left->right = newNode(5);
	root->left->right->left = newNode(10);
	root->right->left = newNode(4);
	root->right->right = newNode(13);
	root->right->left->left = newNode(17);
	root->right->left->right = newNode(15);

	cout << findCousinSum(root, 13) << "\n";

	cout << findCousinSum(root, 7) << "\n";
	return 0;
}
