#include <iostream>
using namespace std;

int main()
{
  char oper; 
  double num1, num2, result;

cout<<"************ CALCULATOR ************"<<endl;
cout<<"Enter Operation (+,-,*,/)"<<endl;
cin>>oper;
cout<<"Enter no-1: "<<endl;
cin>>num1;
cout<<"Enter no-2"<<endl;
cin>>num2;

switch (oper)
{
case '+':
  result = num1+num2;
  cout<<"Sum = "<<result<<endl;
  break;

case '-':
  result = num1-num2;
  cout<<"Subtration = "<<result<<endl;
  break;

case '*':
  result = num1*num2;
  cout<<"Times = "<<result<<endl;
  break;

case '/':
  result = num1/num2;
  cout<<"Division = "<<result<<endl;
  break;

default: 
  cout<<"Follow these operations (+,-,*,/)"<<endl; 
  break;
}
  cout<<"************************************";
  return 0;
};