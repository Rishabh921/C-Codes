//Recursive Logic + Strorage = Memoization or Top-Down DP

#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout<<#x<<"="<<x<<endl
#define ll long long 

int fib(int n, vector<int> &dp)
{
    if(n==0 or n==1) return n;
    
    if(dp[n] != -1) return dp[n];
    
    int ans = fib(n-1,dp) + fib(n-2,dp);
    
    //Storgae Step :
    dp[n] = ans;
    
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        cout<<fib(n,dp)<<endl;
    }
    return 0;
}
