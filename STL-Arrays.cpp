//These are arrays wrapped with some functionalities of vector

#include<iostream>
#include<array>
using namespace std;

//Call By Value
void print_array(array<int,5> myArray)  
{
	for(int i=0;i<myArray.size();i++)
	{
		cout<<myArray[i]<<"\t";
	}
}


int main(){
	array<int,5> items;
	for(int i=0;i<items.size();i++)
	{
	    cin>>items[i];
	}
	cout<<endl;
	print_array(items);
	return 0;
}
