#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int guesses[10], count=0;
	int size = sizeof(guesses) / sizeof(guesses[0]);
	for(int i=0;i<size;i++)
	{
	   if(cin>>guesses[i])
	   {
	   	count++;
		}
		else
		{
			break;
			}	
	}
	for(int i=0;i<count;i++){
		cout<<guesses[i]<<"\t";
	}
	string name;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	cin>>name;
	cout<<endl<<name;
	return 0;
	
}
