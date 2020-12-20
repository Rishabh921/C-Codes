//WARNING : Be careful with the input part

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left , *right;
};

struct node *create()
{
	node *temp = new node();
	int x;
	cin >> x;
	if (x == -1) return NULL;
	temp->data = x;
	temp->left = create();
	temp->right = create();
	return temp;
}

void inorder(struct node *root)
{
	if (root == NULL) return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void preorder(struct node *root)
{
	if (root == NULL) return;
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct node *root)
{
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

int main()
{
	struct node *root = create();
	cout << "\nInorder traversal is : " << endl;
	inorder(root);
	cout << "\nPre Order traversal is : " << endl;
	preorder(root);
	cout << "\nPost Order traversal is : " << endl;
	postorder(root);

	return 0;
}
