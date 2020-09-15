#include <bits/stdc++.h> 
using namespace std;

void towerOfBrahma(int n,int s,int d,int h)
{
    if(n==1)
    {
        cout<<"Moving Plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    towerOfBrahma(n-1,s,h,d); 
    cout<<"Moving Plate "<<n<<" from "<<s<<" to "<<d<<endl;
    towerOfBrahma(n-1,h,d,s); 
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int s=1,h=2,d=3;
	towerOfBrahma(n,s,d,h);
	
	return 0;
}
