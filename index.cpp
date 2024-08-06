#include <iostream>
using namespace std;
#define r 2
#define c 3

int main()
{
  int no[r][c] = {
    {4,5,3},
    {4,5,3}
  };

int sum = 0;
  // row sum
  cout<<"Rows sum:    ";

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      sum+=no[i][j];
    }
    cout<<sum<<" ";
    sum=0;
  }
  cout<<'\n';

  //column sum
  cout<<"Columns sum: ";

  for (int j = 0; j < c; j++)
  {
    for (int i = 0; i < r; i++)
    {
      sum+=no[i][j];
    }
    cout<<sum<<" ";
    sum = 0;
  }
  

  return 0;
};