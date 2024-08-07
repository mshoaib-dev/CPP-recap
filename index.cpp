#include <iostream>
using namespace std;

int main()
{
  int arr[] = {84,53,4,423,0,2024,-2};
  int size = sizeof(arr)/sizeof(arr[0]);
  int max, min;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > arr[i+1])  max = arr[i];
    else if (arr[i]<arr[i+1]) min = arr[i];
  }

  cout<<"Max: "<<max<<'\n';  
  cout<<"Min: "<<min<<'\n';  

  return 0;
};