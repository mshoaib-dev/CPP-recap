#include <iostream>
// #include <string>
using namespace std;

//Shallow and Deep Copy Constructor

class Student{
public:
  string name; 
  int *rollNoPtr;

  Student(string name, int rollNo){
    this->name = name;
    rollNoPtr = new int;  // allocated new memory at runtime in a HEAP for DAM
    *rollNoPtr = rollNo;
  }

//custom copy constructor
  // Student(Student &origObj){
  //   this->name = origObj.name;
  //   this->rollNoPtr = origObj.rollNoPtr;
  // }

  void getInfo(){
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<*rollNoPtr<<endl;
  }
};

int main()
{
  Student student1("M.Shoaib", 123);
  student1.getInfo();
  Student student2(student1); // default copy-constructor
  *(student2.rollNoPtr) = 321; // updating the value of rollno for student2, but due to shallow copy, it's reflecting in student1 too. Even with default/custom copy-constructor.
  student2.getInfo();
  student1.getInfo();

  return 0;
};