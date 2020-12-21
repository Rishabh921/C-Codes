struct node *build(vec(int) &in, vec(int) &post, int inStart, int inEnd, int *postIndex, umap<int, int> &mp)
{
	if (inStart > inEnd) return NULL;

	int val = post[*postIndex];

	node *temp = new node();
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	(*postIndex)--;

	if (inStart == inEnd) return temp;

	int inIndex = mp[val];

	// One important observation is, we recursively call 
	// for right subtree before left subtree 
	// as we decrease index of postorder index 
 //    whenever we create a new node. 

    
	temp->right = build(in, post, inIndex + 1, inEnd, postIndex, mp);
	temp->left = build(in, post, inStart, inIndex - 1, postIndex, mp);

	return temp;
}

struct node *buildTree(vec(int) &in, vec(int) &post, int n)
{
	int postIndex = n - 1;
	umap<int, int> mp;
	loop(i, 0, n) mp[in[i]] = i;
	return build(in, post, 0, n - 1, &postIndex, mp);
}

void inorder(struct node *root)
{
	if (root == NULL) return ;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vec(int) in(n);
	loop(i, 0, n) cin >> in[i];
	vec(int) post(n);
	loop(i, 0, n) cin >> post[i];
	struct node *root = buildTree(in, post, n);
	inorder(root);
	return 0;
}
