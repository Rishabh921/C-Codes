#include <bits/stdc++.h> 

using namespace std;

#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define fo(i, k ,n) for(int i=k;i<n;i++)
#define vec(type) vector<type>

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    string a,b;
	    cin>>a>>b;
	    ll ans = 0, n = a.length();
	    for(int i=0;i<n;i+=2)
	    {
	        if(a[i] != b[i])
	        {
	            while(i<n and a[i]!=b[i])
	            {
	                i += 2;
	            }
	            ans++;
	        }
	    }
	    for(int i=1;i<n;i+=2)
	    {
	        if(a[i] != b[i])
	        {
	            while(i<n and a[i]!=b[i])
	            {
	                i += 2;
	            }
	            ans++;
	        }
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}
