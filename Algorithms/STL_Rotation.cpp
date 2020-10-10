//Rotating array or vector using STL
// using std::rotate algorithm 

#include<bits/stdc++.h> 

int main () { 
	std::vector<int> vec1{1,2,3,4,5,6,7,8,9}; 

	// Print old vector 
	std::cout << "Old vector :"; 
	for(int i=0; i < vec1.size(); i++) 
		std::cout << " " << vec1[i]; 
	std::cout << "\n"; 
	// Rotate vector left 3 times. 
	int rotL=3; 

	// std::rotate function 
	std::rotate(vec1.rbegin(), vec1.rbegin()+rotL, vec1.rend());  // 7 8 9 1 2 3 4 5 6

	// Print new vector 
	std::cout << "New vector after left rotation :"; 
	for (int i=0; i < vec1.size(); i++) 
		std::cout<<" "<<vec1[i]; 
	std::cout << "\n\n"; 

	std::vector <int> vec2{1,2,3,4,5,6,7,8,9}; 

	// Print old vector 
	std::cout << "Old vector :"; 
	for (int i=0; i < vec2.size(); i++) 
		std::cout << " " << vec2[i]; 
	std::cout << "\n"; 

	// Rotate vector right 4 times. 
	int rotR = 4; 

	// std::rotate function 
	std::rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end()); // 6 7 8 9 1 2 3 4 5

	// Print new vector 
	std::cout << "New vector after right rotation :"; 
	for (int i=0; i < vec2.size(); i++) 
		std::cout << " " << vec2[i]; 
	std::cout << "\n"; 

return 0; 
} 