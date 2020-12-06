void unique(vec(int) arr)
{
	int xorsum = 0;
	loop(i, 0, arr.size())
	{
		xorsum = xorsum ^ arr[i];
	}
	cout << xorsum << endl;
}
