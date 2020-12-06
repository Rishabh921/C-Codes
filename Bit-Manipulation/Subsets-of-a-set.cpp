void subsets(vec(int) arr)
{
	int n = arr.size();
	for (int i = 0; i < (1 << n); i++) // i = 0 to (2^n)-1
	{
		for (int j = 0; j < n; j++)    // j = 0 to n
		{
			if (i & (1 << j))		   // if jth bit of i is set
			{
				cout << arr[j] << " ";
			}
		}
		cout << endl;
	}
}
