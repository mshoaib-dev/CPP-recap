#include <iostream>
using namespace std;

// SORT AN ARRAY: Bubble Sort Algorithm
// It's easy to write but NOT as efficient as others algorithms....

void sortArray(char letter[], int size);
int main()
{
  int array[] = {9,10,5,3,8,1,0,6,2,7,4};
  char letter[] = {'E', 'A', 'C', 'B', 'D'}; // sorting ASCII codes
  int size = sizeof(letter)/sizeof(letter[0]);
  sortArray(letter, size);
  for (int element: letter)
  { 
    cout<<element<<" ";
  }
  
  return 0;
};

void sortArray(char letter[], int size){
  char temp; 

  for (int i = 0; i < size -1; i++) // this loop to iterate over each element in an letter, size-1: don't need to swap the last element 
  {
    for (int j = 0; j < size - i - 1; j++) // this loop to swap the elements in an letter over a fixed iteration, size - i - 1: to swap rest once, or don't need to sort element that are already sorted 
    {
      if (letter[j] > letter[j+1])  // > for asc & < for dec
      {
        temp = letter[j];
        letter[j] = letter[j+1];
        letter[j+1] = temp;
      }
    }
  }
};


