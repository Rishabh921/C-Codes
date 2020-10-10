//using STL function stoi()
//stoi() stands for string to integer, 
//it is a standard library function in C++ STL, 
//it is used to convert a given string in vParameters:

//const string& str is an input string.

//size_t* idx is an optional parameter (pointer to the object whose value is set by the function), it's default value is 0 or we can assign it to nullptr.

//int base is also an optional parameter, its default is 10.
//  It specifies the radix to determine the value type of input string (2 for binary, 8 for octal, 10 for decimal and 16 for hexadecimal).arious formats 
  //  (like binary, octal, hex or a simple number in string formatted) into an integer.
    
    
//Syntax : int stoi (const string&  str, [size_t* idx], [int base]);


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string bin_string = "10101010";
	int number =0;

	number = stoi(bin_string, 0, 2);
	cout<<"bin_string: "<<bin_string<<endl;
	cout<<"number: "<<number<<endl;

	bin_string = "111100001100111010";
	number = stoi(bin_string, 0, 2);
	cout<<"bin_string: "<<bin_string<<endl;
	cout<<"number: "<<number<<endl;

	return 0;
}
