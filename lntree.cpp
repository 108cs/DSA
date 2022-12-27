
#include <bits/stdc++.h>
using namespace std;
int cnt=0;
struct Node {
	int data;
	struct Node *left, *right;
};


Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}


int countInorder(struct Node* node)
{
	if (node == NULL){
		return 0;
    }
	countInorder(node->left);

	if(node->left==NULL&&node->right==NULL){
		cnt++;
	}
	

	
	countInorder(node->right);
	return cnt;
}


int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);


	cout << "\nNumber of leaf nodes:  "<<countInorder(root)<<endl;
	


	return 0;
}
