#include <iostream>
using namespace std;

//INHERITANCE (Multi Level Type)

class Person{ //Base class
public:
  string name; 
  int age;

// custom-constructor
  Person(string name, int age){
    this->name = name;
    this->age = age;
  }

};

class Student : public Person{ //Inherited from Person Class
public: int rollNo;

//derived class constructor
  Student(string name, int age, int rollNo) : Person(name, age){
    this->rollNo = rollNo;
  }
};

class GraduateStudent : public Student{ // Inherited from Student Class
public: bool graduate; 
  GraduateStudent(string name, int age, int rollNo, bool graduate) : Student(name, age,rollNo){
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