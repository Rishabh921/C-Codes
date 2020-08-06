#include<iostream>
#include<string>
using namespace std;

int main(){
	string name = "What the hell";
	name.insert(3,"  ");   //to insert at any given index
	name.erase(3,2);   //to erase from start to end
	name.pop_back();  //to pop out last element
  name.replace(2,1,"efg"); //to replace from start to given length with given string
  cout<<name.find("the")<<endl;   //returns index of searched substring
  cout<<name.substr(5,3)<<endl;   //extracts the substring starting from given index of given size
  cout<<name.find_first_of("aeiou"); //Searches the string for the first character that matches 
                                     //any of the characters specified in its arguments. If not found then we get npos = 1
                                     // So to check is any of "aeiou" is not in name we can use
                                     //if( name.find_first_of("aeiou) == -1){cout<<"Not Found";}
 
	cout<<name;
	return 0;
}
