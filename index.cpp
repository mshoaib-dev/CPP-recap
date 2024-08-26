#include <iostream>
using namespace std;

//INHERITANCE (Hierarchical Type)

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

int main()
{
  GraduateStudent gradStudent1("M.Shoaib", 20, true);
  gradStudent1.getInfo();
  Student student1("M.Shoaib", 20, 123);
  student1.getInfo();
  return 0;
};