//In this we have used Constructive Algorithm

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
	    vector<vector<int>> v(n,vector<int> (n,0));
	    int j=n-1;
	    fo(i,0,n)
	    {
	        v[i][i]=1;
	        v[i][j]=1;
	        j--;
	    }
	    if(n%2!=0)
	    {
	        v[n/2 - 1][(n+1)/2 -1]=1;
	        v[(n+1)/2 -1][(n+1)/2]=1;
	    }
	    fo(i,0,n)
	    {
	        fo(j,0,n)
	        cout<<v[i][j]<<" ";
	        cout<<endl;
	    }
	}
	
	return 0;
}
