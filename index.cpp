#include <iostream>
using namespace std;

/*
RECURSION = a programming technique where a function invokes itself from within (nested function call)
- break a complex concept into a repeatable single steps
- usually use if statement for condition validation and then nested function call
-(iterative vs recursive)
- ADV. = less code and is cleaner, useful for sorting and searching algorithms
- DIS. = uses more memory and slower
- Invokig a function add a frame to a stack, when stack is overloaded, it leads to STACK OVERFLOW
*/

int factorial(int n);
int main()
{
  int n;
  cout<<"Enter a # to find factorial: ";
  cin>>n;
  cout<<"Factorial = "<<factorial(n);
  return 0;
};
// iterative approach
int factorial(int n){
  int fact = 1;
  for (n; n > 0; n--)
  {
    fact*=n;
  }
  return fact;
}

//recursive approach
int factorial(int n){
  if (n > 1)  return n * factorial(n-1); // invoking a function from within 
  else return 1;
}