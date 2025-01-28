#include <iostream>
#include <cstring>

#include "hashstudent.h"


using namespace std;

int foldHash(int key, int tableSize){
  return key % tableSize;
}

void newStudent(int count){
  if(count > 0){
    int newID = rand();
    Student* fred = new Student(newID);
    cout << fred->getFirstName() << " ";
    cout << fred->getLastName() << ", ";
    cout << fred->getID() << ", ";
    //cout << fred->getGPA() << ".";
    //delete fred;
    
    newStudent(count-1);
  }
  return;
}

int main(){
  int hashArr[100]{};
  srand(time(NULL));

  newStudent(7);




  
    
  /*  for(int i = 0; i < 2000000; i++){
    int id = rand();
    int hashId = foldHash(id,100);
    cout << i << " -> " << id << " -> " << hashId << endl;    
    hashArr[hashId] = hashArr[hashId] + 1;
  }
  cout << endl;
  
  for(int i = 0; i < 100; i++){
    cout << i+1 << ": " << hashArr[i] << endl;
    }*/
  
  return 0;
}


