#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i,k,n) for(ll i=k;i<n;i++)
#define vec vector<ll>

int main()
{
    ll n,q;
    cin>>n>>q;
    vec v(n);
    fo(i,0,n) cin>>v[i];
    vec idx(n,0);
    while(q--)     //difference vector technique
    {
        ll l,r;
        cin>>l>>r;
        l--; r--;
        idx[l]++;
        if(r+1 < n) idx[r+1]--;
    }
    fo(i,1,n) idx[i] += idx[i-1];
    sort(idx.begin(),idx.end());
    sort(v.begin(),v.end());
    ll ans = 0;
    fo(i,0,n) ans+=(ll)(idx[i]*v[i]);
    cout<<ans<<endl;
    return 0;
}
