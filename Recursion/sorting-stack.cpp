#include <bits/stdc++.h>
using namespace std;

void insert(std::stack<int> &st,int temp)
{
    if(st.size()==0 || st.top()<=temp)
    {
        st.push(temp);
        return;
    }
     int val = st.top();
     st.pop();
     insert(st, temp);
     st.push(val);
     return;
}

void sortStack(std::stack<int> &st)
{
    if(st.size()==0) return;
    
    int temp = st.top();
    st.pop();
    sortStack(st);
    insert(st,temp);
    return;
}

int main() {
	std::stack<int> sta ;
	sta.push(2);
	sta.push(1);
	sta.push(0);
	sta.push(53);
	sortStack(sta);
	while(!sta.empty())
	{
	    cout<<sta.top()<<" ";
	    sta.pop();
	}
	return 0;
}
