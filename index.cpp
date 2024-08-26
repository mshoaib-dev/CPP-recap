#include <iostream>
using namespace std;

//INHERITANCE (Multiple Type)

class Person{  // class-1
public:
  string name; 
  int age;

// custom-constructor
  Person(string name, int age){
    this->name = name;
    this->age = age;
  }

};

class Student{ // class-2
public: int rollNo;

//derived class constructor
  Student(int rollNo){
    this->rollNo = rollNo;
  }
};

class GraduateStudent : public Person, public Student{ // this class inherited from class-1 & class-2 
public: bool graduate; 
  GraduateStudent(string name, int age, int rollNo, bool graduate) : Person(name, age), Student(rollNo){
    this->graduate = graduate;
  };

//getting the result  
  void getInfo(){
  cout<<"Name: "<<name<<endl;
  cout<<"Age: "<<age<<endl;
  cout<<"RollNo: "<<rollNo<<endl;
  cout<<"Graduate: "<<graduate<<endl;
}
};

int main()
{
  GraduateStudent gradStudent1("M.Shoaib", 20, 123, true);
  gradStudent1.getInfo();
  return 0;
};