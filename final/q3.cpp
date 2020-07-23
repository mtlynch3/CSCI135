#include<iostream>
#include<vector>
using namespace std;

//Define two classes: a Folder and a File
//the Folder should have a name (string), and a vector of Files (vector<File>)
//the File should have a name (string), the content in the folder (string), and a Folder pointer (Folder*) to indicate which folder the File is in. The content should be initialized to the empty string, and the Folder pointer should be initialized with nullptr.

//question 4
class File; //declare because of circular dependency
class Folder{
public:
  string name; //name of folder
  vector<File> files; //files in folder
};

class File{
public:
  string name; //name of file
  string content = ""; //contents of the file
  Folder* folder = nullptr; //where file exists

};

//returns how many files in a folder are empty
int emptyFiles(const Folder& curr){
  int count = 0;
  for(int i = 0; i < curr.files.size();i++){
      if(curr.files[i].content == ""){ //file is empty
        count++;
      }
  }
  return count;
}
//returns whether or not two files are in the same folder
bool sameFolder(const File& file1, const File& file2){
  if(file1.folder == file2.folder){
    return true;
  }
  else {
    return false;
  }
}

int main(){
  File f1, f2, f3;
  f1.name = "hello.txt"; 
  f1.content = "hello";
  f2.name = "numbers.txt";
  f3.name = "main.cpp";
  f3.content = "int main(){ return 0; }";

  Folder dir1, dir2;
  dir1.name = "Projects";
  dir2.name = "Homework";

  //put f1 and f2 in dir1
  //put f3 in dir2

  dir1.files.push_back(f1);
  dir1.files.push_back(f2);
  dir2.files.push_back(f3);

  //correctly set the folder pointers for each file
  f1.folder = &dir1;
  f2.folder = &dir1;
  f3.folder = &dir2;

  //test functions here
  cout << emptyFiles(dir2) << endl;
  cout << sameFolder(f1, f2) << endl;

}