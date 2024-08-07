#include <iostream>
using namespace std;
#define MAX 20

int main()
{
  int aRow, aCol, bRow, bCol, bMatrix[MAX][MAX], aMatrix[MAX][MAX], productMatrix[MAX][MAX], sum = 0;
  cout<<"Enter the no. of rows and columns for matrix a: ";
  cin>>aRow;
  cin>>aCol;

// input first matrix elements: 
cout<<"Enter the elements for matrix a: ";

  for (int i = 0; i < aRow; i++)
  {
    for (int j = 0; j < aCol; j++)
    {
      cin>>aMatrix[i][j];
    }
  }

//printing a matrix
cout<<"First matrix: "<<'\n';
for (int i = 0; i < aRow; i++)
{
  for (int j = 0; j < aCol; j++)
  {
    cout<<aMatrix[i][j]<<" ";
  }
  cout<<'\n';
}  

// data for second matrix
cout<<"Enter the no. of rows and columns for matrix b: ";
cin>>bRow;
cin>>bCol;

//test the matrix multiplication condition
if (aCol !=bRow) cout<<"No. of columns of A matrix MUST BE EQUAL to no. of rows of B matrix";
else
{
  cout<<"Enter the elements for matrix b: ";

  for (int i = 0; i < bRow; i++)
  {
    for (int j = 0; j < bCol; j++)
    {
      cin>>bMatrix[i][j];
    }
  }
    
//printing b matrix
cout<<'\n'<<"Second matrix: "<<'\n';
  for (int i = 0; i < bRow; i++)
  {
    for (int j = 0; j < bCol; j++)
    {
      cout<<bMatrix[i][j]<<" ";
    }
    cout<<'\n';
  }  

// calculating product of matrix
  for (int i = 0; i < aRow; i++)
  {
    for (int j = 0; j < bCol; j++)
    {
      for (int m = 0; m < bRow; m++)
      {
        sum += aMatrix[i][m] * bMatrix[m][j];
      }
      productMatrix[i][j] = sum;
      sum = 0;
    }
  }

//printing resultant matrix
cout<<'\n'<<"RESULTANT MATRIX: "<<'\n';
  for (int i = 0; i < aRow; i++)
  {
    for (int j = 0; j < bCol; j++)
    {
      cout<<productMatrix[i][j]<<" ";
    }
    cout<<'\n';
  }
  
}
  return 0;
};
