#include<bits/stdc++.h>
using namespace std;
#define ll long long
# define vec vector<string> 

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

int main()
{
    int n;
    cin>>n;
    vec v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int limit = power(2,n);
    for(int i=0;i<limit;i++)
    {
        int temp = i;
        string set="";
        for(int j=v.size()-1;j>=0;j--)
        {
            int rem = temp%2;
            temp/=2;
            if(rem==0)
              set="-\t"+set;
            else
               set = v[j] + "\t" + set;
        }
        cout<<set<<endl;
    }
    return 0;
}
