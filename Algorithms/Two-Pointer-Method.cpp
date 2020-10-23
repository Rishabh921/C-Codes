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
	    int n,x;
	    cin>>n>>x;
	    vec(int) v(n);
	    fo(i,0,n) cin>>v[i];
	    int i=0, j=n-1;
	    int first=-1 , last=-1;
	    while(i<j)
	    {
	        if(v[i]+v[j]==x)
	           {
	               first = i; 
	               last = j; 
	               break;
	           }
	       else if(v[i]+v[j] < x)
	           i++;
	       else 
	           j--;
	    }
	    deb(first);
	    deb(last);
	}
	
	return 0;
}
