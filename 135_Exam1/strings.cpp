/*
	Write a program that asks the user for a string. Your program should verify that the length of the string entered is at least 3 characters long.
	If the length of the string is divisble by 4, then the program should print out the first character of the string.
	If the length is divisble by 3 (and not 4), then the program should print out the first TWO characters of the string.
	Otherwise, the program prints out the last 3 characters of the string.

	Example:
	user input: fall
	program prints: f

	user input: summer
	program prints: su

	user input: melissa
	program prints: ssa

	user input: Hippopotamus
	program prints: H
*/

#include <string>
#include <iostream>

using namespace std;

int main() {
	string in;
	cin >> in;
	int len = in.length();

	while (len < 3){
		cin >> in;
		len = in.length();
	}

	if(len % 4 == 0){
		cout << in.substr(0,1) << endl;
	}
	else if (len % 3 == 0){
		cout << in.substr(0,2) << endl;
	}
	else {
		cout << in.substr(in.length() - 3) << endl;
	}

}