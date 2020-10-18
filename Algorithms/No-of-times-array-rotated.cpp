//Very important question

#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0 , r=v.size()-1;
    int ans;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        int prev = (n+ mid - 1) % v.size();
        int next = (mid + 1) % v.size();
        
        if(v[mid]<v[prev] and v[mid]<v[next])
          { 
              ans = mid; 
              break;
          }
        
        else if(v[mid]>v[r])
          l=mid+1;
          
         else  
          r=mid-1;
    }

	if(ans==0) cout<<ans;
	else cout<<v.size()-ans;
	return 0;
}
