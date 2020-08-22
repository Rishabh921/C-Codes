#include <bits/stdc++.h>
using namespace std;

void deleteMiddle(std::stack<int> &st, int mid)
{
    if(mid==1)
    {
        st.pop();
        return ;
    }
    int temp = st.top();
    st.pop();
    deleteMiddle(st,mid-1);
    st.push(temp);
    return;
}

int main() {
	int arr[] = {1,2,3,4,5};
	std::stack<int> sta;
	int size = sizeof(arr)/sizeof(arr[0]);
	//int mid = (size/2) + 1;
	int mid = size%2==0?(size/2):(size/2)+1;
	for(int x : arr) sta.push(x);
	deleteMiddle(sta,mid);
	while(!sta.empty())
	{
	    cout<<sta.top()<<"\t";
	    sta.pop();
	}
	return 0;
}
