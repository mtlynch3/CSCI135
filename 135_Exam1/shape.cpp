/*
Write a program that first asks the user for a number of rows and columns. 
The number of rows and columns should be of the same parity. That is, they should both be even or both be odd. 
Your program should verify this, and not continue until the user enters a valid input.
After recieving valid input, your program should ask the user for two characters.
Your program should use these characters to print out a shape (with dimensions row and col) as shown below:

Example execution 1:

Enter number of rows and cols: 5 7
Enter characters for shape: $ +
$$$$$$$
$+++++$
$+++++$
$+++++$
$$$$$$$

Example execution 2:

Enter number of rows and cols: 6 7
Number of rows and columns must be both even or both odd.
Enter number of rows and cols: 6 8
Enter characters for shape: # *
########
#******#
#******#
#******#
#******#
########


*/



#include <iostream>
using namespace std;

int main(){
	int rows, cols;

	cout << "Enter number of rows and cols: ";

	cin >> rows >> cols;

	while(rows % 2 != cols % 2){
		cout << "Number of rows and columns must be both even or both odd.\nEnter number of rows: ";

		cin >> rows >> cols;
	}

	cout << "Enter characters for shape: ";
	char border, inside;
	cin >> border >> inside;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if ((i == 0 || i == rows - 1) || (j == 0 || j == cols - 1)){
				cout << border;
			} 
			else {
				cout << inside;
					
			}
		}
		cout << endl;
	}
}