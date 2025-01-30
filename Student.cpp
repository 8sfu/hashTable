#include "Student.h"
#include <cstring>
#define ull unsigned long long int

using namespace std;

/*char* idToName(int idNum){
  
  
  
  return binary;
  }*/

Student::Student(int newID){
  firstname = (char*)"cheap";
  lastname = (char*)"eggs";
  id = newID;
  gpa = (double)(newID % 401) / (double)100;
}

char* Student::getFirstName(){
  return firstname;
}

char* Student::getLastName(){
  return lastname;
}

int Student::getID(){
  return id;
}

float Student::getGPA(){
  return gpa;
}

Student::~Student(){
  delete[] firstname;
  delete[] lastname;
}
