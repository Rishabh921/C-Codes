#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll size, ele, index=-1;
        cin>>size>>ele;
        ll arr[size];
        for(ll i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        ll l=0, r=size-1;
        ll mid = r + floor((r-l)/2);
        while(r-l > l) // use r-l > 1 instead of l<=r to reduce space complexity
        {
            mid = l + floor((r-l)/2); /// use it instead of mid=(l+r)/2 as it has chance of overflowing
            if(ele == arr[mid])
            {
                index = 1;
                break;
            }
            else if(ele<arr[mid])
            {
                r = mid-1;
            }
            else 
            {
                l = mid+1;
            }
        }
        cout<<index<<endl;
    }
}
