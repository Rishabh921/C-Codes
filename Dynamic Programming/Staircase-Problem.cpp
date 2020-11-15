//Tabulation or Bottom Up Approach

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl
#define ll long long 

ll mod = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll n;
    cin>>n;
    vector<int> dp(n+1,0);
    dp[0] = dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=2;j++)
        {
            if(j>i) break;
            dp[i] = dp[i] + dp[i-j];
        }
    }
    cout<<dp[n];
    return 0;
}
