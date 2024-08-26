#include <iostream>
using namespace std;

//INHERITANCE (Hierarchical + Single Level Type) = HYBRID INHERITANCE (any 2 types)

class Person{  //Base Class
public:
  string name; 
  int age;

// custom-constructor
  Person(string name, int age){
    this->name = name;
    this->age = age;
  }

};

class Student : public Person{ // Derived - 1 from Base Class
public: int rollNo;

//derived class constructor
  Student(string name, int age, int rollNo) : Person(name, age){
    this->rollNo = rollNo;
  }

//result
  void getInfo(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"RollNo: "<<rollNo<<endl;
};
};

class GraduateStudent : public Person{ // Derived - 2 from Base Class 
public: bool graduate; 
  GraduateStudent(string name, int age, bool graduate) : Person(name, age){
    this->graduate = graduate;
  };

//getting the result  
  void getInfo(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Graduate: "<<graduate<<endl;
}
};

class GTE : public GraduateStudent{ // inherited from GraduateStudent class. (Single Level Inheritance)
public: string degreeProgram;
  GTE(string name, int age, bool graduate, string degreeProgram) : GraduateStudent(name, age, graduate){
    this->degreeProgram = degreeProgram;
  }

//getting the result  
  void getInfo(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"Graduate: "<<graduate<<endl;
  cout<<"Degree Program: "<<degreeProgram<<endl;
}
};

int main()
{
  GraduateStudent gradStudent1("M.Shoaib", 20, true);
  gradStudent1.getInfo();
  Student student1("M.Shoaib", 20, 123);
  student1.getInfo();
  GTE gte1("M.Shoaib", 20, true, "Electrical Engineering");
  gte1.getInfo();
  return 0;
};