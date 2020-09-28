#include <bits/stdc++.h> 
#include <boost/multiprecision/cpp_dec_float.hpp> 
#include <boost/math/constants/constants.hpp> 
using namespace std;
using namespace boost::multiprecision;
using boost::multiprecision::cpp_dec_float_50;
#define ll long long 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n, ele;
        cin>>n>>ele;
        int ans = -1;
        vector<int> v(n);
        for(int i=0;i<5;i++) cin>>v[i];
        int l=0 , r=n-1;
        while(r-l >= 0)
        {
            int mid = l + (r-l)/2;
            if(v[mid] == ele)
            {
               // cout<<"mid="<<mid<<" value="<<v[mid]<<endl;
               ans = mid;
               //r=mid-1; //First Occurence
               l=mid+1; // Last Occurence
            }
            else if(v[mid]<ele)
            {
                if(v[mid] < v[mid+1]) l=mid+1;
                else r=mid-1;
            }
            else
            {
                if(v[mid] < v[mid+1]) r=mid-1;
                else l=mid+1;
            }
            
        }
        cout<<ans<<endl;
    }
	
	
	return 0;
}
