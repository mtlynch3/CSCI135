#include <iostream>
using namespace std;

const int ROWS = 8;
const int COLS = 8;

void makeCheckers(char arr[][COLS], char c1, char c2){
	for(int i = 0; i < ROWS; i++){
		for (int j = 0; j < COLS; j++){
			if(i%2==j%2){
				arr[i][j] = c1;
			}
			else {
				arr[i][j] = c2;
			}
		}
	}
}

void halfAndHalf(char arr[][COLS], char char1, char char2){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            //even rows start with the first character
            if(i%2 == 0){
                if (j < COLS/2){ //print first half of row
                    arr[i][j] = char1;
                }
                else{ //print second half of row
                    arr[i][j] = char2;
                }
            }
            else{ //odd rows start with the second character
                if (j < COLS/2){ //print first half of row
                    arr[i][j] = char2;
                }
                else{ //print second half of row
                    arr[i][j] = char1;
                }
            }
        }
    }
}

void makeShape(char arr[][COLS], char c){
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            arr[i][j] = c;
        }
    }
}

void printShape(char arr[][COLS]){
	for(int i = 0; i < ROWS; i++){
		for(int j = 0; j < COLS; j++){
			cout << arr[i][j];		
		}
		cout << endl;
	}
}

int main() {
	char arr[ROWS][COLS];
	makeCheckers(arr,'+','c');
	makeShape(arr,'1');
	halfAndHalf(arr,'*','@');
	printShape(arr);

	return 0;
}