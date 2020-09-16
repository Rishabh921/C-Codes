#include <bits/stdc++.h> 
using namespace std;

void subsequence(string ip,string op)
{
    if(ip.length() == 0)
    {
        if(op=="") cout<<"''"<<" ";
        else cout<<op<<" ";
        return;
    }
    string op1 ,op2;
    op1 = op; op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    subsequence(ip,op1);
    subsequence(ip,op2);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string ip,op="";
	cin>>ip;
	subsequence(ip,op);
	
	return 0;
}
