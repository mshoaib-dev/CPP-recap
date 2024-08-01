#include <iostream>
using namespace std;

// Multi-dimensional Arrays: arrays made up of separate arrays, mostly 2D arrays
// useful it can represent grid/matrix of data i.e., rows and columns
// 1st dimension for ROWS, 2nd dimension for COLUMNS 
// initially, row declaration is optional but column as no. of rows defined will corrospond to the rows not declared
// arrays (each row) separated by commas, ultimately packed into curcly braces

int main()
{
  // two dimensional array declaration:
  string cars[][3] = {
    {"Mustang", "Escape", "F-150"}, // by FORD
    {"Corvette", "Equinox", "Silverado"}, // by CHEVROLET
    {"Challenger", "Durango", "Ram 1500"} // by DODGE
  };

  //dimensions
  int rows = sizeof(cars)/sizeof(cars[0]);
  int columns = sizeof(cars[0])/sizeof(cars[0][0]);
  
  //displaying result
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < columns; j++)
    cout<<cars[i][j]<<", ";
    cout<<"\n";
  }
  
  return 0;
};
