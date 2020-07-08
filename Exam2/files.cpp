#include <iostream>		
#include <fstream>                
using namespace std;	        

int main() {

	ofstream fout("hola.txt");	       
	fout << "Hola, Mundo!";	       
	fout.close();			       

	ifstream fin("hola.txt");
	string line;		       
	getline(fin, line);			       
                                                           
	cout << line << endl;			

	return 0;
}