#include <iostream>
using namespace std;
#define r 3
#define c 3

// rows and columns elements addition, transport of a matrix implemented here, this is only TRUE for SQUARE Matrix
int main()
{
  int arr[r][c] = {{2,1,1},{2,5,2},{3,3,9}};
  int rowSum = 0, colSum= 0;

// row sum  
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      rowSum +=arr[i][j]; // each row fixed for all columns
    }
    cout<<rowSum<<" ";
    rowSum = 0;
  }  
    cout<<'\n';
// column sum
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      colSum +=arr[j][i]; // each column fixed for all rows
    }
    cout<<colSum<<" ";
    colSum = 0;
  }  
  return 0;
};
