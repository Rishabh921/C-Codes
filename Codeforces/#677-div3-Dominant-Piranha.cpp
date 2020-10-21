#include <bits/stdc++.h> 

using namespace std;

#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define fo(i, k ,n) for(int i=k;i<n;i++)
#define vec(type) vector<type>

template <typename T>
T power(T x, T y) 
{ 
	T temp; 
	if(y == 0) 
		return 1; 
	temp = power(x, y / 2); 
	if (y % 2 == 0) 
		return temp * temp; 
	else
	{ 
		if(y > 0) 
			return x * temp * temp; 
		else
			return (temp * temp) / x; 
	} 
} 

int countDigit(long long n) 
{ 
    return floor(log10(n) + 1); 
} 

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vec(ll) v(n);
	    fo(i,0,n) cin>>v[i];
	    ll idx=-1;
	    ll max = *max_element(v.begin(),v.end());
	    fo(i,0,n)
	    {
	        if(v[i] != max) continue;
	        if(i>0 and v[i]>v[i-1]) idx = i+1;
	        if(i<n-1 and v[i]>v[i+1]) idx=i+1;
	    }
	    cout<<idx<<endl;
	}
	
	return 0;
}
