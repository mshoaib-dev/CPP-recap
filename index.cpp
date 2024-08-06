#include <iostream>
using namespace std;

int main()
{
  int arr[3][3] = {
    {2,1,1},
    {2,5,2},
    {3,3,9}
  };
  int rowSum = 0, colSum1 = 0, colSum2 = 0, colSum3 = 0;
  
  for (int i = 0, m=0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      rowSum +=arr[i][j];
    }
    cout<<rowSum<<" ";
    rowSum = 0;
    colSum1 += arr[i][0];
    colSum2 += arr[i][1];
    colSum3 += arr[i][2];
  }
  cout<<endl<<colSum1<<" ";
  cout<<colSum2<<" ";
  cout<<colSum3<<" ";
  
  return 0;
};