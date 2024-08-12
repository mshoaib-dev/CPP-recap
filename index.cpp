#include <iostream>
template <typename C, typename D>
// using namespace std;

/*
FUNCTION TEMPLATE = describes how the function looks like
- can be used to generate as many overloaded functions as needed
- each using different data types
- overloaded functions (accept and return different data types) based on:

1. The return type of the overloaded function.
2. The type of the parameters passed to the function.
3. The number of parameters passed to the function.

- passing different types of parameters for a function can be handled using overloaded functions, but the code 
becomes messy
- So, solution is to use TEMPLATES predefined for accepting different types of input having same data type on function invoke
- The limitation of above can be solved using TEMPLATE PARAMETERS DECLARATION
- 'auto' keyword will return based on defined template 
- BENIFIT: just need to write a function once and compatible with a different data types
*/

// given function works for all dataTypes but of same type for inst. invoke
// C max(C a, C b){
//   return (a>b) ? a:b;
// }

// given will return for custom data types, address limitation of above function
auto max(C a, D b){
  return (a>b) ? a:b;
}
int main()
{
  std::cout<<max(90.3333,5.6);
  return 0;
};