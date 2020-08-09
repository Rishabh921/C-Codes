#include<iostream>
#include<vector>
using namespace std;

//Call By Value
void print_vector(vector<int> myVector)  
{
	for(int i=0;i<myVector.size();i++)
	{
		cout<<myVector[i]<<"\t";
	}
}

//Call By Reference
void print_vector_reference(vector<int> &myVector)
{
	myVector.push_back(100);
	for(int i=0;i<myVector.size();i++)
	{
		cout<<myVector[i]<<"\t";
	}
	cout<<endl;
}

int main(){
	vector<int> items; //to create vector
	items.push_back(12); //to push elements in a vector
	items.push_back(56); 
	items.push_back(33);
	cout<<"Vector Size = "<<items.size()<<endl; //to get the size of vector
	items.pop_back();  //to pop out last element of vector
	cout<<"Front element= "<<items.front()<<endl; //to get first element of vector
	cout<<"Last element= "<<items.back()<<endl; //to get last element of vector
	print_vector(items);
	cout<<endl;
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	print_vector_reference(items);
	vector<int> newItems = items; //This will copy the content of items to newItems.
	                              //We can use this with vectors and STL Arrays but not with normal arrays
	return 0;
}
