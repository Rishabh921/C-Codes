#include <bits/stdc++.h> 

using namespace std;

#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define debarr(arr) for(auto x: arr) cout<<x<<" "; cout<<endl
#define fo(i, k, n) for(int i=k;i<n;i++)
#define loop(i, k, n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define vec(type) vector<type>
int mod = 1e9 + 7;

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

void reverseArray(vec(int) &arr,int start,int end)
{
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

int main() {
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
	#endif 
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		vec(int) arr(n);
		loop(i,0,n) cin>>arr[i];
		cin>>k;
		reverseArray(arr,0,k-1);
		reverseArray(arr,k,n-1);
		reverseArray(arr,0,n-1);
		debarr(arr); 
	}
	  return 0;
}
