#include <iostream>
#include <cmath>
using namespace std;

int main()
{
/* 
for math function: use cmath header file
cplusplus.com/reference/math web resource
*/
  double base, perp, hypo;
  
  cout<<"Enter base value = ";
  cin>>base;
  cout<<"Enter perpendicular value = ";
  cin>>perp;
  
  hypo = sqrt(pow(base, 2) + pow(perp, 2));
   
  cout<<"Hypotenous = "<<hypo; 
  return 0;
};