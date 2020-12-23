void insert_level_order(struct Node *root, int val)
{
	queue<Node *> qu;
	qu.push(root);
	Node *temp = new Node(val);
	while (!qu.empty())
	{
		Node *nn = qu.front();
		qu.pop();
		if (nn->left == NULL)
		{
			nn->left = temp;
			return;
		}
		else if (nn->right == NULL)
		{
			nn->right = temp;
			return;
		}
		else
		{
			qu.push(nn->left);
			qu.push(nn->right);
		}
	}
}
