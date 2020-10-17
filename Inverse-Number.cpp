//Problem Link : https://www.youtube.com/watch?v=dbk42TKwk4M

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin>>n;
    string str = to_string(n); //int to string
    vector<int> v;
    for(char a : str)
    {
        int x = (int)a - 48; //char with numbers to int
        v.push_back(x);
    }
    vector<int> ans(v.size());
    reverse(v.begin(),v.end()); //to reverse a vector
    int i=1;
    for(int x: v)
    {
        ans[x-1]=i;
        i++;
    }
    
    reverse(ans.begin(),ans.end());
    str="";
    for(int x : ans) 
    {
        str.append(to_string(x)); //string to int and appending in string
    }
    cout<<str;
    
    
}
