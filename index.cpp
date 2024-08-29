#include <iostream>
using namespace std;

// ABSTARCTION
// 1. Access Modifiers/Specifiers, 2. Abstract Class.
// This code is also implementing runtime polymorphism using virtual function.

class Shape{ //abstact class
public: 
  virtual void draw() = 0; //pure virtual function
};

class Square: public Shape{
public:
  void draw(){
    cout<<"Class for drawing Square!";
  };
};
int main()
{
  Square s1;
  s1.draw();

  return 0;
};