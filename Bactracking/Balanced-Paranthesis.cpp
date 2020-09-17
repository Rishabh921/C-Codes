#include <bits/stdc++.h> 
using namespace std;
#define ll long long 

void go(int n,string ans="",int openCount=0,int closeCount=0)
{
    if(closeCount==n)
    {
        cout<<ans<<endl;
        return;
    }
    
    if(openCount>closeCount)
    {
        go(n,ans+")",openCount,closeCount+1);
    }
    if(openCount<n)
    {
        go(n,ans+"(",openCount+1,closeCount);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	go(n);
	
	
	return 0;
}
