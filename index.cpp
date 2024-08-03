#include <iostream>
using namespace std;

// memory address = a location in memory where the data is stored
// a memory address can accessed with &(ampersand) -> address of Operator

int main()
{
  string name = "Shoaib"; // 32 byte
  bool boolean = true; // 1 byte
  int num = 65; // 4 bytes  

  //memory address of defined variables
  cout<<&name<<endl;
  cout<<&boolean<<endl;
  cout<<&num<<endl;
  cout<<sizeof(name);
  
  return 0;
};
