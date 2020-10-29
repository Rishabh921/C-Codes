#include <bits/stdc++.h> 

using namespace std;

#define ll long long 
#define deb(x) cout<<#x<<" = "<<x<<endl;
#define fo(i, k ,n) for(int i=k;i<n;i++)
#define vec(type) vector<type>

template <typename T>
T power(T x, T y) 
{ 
	T temp; 
	if(y == 0) 
		return 1; 
	temp = power(x, y / 2); 
	if (y % 2 == 0) 
		return temp * temp; 
	else
	{ 
		if(y > 0) 
			return x * temp * temp; 
		else
			return (temp * temp) / x; 
	} 
} 

int countDigit(long long n) 
{ 
    return floor(log10(n) + 1); 
} 

void searchInMatrix(vector<vector<int>> v, int key)
{
    int i=0,j=v[0].size()-1; deb(j);
    int flag=0;
    while(i>=0 and i<v.size() and j>=0 and j<v[0].size())
    {
        deb(v[i][j]); deb(key);
        if(v[i][j]==key)
         {
             flag+=1;
             break;
         }
        else if(v[i][j] < key)
           i++;
        else if(v[i][j] > key)
           j--;
    }
    deb(i); deb(j);
    if(!flag) cout<<"NOT FOUND"<<endl;
    else cout<<"FOUND AT ("<<i<<" , "<<j<<")"<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<vector<int>> v(n, vector<int> (m));
	    fo(i,0,n)
	    {
	        fo(j,0,m)
	          cin>>v[i][j];
	    }
	    int key;
	    cin>>key;
	    searchInMatrix(v,key);
	    
	}
	
	return 0;
}
