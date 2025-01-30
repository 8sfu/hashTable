#include <iostream>
#include <cstring>
#include <cmath>
#include "Node.h"
#include "Student.h"


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
    cout << fred->getGPA();
    //delete fred;
    cout << endl;
    newStudent(count-1);
  }
  return;
}

int main(){
  int hashArr[100]{};
  srand(time(NULL));

  newStudent(7);

  //cout << "input was 12345678909876543210 and output should be �T���9�" << endl;
  //int input = 12345678909876543210;
  int input = 13;
  int count = 0;
  int quotient;
  int binary = 0;
  do {
    quotient = input % 2;
    binary += + quotient * pow(10,count); 
    cout << "q = " << quotient << " c = " << count << " b = " << binary << endl;
    input /= 2;
    count++;
  } while (input);
  
  
									     
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


