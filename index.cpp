#include <iostream>
using namespace std;

// defined enum
enum Mobile {samsung, iPhone, motorolla};

/*
ENUMS (enumerations) = a user-defined data types that consists of paired named-integer constant. 
- Great, if you have a set of potential options.
- take only one value of defined set
- working with enums and creating a set of data will automatically assign indexes to the elements in a set.
*/


int main()
{
  // int size = size(Mobile);
  Mobile mobile = samsung;
  switch (mobile)
  {
  case 0: cout<<"It's a Samsung";
          break;
  case 1: cout<<"It's a I-Phone";
          break;
  case 2: cout<<"It's a Motorolla";
          break;
  default:
    break;
  }
  
  return 0;
};
