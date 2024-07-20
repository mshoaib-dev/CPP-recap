#include <iostream>
using namespace std;

int main()
{
/* 
  type conversion  = conversion a value of one data type to another
  Implicit = automatic i.e., truncating decimal value to whole no. using int data type.
  Explicit = Precede value with new data type (int, string, char)
*/
  char letter = 84;
  int runs = 280;
  int overs= 50;
  double runRate = (double) runs/overs; 
  cout<<letter<<"he run rate = "<< runRate; 
  return 0;
};