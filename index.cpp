#include <iostream>
using namespace std;

//finding median of an sorted array by Bubble Sort Algorithm

//sorting an array
void sortArray(int arr[], int len)
{
  int temp = 0;

  for (int i = 0; i < len -1; i++)
  {
    for (int j = 0; j < len - 1 - i; j++)
    {
      if (arr[j] > arr[j+1]) // Ascending order
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
};

//finidng median of sorted array
void median(int arr[], int len, double *pMed){
  if (len % 2 == 0) *pMed = (double) (arr[len/2] + arr[len/2 - 1]) / 2; //even length
  else *pMed = arr[(len -1)/2]; // odd length
};

int main()
{
  cout<<"\n***********************************\n";
  cout<<"MEDIAN OF AN SORTED ARRAY\n";
  cout<<"***********************************\n";
  
  int arr[] = {84,53,4,423,0,2024, -1};
  int len = sizeof(arr)/sizeof(arr[0]);
  int max, min;
  double med;

  sortArray(arr, len);
  
  //printing sorted array
  cout<<"Sorted array in ASC order:  "<<'\n';
  for (int i = 0; i < len; i++)
  {
    cout<<arr[i]<<" ";  
  }

  median(arr, len, &med);
  cout<<"\n\nMedia = "<<med;
  cout<<"\n***********************************\n";
  return 0;
};