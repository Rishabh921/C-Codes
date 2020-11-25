#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define fo(i, k ,n) for(int i=k;i<n;i++)
#define vec(type) vector<type>
int mod = 1e9 + 7;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	vec(int) dp(n + 1);
	fo(i, 1, dp.size())
	{
		if (i < m)
		{
			dp[i] = 1;
		}
		else if (i == m)
		{
			dp[i] = 2;
		}
		else
		{
			dp[i] = dp[i - 1] + dp[i - m];
		}
	}
	cout << dp[n] << endl;
	return 0;
}
