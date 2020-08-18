#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    else
    {
        cout<<n<<" ";   // to print numbers from n to 0.
        print(n-1);
        //cout<<n<<" "; to print number from 1 to n.
        
    }
}

int main()
{
    int n;
    cout<<"Enetr n";
    cin>>n;
    print(n);

	return 0;
}
