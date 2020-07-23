#include<iostream>
#include <vector>
using namespace std;

//In this problem, you will have to implement the given class, as well as test it with a main function. 
//This class represents a simple task manager, that can "open" and "close" files by updating a list

class TaskManager {
public:
    //default constructor: sets all list elements to empty string
    TaskManager();
    //paramterized constructor: sets list to given vector 
    TaskManager(const vector<string>& tasks);
    //adds the app to the list
    void openApp(string app);
    //will remove the app with the given name from the list
    void forceQuit(string app);
    //gets the number of apps currently in list
    int numberOfApps();
    //prints all apps in list 
    void printList();
private:
    vector<string> list; 
};

//part A: implement the public interface
//all implementations are basic/self-explanatory besides forceQuit
//forceQuit: this function should first check if the list is empty
//if the list is empty, the function should alert the user and return
//next, you need to find the index of the given app in the list
//you should initialize this index variable to -1 in case the app is not found in the list
//search the list for the given app name, and if it is found, store its index
//if the app was not found in the list, the function should alert the user and return
//assuming we have a valid index for our list, we want to remove the element at that position
//while maintaining the order of the list. 


TaskManager::TaskManager() {
  for(int i = 0; i < list.size(); i++){
    list[i]= "";
  }  
}
//initialize list with existing vector
TaskManager::TaskManager(const vector<string>& tasks) {
  list = tasks; 
}

int TaskManager::numberOfApps(){
  return list.size();
}

void TaskManager::openApp(string app) {
    list.push_back(app);
}

void TaskManager::forceQuit(string app){
  //check for empty list
  if(list.size() == 0){
    cout << "There are no apps running." << endl;
    return; 
  }

  //get idx of given app
  int idx = -1;
  for(int i = 0; i < list.size(); i++){
    if(list[i] == app){
      idx = i;
    }
  }

  // error checking
  if(idx == -1) {
    cout << "This app is not currently open." << endl;
    return;
  }

  //remove
  for(int i = idx; i < list.size()-1; i++){
    list[i] = list[i+1];
  }
  list.pop_back();
}

void TaskManager::printList() {
  for(int i = 0; i < list.size(); i++){
    cout << list[i] << endl;
  }
}

int main() { 

  //test
  //use the parameterized constructor to create a TaskManager object
  //based on an existing vector
  //this TaskManager object should be dynamically allocated
  vector<string> v = {"Spotify", "Slack", "Terminal"};
  TaskManager* list = new TaskManager(v); //paramterized constructor
  //add two tasks to the list
  list->openApp("Google Chrome");
  list->openApp("Sublime Text");
  //force quit an app in the list
  list->forceQuit("Google Chrome");
  //print the apps in the list
  list->printList();

  //delete the object and fix the dangling pointer
  delete list;
  list = nullptr;

  


}