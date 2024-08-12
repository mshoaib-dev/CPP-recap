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
//dynamic memory: a pointer pointing to an array
  char *pGrades = NULL;
  int size;
  cout<<"Enter no. of grades: ";
  cin>>size;

  pGrades = new char[size]; // allocating a dynamic heap memory allocation to a pointer pointing to an array of characters

//taking input
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter the grade #"<<i+1<<": ";
    cin>>pGrades[i];
  }

//printing the result
  for (int i = 0; i < size; i++)
  {
  cout<<pGrades[i]<<" ";
  }

//resetting pointer memory
  delete[] pGrades;
  return 0;
};