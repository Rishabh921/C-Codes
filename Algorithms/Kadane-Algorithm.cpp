void maximum_subarray_sum(vec(int) &arr)
{
	int curr = 0, maxSum = 0;
	loop(i, 0, arr.size())
	{
		curr += arr[i];
		maxSum = max(maxSum, curr);
		if (curr < 0) curr = 0;
	}
	cout << maxSum << endl;
}
