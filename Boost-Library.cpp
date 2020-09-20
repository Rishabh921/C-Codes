#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_int.hpp> 
using namespace std;
using namespace boost::multiprecision;
#define ll long long 

cpp_int fact(int n)
{
    cpp_int res=1;
    for(int i=2;i<=n;i++)
    {
        res*=i;
    }
    cout<<res;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	fact(100);
	
	return 0;
}
