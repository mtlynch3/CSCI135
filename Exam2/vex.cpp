//fillVector: fill a vector with random numbers
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

//given: rand() % 100 + 1 will give a random number in range 1 to 100
void fillVector(vector<int>& vec, int amount){
	for(int i = 0; i < amount; i++){
		vec.push_back(rand() % 100 + 1);
	}
}

void printVector(const vector<int>& vec){
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << " ";
	}
	cout << endl;
}

vector<int> getValues(const vector<int>& vec, int threshold){
	vector<int> result;
	for(int i = 0; i < vec.size(); i++){
		if(vec[i]>threshold){
			result.push_back(i);
		}
	}
	return result;
}

int main(){
	srand(time(NULL)); //initializes random number generator

	vector<int> test;
	fillVector(test,10);
	printVector(test);
	vector<int> test_results = getValues(test, 50);
	printVector(test_results);

	/* sample run:
		8 50 74 59 31 73 45 79 24 10 
		2 3 5 7 
	*/

	vector<int> test2;
	fillVector(test2,7);
	printVector(test2);
	vector<int> test2_results = getValues(test2, 35);
	printVector(test2_results);

	/* sample run:
		71 13 93 94 92 31 25 
		0 2 3 4 
	*/

}