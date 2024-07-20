#include <iostream>
using namespace std;

int main()
{
/* 
  arithmetic operators  = return the result of a specific arithmetic operation(+,-,*,/, %)
  parenthesis
  multiplication & division
  addition & substration
*/
int stock = 100;

//  +
stock = stock + 1;
stock+=1;
stock++;

//  -
stock = stock - 1;
stock-=1;
stock--;
//  *
stock = stock * 2;
stock*=2;

//  /
stock = stock / 20;
stock/=20;

// modulus: return the remainder

int rem = stock % 20;
  cout<<"Stock = "<<stock<<endl;
  cout<<"Remainder = "<<rem;
  return 0;
};