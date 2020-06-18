/*
	Create an array of numbers. For each value in the array, square that value and divide it by 2. Store the results in a new array, so your original array of numbers remains unchanged.
	Examples:
	original array: [1,2,3]
	new array: [0.5, 2, 4.5]


	original array: [2.5, 1.4, 9]
	new array: [3.125, 0.98, 40.5]

*/

#include <iostream> 

#include <cmath>

using namespace std;

int main() {
	double og[] = {2.5, 1.4, 9};
	double square[3];

	for (int i = 0; i < 3; i++){
		square[i] = pow(og[i],2) / 2.0;
		 cout << square[i]<< " " ;
	}
	cout << endl;

	/*
		Consider the following array definition: 
		string names[] = {"AAAA", "BBBB", "CCCC"};

		Using a nested for-loop, print out the elements of the array in the following format:
			A-A-A-A
			B-B-B-B
			C-C-C-C
	*/
	string names[] = {"AAAA", "BBBB", "CCCC"};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			if(j!=3)
				cout << names[i][j] << "-";
			else
				cout << names[i][j] << endl;

		}
		
	}
}