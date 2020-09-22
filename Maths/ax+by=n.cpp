#include <bits/stdc++.h> 
using namespace std; 

void solution(int a, int b, int n) 
{ 
	// traverse for all possible values 
	for (int i = 0; i * a <= n; i++) { 

		if ((n - (i * a)) % b == 0) { 
			cout << i << " "<< (n - (i * a)) / b<<endl; 
			return; 
		} 
	} 

	cout << "No solution"<<endl; 
} 

// driver program to test the above function 
int main() 
{ 
	int a = 2, b = 3, n = 7,t;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	   solution(a, b, n); 
	}
	return 0; 
} 
