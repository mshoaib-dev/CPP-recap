#include <iostream>
using namespace std;

/*
OBJECT = A collection of attributes (properties) and method (functions)
- They can have characteristics and could perform actions
- They can be used to mimic real-world items i.e., Phone, Book, Plantes
- Relate the properties (attributes) and actions (methods) of real-world items.
- Created from a class which acts like a "blue-print"

CONSTRUCTOR = a special method, automatically called when a object is instantiated
- useful for assigning values to attributes as arguments
- it has SAME NAME AS OF CLASS
- refering to the attributes where the constructor is initialized, to access to those attributes/properties 
we can use a keyword 'this->identifierName', passed parameters and local attributes name should be SAME (optional)
- if not using 'this' keyword, for that pass different names of parameters to a constructor
- when using constructor for a class each object initiation must be treated as same, like passing arguments for one and 
not for other object is NOT ALLOWED

OVERLOADED CONSTRUCTOR = multiple constructors with the same name but different types/no. of parameters
- allows for varying arguments that instantiating an object. 
- creating an object with no arguments we need a MATCHING CONSTRUCTOR
- A constructor can be overloaded under: 
1. The return type of the overloaded function.
2. The type of the parameters passed to the function.
3. The number of parameters passed to the function.

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

//constructor & overloaded constructor

  Car(){}; // matching constructor for an object with a no arguments
  Car(string make, string m, int y, string color)
  {
    this->make = make;
    this->model = m;
    this->year = y;
    this->color = color;
  }
  //methods (actions by Car)
  void accelarator(){
    cout<<"It accelarates\n";
  }
  void ignition(){
    cout<<"Self ignition\n";
  }

};


int main()
{
//creating instances of class = OBJECT
  Car car1;
  Car car2("Honda", "Civic", 2023, "Grey");

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

  cout<<"Brand: "<<car2.make<<'\n';
  cout<<"Model: "<<car2.model<<'\n';
  cout<<"Year: "<<car2.year<<'\n';
  cout<<"Color: "<<car2.color<<'\n';
//invoking methods (actions)
car1.accelarator();
car2.ignition();

  return 0;
};