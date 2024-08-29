#include <iostream>
using namespace std;

//Static/Compile Time Polymorphism
//e.g, constructor overloading & function overloading

class Student{
public:
  string name; 

//non-parameterized constructor
  Student(){
    cout<<"Non-parameterized constructor\n";
  };
//parameterized constructor
  Student(string name){
    this->name = name;
    cout<<"Parameterized constructor\n";
  }

  void getInfo(){
    cout<<"Non-Parameterized function\n";
  }

  void getInfo(string name){
    this->name = name;
    cout<<"Name: "<<name;
  }
};

int main()
{
  Student s1;
  // Student s1("Muhammad Shoaib");
  s1.getInfo();
  s1.getInfo("Muhammad Shoaib");

  return 0;
};