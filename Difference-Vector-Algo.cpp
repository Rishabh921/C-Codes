//You are given an Array of length N with all initial elements as zero. You are
//given Q queries. In each query you will be given 2 values L and R. For each
//query you need to increment the values of all indices in the range [L,R] by 1.
//Print the final array.

//SOL:
// with brute force approach it will take O(Q*N) time
//to optimize we use Difference vector technique which takes O(Q+N) time

//CODE:

#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_dec_float.hpp> 
#include <boost/math/constants/constants.hpp> 

using namespace std;
using namespace boost::multiprecision;
using boost::multiprecision::cpp_dec_float_50;

#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define Fo(i, k ,n) for(int i=k; k<n ? i<n : i>n ; k<n ? i++ : i--)
#define fo(i,n) for(int i=0;i<n;i++)
#define vec vector<int> 

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

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vec v(n,0);
	    int q;
	    cin>>q;
	    while(q--)
	    {
    	    int l,r;
    	    cin>>l>>r;
    	    v[l]++;
    	    if(r+1 < n) v[r+1]--;
	    }
	    Fo(i,1,n) v[i]+=v[i-1];
	    for(auto e : v)
	      cout<<e<<" ";
	    cout<<endl;
	}
	
	return 0;
}
