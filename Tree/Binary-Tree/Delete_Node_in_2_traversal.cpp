void delete_last_node(Node *root, Node *curr_node)
{
	if (root == nullptr)
		return;
	if (root == curr_node)
	{
		delete curr_node;
		root = nullptr;
		return;
	}

	if (root->left == curr_node)
	{
		delete curr_node;
		root->left = nullptr;
		return ;
	}
	if (root->right == curr_node)
	{
		delete curr_node;
		root->right = nullptr;
		return ;
	}
	delete_last_node(root->left , curr_node);
	delete_last_node(root->right, curr_node);
}

struct Node* delete_node(struct Node *root, int key)
{
	//if tree is empty
	if (root == nullptr)
	{
		cout << "Tree Empty\n";
		return nullptr;
	}

	//if tree has only one elemenyt,i.e.,root
	if (!root->left and !root->right)
	{
		if (root->data == key)
		{
			delete root;
			root = nullptr;
			return root;
		}
		cout << "Key not found in tree.\n";
		return root;
	}

	//other cases
	queue<Node *> qu;
	qu.push(root);
	Node *key_node = nullptr;
	Node *curr_node = nullptr;
	while (!qu.empty())
	{
		curr_node = qu.front();
		qu.pop();
		if (curr_node->data == key)
		{
			key_node = curr_node;
		}
		if (curr_node->left)
			qu.push(curr_node->left);
		if (curr_node->right)
			qu.push(curr_node->right);
	}

	if (key_node == nullptr)
	{
		cout << "Key not found in tree.\n";
		return root;
	}

	key_node->data = curr_node->data;
	//now remove this last node from free
	delete_last_node(root, curr_node);
	return root;
}
