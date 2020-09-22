#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a,ll b,ll &x, ll &y)
{
    if(b==0)
    {
        x=1; 
        y=0;
        return a;
    }
    ll x1, y1;
    ll d=gcd(b,a%b,x1,y1);
    x=y1;
    y=x1- y1 * floor(a / b);
    return d;
}


int main() {
     ll u,v,x,y;
    cin>>u>>v;
    ll m=gcd(u,v,x,y);
    cout<<"gcd="<<d<<"\n";
    cout<<x<<" "<<y; //coefficients for ax+by=gcd(a,b)
    return 0;
}
