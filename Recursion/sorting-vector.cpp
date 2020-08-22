#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if(v.size()==0 || v[v.size()-1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
     v.push_back(val);
}

void sort(std::vector<int> &v)
{
    if(v.size()==0) return;
    
    int temp = v[v.size()-1];
    v.pop_back();
    sort(v);
    insert(v,temp);
    return;
}

int main() {
	std::vector<int> vec = {2,4,2,1,3,6};
	sort(vec);
	for(int x:vec){cout<<x<<" "; }
	return 0;
}
