#include <bits/stdc++.h> 
using namespace std;
#define ll long long

int binomialCoeff(int n, int k)
{
    int res=1;
    if(k > n-k) k=n-k;
    for(int i=0;i<k;i++)
    {
        res*= n-i;
        res/=i+1;
    }
    return res;
}

int catalan(int num)
{
    int ans = binomialCoeff(2*num,num);
    return (ans/(num+1));
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	  cout<<catalan(i)<<" ";
	
	return 0;
}
