#include<iostream>
using namespace std;

int main() {
	cout << "Enter two characters: ";
	char one,two;
	cin >> one >> two;

	char* pointers[5];
	for (int i = 0; i < 5; i++) { //rows
    if (i % 2 == 0) { //even row
        pointers[i] = new char[4]; 
        for (int j = 0; j < 4; j++) {
            pointers[i][j] = one;
            cout << pointers[i][j];
        }
        cout << endl;
    }
    else { //odd row
        pointers[i] = new char[2];
        for (int j = 0; j < 2; j++) {
            pointers[i][j] = two;
            cout << pointers[i][j];
        }
      cout << endl;
    }
  }

  for(int i = 0; i < 5;i++){
    delete[] pointers[i]; // each element is a pointer to an array so we need to call delete[]
    pointers[i] = nullptr;
  }
}