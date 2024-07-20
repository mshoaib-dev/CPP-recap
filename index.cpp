#include <iostream>
using namespace std;

namespace one{
    int a = 1;
}

namespace two{
    int a = 2;
}

/* 
Provides a solution for preventing name conflicts in large projects. 
Each entity needs a unique name. 
A namespace allows for identically named entities as long as the namespaces are different. 
Normally assigning two different values to a same variable is not allowed, but it is by defining them in two different namespaces.
*/

int main()
{
//   using namespace two;
  using namespace one;
//   int a = 3;  
//   cout<<two::a;
  cout<<a;
  return 0;
};