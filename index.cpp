#include <iostream>
using namespace std;

//Dynamic/Run Time Polymorphism
//e.g, 1. Function Overriding, 2. Virtual Functions
// here Student class's getInfo function will be override by child class GradStudent if child's object is initiated.

class Student{
public:
  string name; 
  int rollNo = 123;
  
//function overloading-1
  void getInfo(string name){
    this->name = name;
    cout<<"Student (Parent Class) = "<<name<<endl;
  }

//virtual function declared
  virtual int roll(){
    cout<<"Roll no from Base Class: ";
    return rollNo;
  }
};

// Derived class
class GradStudent: public Student{
public:
  bool graduated;

//function overloading-2
  void getInfo(string name){
  this->name = name;
  this->graduated = true;
  cout<<"GradStudent (Child Class)  = "<<name;
  cout<<endl<<"Status of graduation (Child Class) = "<<graduated<<endl;
  }

//virtual function overriding
  int roll(){
    rollNo = 321;
    cout<<"Roll no. from Derived Class: ";
    return rollNo;
  }
};

int main()
{
  GradStudent s1;
  s1.getInfo("Muhammad Shoaib");
  cout<<s1.roll();
  return 0;
};