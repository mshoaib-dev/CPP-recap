#include <iostream>
using namespace std;

/*
OBJECT = A collection of attributes (properties) and method (functions)
- They can have characteristics and could perform actions
- They can be used to mimic real-world items i.e., Phone, Book, Plantes
- Relate the properties (attributes) and actions (methods) of real-world items.
- Created from a class which acts like a "blue-print"
*/

// initializing a class
class Car
{
  public:
// properties/attributes
    string make;
    string model;
    int year;
    string color;

//methods (actions by Car)
  void accelarator(){
    cout<<"   It accelarates\n";
  }
  void ignition(){
    cout<<"   Self ignition\n";
  }

};

int main()
{
//creating instances of class = OBJECT
  Car car1;
  
// assining values to properties  
  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year = 2024;
  car1.color = "Black";

//printing the results
  cout<<"Brand: "<<car1.make<<'\n';
  cout<<"Model: "<<car1.model<<'\n';
  cout<<"Year: "<<car1.year<<'\n';
  cout<<"Color: "<<car1.color<<'\n';

//invoking methods (actions)
cout<<"Actions: \n";
car1.accelarator();
car1.ignition();

  return 0;
};