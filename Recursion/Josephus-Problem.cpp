#include <bits/stdc++.h> 
using namespace std;

void circleOfDeath(std::vector<int> v, int k, int index, int &ans)
{
    if(v.size()==1)
    {
        ans = v[0];
        return;
    }
    
    index = (index + k)%v.size();
    v.erase(v.begin()+index);
    circleOfDeath(v,k,index,ans);
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	k--;
	std::vector<int> v(n);
	int index = 0, ans = -1;
	for(int i=1;i<=n;i++)
	{
	    v[i-1]=i;
	}
	cout<<"Initial Circle = ";
	for(int x: v) cout<<x<<" ";
	circleOfDeath(v,k,index,ans);
	cout<<endl<<"Last Man Standing = "<<ans<<endl;
	
	
	return 0;
}
