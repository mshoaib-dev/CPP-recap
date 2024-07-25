#include <iostream>
using namespace std;

/*
ARRAY: A data structure that can hold multiple values, values are accessed by an index number, like a variable that can hold multiple values. It can only contain values of the same data type.
It’s static data strucute, there is to declare the size of array is we have to define an array or assigning the values later in the code. 

PASSING AN ARRAY TO A FUNCTION:
passing an array to a function in given case, there is use of pointer
the given function points to the address where the array begins not that array itself, 
passing an array to a function only require array name not the brackets 
when a function receives an array, it decays to an pointer, function no longer knows what's the size of an array, we could pass the size to iterate the elements of an array

*/

double getTotal(double charges[], int size);
int main()
{
  double charges[] = {434.45, 534.45, 53.76, 90.5989, 984};
  int size = _countof(charges);
  double total = getTotal(charges, size);
  cout<<"$"<<total<<"\n";
  return 0;
};

double getTotal(double charges[], int size){
  
  double total = 0;
  for (int i = 0; i < size; i++)
  {
    total += charges[i];
  }
  
  return total;
};