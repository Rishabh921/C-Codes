#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ele;
    cin>>ele;
    for(int x:v) cout<<x<<" ";
    cout<<"\nele="<<ele<<endl;
    int l=0, r=n-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(v[mid]==ele)
        {
            cout<<"Index="<<mid;
            break;
        }
        else if(mid-1>=l and v[mid-1]==ele)
        {
            cout<<mid-1;
            break;
        }
        else if(mid+1<=r and v[mid+1]==ele)
        {
            cout<<mid+1;
            break;
        }
        else if(ele < v[mid])
        {
            r=mid-2;
        }
        else
        {
            l=mid+2;
        }
    }
	return 0;
}
