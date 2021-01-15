bool canPlaceCows(int n, int stall[], int cows, int min_separation)
{
	int last_cow = stall[0];
	int count = 1;
	loop(i, 1, n)
	{
		if (stall[i] - last_cow >= min_separation)
		{
			last_cow = stall[i];
			count++;
			if (count == cows) return true;
		}
	}
	return false;
}

void aggresiveCows()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, cows;
	cin >> n >> cows;
	int stall[n];
	loop(i, 0, n) cin >> stall[i];
	sort(stall, stall + n);
	int start = 0, end = stall[n - 1] - stall[0];
	int ans = 0;
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		bool cowsRakhPaye = canPlaceCows(n, stall, cows, mid);
		if (cowsRakhPaye)
		{
			ans = mid;
			start = mid + 1;
		}
		else end = mid - 1;
	}
	// deb(ans);
	cout << ans << endl;
}
