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

template <typename T>
ll fact(T n)
{
    if(n==0 or n==1)
      return 1;
    return n*fact(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	    int n;
	    cin>>n;
	    ll r = n/2;
	    
	    ll ans = (fact(n) / (fact(r)*fact(n-r))) / 2 * fact(n/2 -1) * fact(n/2 -1);
	    cout<<ans<<endl;
	
	return 0;
}
