#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double p;
	cin>>p;
	double res = ceil( sqrt( 2* 365 * log(1/(1-p)) ) );
	cout<<"Requiured persons= "<<res;
	
	return 0;
}
