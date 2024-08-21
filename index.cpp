#include <iostream>
using namespace std;

/*
Constructor Explained
1. Non-parameterized
2. Parameterized
3. Copy (copy the properties of one object to another.)
- Getter & Setter
- Encapsulation : binding the data and function in a single unit called class
*/

class Car
{
private:
  double carShares;

public:
// properties/attributes/data
  string make;
  string model;
  int year;
  string color;

//1. Non-paremeterized Constructor
  Car(){
    cout<<"This is default constructor.\n";
  }; 

//2. Parameterized Constructor
  Car(string make, string m, int y, string color)
  {
    this->make = make;
    this->model = m;
    this->year = y;
    this->color = color;
  }

//3. Copy Constructor
  Car(Car &origObj){
    cout<<"This is copy constructor\n";
    this->make = "Toyota";
    this->model = origObj.model;
    this->year = 2024;
    this->color = origObj.year;
  }

  void set(double carShares){   //setter
    this->carShares = carShares;
  }

  double get(){   //getter
    return carShares;
  }

//methods/member function (actions by Car)
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
Car car0;
Car car1("Honda", "Civic", 2023, "Grey");

cout<<car1.make<<", ";
cout<<car1.model<<", ";
cout<<car1.year<<", ";
cout<<car1.color<<'\n';

Car car2(car1); // default(if not created explicitly)/custom copy-constructor
cout<<car2.make<<'\n';
car2.set(999999);
cout<<"Car Shares = B$"<<car2.get()<<"\n";

//invoking methods (actions)
car1.accelarator();
car1.ignition();

  return 0;
};