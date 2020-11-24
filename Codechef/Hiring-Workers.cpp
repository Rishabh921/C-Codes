#include <bits/stdc++.h>
#define ll long long int
using namespace std;
void prime_fac(ll n,vector<ll> & A)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        ll count = 0;
        if(n%i==0)
        {
            while(n%i==0)
            {
                count++;
                n = n/i;
            }
            A.push_back(pow(i,count));
        }
    }
    if(n>1)
    A.push_back(n);
}
ll getSum(vector<ll> &ar){
  ll sum = 0;
  
  for(ll i: ar) sum+=i;
  
  return sum;
}

ll bruteforce(ll pos, vector<ll> &arr, vector<ll> &factors){
  
  if(pos == factors.size()){
    return getSum(arr);
  }
  
  ll ans = INT_MAX;
  
  for(ll i = 0;i<arr.size(); i++){
    arr[i]*= factors[pos];
    ans = min(ans, bruteforce(pos+1, arr, factors));
    arr[i]/=factors[pos];
    
  }
  
  
  return ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll k,x;
        vector<ll>A;
        cin>>k>>x;
        prime_fac(x,A);
        if(A.size()<=k)
        {
            ll sum = 0;
            for(ll i=0;i<A.size();i++)
            {
                sum+=A[i];
            }
            cout<<sum+k-A.size()<<endl;
        }
        else
        {
            vector<ll> arr(k, 1);
     ll sum = bruteforce(0, arr, A);
            cout<<sum<<endl;
        }
    }

    return 0;
}

