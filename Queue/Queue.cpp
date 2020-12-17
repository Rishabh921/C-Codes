void display(queue<int> qu)
{
	while (!qu.empty())
	{
		cout << qu.front() << " ";
		qu.pop();
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	queue<int> qu;
	qu.push(10);
	qu.push(20);
	qu.push(30);

	display(qu);
	deb(qu.size());
	deb(qu.front());
	deb(qu.back());
	qu.pop();
	display(qu);
	qu.pop();
	display(qu);

	return 0;
}
