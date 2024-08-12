#include <iostream>
using namespace std;

/*
DYNAMIC MEMORY = Memory that is allocated after the program is already complied and running.
- Use the 'new' operator to allocate memory in the heap rather than the stack.
- Useful when don't know how much memory we'll need. Make the program more flexible especially when 
accepting a user input.
- It's a good practive to delete the dynamic memory literal to reset the memory.
- 'delete' operator is used alongwith 'new' operator. 
*/  

int main()
{
  //initializing a pointer
  int *pNum = NULL;
  pNum = new int; // new keyword followed by data type
  *pNum = 423;

  cout<<"Address: "<<pNum<<'\n';
  cout<<"Value: "<<*pNum<<'\n';

  delete pNum; // deleting heap pointer
  
  cout<<"Updated Address: "<<pNum<<'\n';
  cout<<"Updated Value: "<<*pNum<<'\n';
  
  return 0;
};