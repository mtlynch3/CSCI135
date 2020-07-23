#include<iostream>
#include<vector>
using namespace std;

//in-place, no helper string made
void reverse(vector<int>& v) {
	int last = v.size()-1;
	for(int i = 0; i <= last/2; i++){
		int temp = v[i];
		v[i] = v[last-i];
		v[last-i] = temp;
	}
}

int count() {
  static int x = 100;
  return x++;
}
/*
int main(){
	for(int i = 0; i < 4; i++){
		cout << count() << endl;
	}
}
*/

double* halvesArray(int n){
	double* arr = new double[n];
	for(int i = 0; i < n; i++){
		arr[i] = i + 0.5;
		//cout << arr[i] << endl;
	}
	return arr;
}

int main(){
	double* arr = halvesArray(6);
	vector<int> v = {1,2,3,4,5};
	reverse(v);
	for(int x : v){
		cout << x << endl;
	}



}