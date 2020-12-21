//main()
//{
//  struct node *root = buildTreeWrap();
//  return 0;
//}


struct node *buildTree(vec(char) in, vec(char) pre, int inStart, int inEnd, umap<char, int> mp)
{
	static int preIndex = 0; //memory allocated only once during multiple calls
	if (inStart > inEnd) return NULL;

	char data = pre[preIndex++];
	node *temp = newNode(data);

	if (inStart == inEnd) return temp;

	int inIndex = mp[data];
	temp->left = buildTree(in, pre, inStart, inIndex - 1, mp);
	temp->right = buildTree(in, pre, inIndex + 1, inEnd, mp);

	return temp;
}

struct node *buildTreeWrap(vec(char) in, vec(char) pre)
{
	umap<char, int> mp;
	loop(i, 0, in.size()) mp[ in[i] ] = i;
	return buildTree(in, pre, 0, in.size() - 1, mp);
}
