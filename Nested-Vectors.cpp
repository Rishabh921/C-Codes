//This works same as multidimensional arrays


#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector< vector<int> > data = {
	{1,2,3},{4,5,6},{7,8,9}
	};
	for(int i=0; i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<data[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
