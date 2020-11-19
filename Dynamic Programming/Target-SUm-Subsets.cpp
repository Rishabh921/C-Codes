#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,k,n) for(int i=k;i<n;i++)
#define deb(x) cout<<#x<<"="<<x<<endl

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    fo(i,0,n) cin>>v[i];
    sort(v.begin(),v.end());
    int target;
    cin>>target;
    vector<vector<bool>> dp(n+1,vector<bool>(target+1));
    for(int i=0;i<dp.size();i++)
    {
        for(int j=0;j<dp[i].size();j++)
        {
            if(i==0 and j==0) dp[i][j]=true;
            else if(i==0) dp[i][j]=false;
            else if(j==0) dp[i][j]=true;
            else
            {
                if(dp[i-1][j]==true)
                   dp[i][j]=true;
                else
                {
                    int val = v[i-1];
                    if(j>=val)
                    {
                        if(dp[i-1][j-val]==true)
                           dp[i][j]=true;
                    }
                }
            }
        }
    }
    if(dp[v.size()][target]==true) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    return 0;
}
