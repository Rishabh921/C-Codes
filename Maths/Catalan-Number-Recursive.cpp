#include <bits/stdc++.h> 
using namespace std;
#define ll long long

int catalan(int num)
{
    if(num <= 1) return 1;
    int res=0;
    for(int i=0;i<num;i++)
      res+= catalan(i)*catalan(num-i-1);
    return res;
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
