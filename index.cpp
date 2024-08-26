#include <iostream>
using namespace std;

//INHERITANCE (Single Level Type)

class Person{ //Base class
public:
  string name; 
  int age;

// custom-constructor
  Person(string name, int age){
    this->name = name;
    this->age = age;
  }

//base-destructor
  ~Person(){
    cout<<"Parent destructor\n";
  }
  
};

class Student : public Person{ //Derived Class
public:
  int rollNo;

//derived class constructor
  Student(string name, int age, int rollNo) : Person(name, age){
    this->rollNo = rollNo;
  }

//child-destructor
  ~Student(){
    cout<<"Child destructor\n";
  }

//result
  void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"RollNo: "<<rollNo<<endl;
  }
};

int main()
{
  Student student1("M.Shoaib", 20,123);
  student1.getInfo();
  return 0;
};