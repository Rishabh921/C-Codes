#include <bits/stdc++.h>
using namespace std;

void pushIn(std::stack<int> &st, int ele)
{
    if(st.size()==0)
    {
        st.push(ele);
        return;
    }
    int temp = st.top();
    st.pop();
    pushIn(st,ele);
    st.push(temp);
    return;
}

void reverseStack(std::stack<int> &st)
{
    if(st.size()==1)
    {
        return;
    }
    int temp = st.top();
    st.pop();
    reverseStack(st);
    pushIn(st,temp);
}

int main() {
	int arr[] = {1,2,3,4,5};
	std::stack<int> sta;
	int size = sizeof(arr)/sizeof(arr[0]);
	//int mid = (size/2) + 1;
	int mid = size%2==0?(size/2):(size/2)+1;
	for(int x : arr) sta.push(x);
	reverseStack(sta);
	while(!sta.empty())
	{
	    cout<<sta.top()<<"\t";
	    sta.pop();
	}
	return 0;
}
