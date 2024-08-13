#include <iostream>
using namespace std;
#define PI 3.14159265359

/*
INHERITANCE  = A class can retrieve attributes and methods from another class 
- Children classes (Derived Class) inherit from a Parent class (Base Class)
- Helps to reuse similar code found within multiple classes
- For multiple classes having shared properties/methods > place them in a Parent class, for code reusability.
*/

//base class
class Shape{
  public:
  double area; 
  double volume;
};

//derived class = Cube
class Cube : public Shape{
  public: int side;
  Cube(int side){
    this->side = side;
    this->area  = 6 * (side * side);
    this->volume  = side * side * side;
  }    
};

//derived class = Sphere
class Sphere : public Shape{
  public: int radius;
  Sphere(int side){
    this->radius = side;
    this->area  = 4 * PI * (radius * radius);
    this->volume  = 4/3.0 * PI *(radius * radius * radius);
  }    
};

int main()
{
// creating instance of Class
Cube cube(10);  
Sphere sphere(10);

cout<<"Cube Area: "<<cube.area<<"cm^2\n";
cout<<"Cube Volume: "<<cube.volume<<"cm^3\n";
cout<<"Sphere Area: "<<sphere.area<<"cm^2\n";
cout<<"Sphere Volume: "<<sphere.volume<<"cm^3\n";

  return 0;
};