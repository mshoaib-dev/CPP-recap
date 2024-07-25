#include <iostream>
using namespace std;

/*
ARRAY: A data structure that can hold multiple values, values are accessed by an index number, like a variable that can hold multiple values. It can only contain values of the same data type.
It’s static data strucute, there is to declare the size of array is we have to define an array or assigning the values later in the code. 

Sizeof() Operator 
Determine the size in bytes of a: 
> variable > data type
> class > object, etc.
No. of elements in an array = sizeof(arrayName) / sizeof(dataType) 

foreach loop: loop that eases the traversal over an iterable data set. 
using foreach loop, we can go forward, backward and can skip iteration
it not use the expression part as used in forLoop
steps for foreach loop:
> add the data type iterating over, name of the current element,use colon symbol, name of data set/array-name.....in expression part
*/

int main()
{
  int chair = 10; // 4-bytes
  string table = "Hexagon"; // 32-bytes
  bool pass = true; // 1-bytes
  char grade = 'A'; // 1-bytes
  char grades[] = {'A', 'B', 'C', 'D', 'E'};  // 5-bytes, each character 1 byte
  string board[] = {"GM", "DCM", "HR", "CEO", "DM"};  // 160-bytes, each string 32 bytes

  cout<< sizeof(board)<<endl;  
// No. of elements in an array = sizeof(arrayName) / sizeof(dataType) 
// sizeof(board)/sizeof(string) == _countof(board);
  cout<< sizeof(board)/sizeof(string)<<" # of elements"<<endl;  
  cout<< sizeof(board)/sizeof(board[0])<<" # of elements"<<endl;  

  //iterating array usign foreach loop
  // traditional approach
  for (int i = 0; i < sizeof(board)/sizeof(string); i++)
  {
    cout<<board[i]<<endl;
  }
  
  // using foreach loop
  for(string board: board)
  {
    cout<<board<<endl;
  }

  return 0;
};