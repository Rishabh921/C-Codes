//Works for both arrays and vectors.


#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// your code goes here
	int testCases,num;
	vector<int> myVector;
	cin>>testCases;
	while(testCases)
	{
	    cin>>num;
	    myVector.push_back(num);
	    testCases--;
	}
	sort(myVector.begin(), myVector.end());
	for(int i=0;i<myVector.size();i++)
	{
	   cout<<myVector[i]<<endl;
	}
	
	return 0;
}
