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
	Node *pl = nullptr;
	Node *pr = nullptr;
	while (!qu.empty())
	{
		curr_node = qu.front();
		qu.pop();
		if (curr_node->data == key)
		{
			key_node = curr_node;
		}
		if (curr_node->left) {
			qu.push(curr_node->left);
			pl = curr_node;
			pr = nullptr;
		}
		if (curr_node->right) {
			qu.push(curr_node->right);
			pl = nullptr;
			pr = curr_node;
		}
	}

	if (key_node == nullptr)
	{
		cout << "Key not found in tree.\n";
		return root;
	}

	key_node->data = curr_node->data;
	//now remove this last node from tree
	if (pl)
	{
		pl->left = nullptr;
	}
	if (pr)
	{
		pr->right = nullptr;
	}
	return root;
}
