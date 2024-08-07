#include <iostream>
using namespace std;

//max and min using pointers of an array

void minMax(int arr[], int len, int *max, int *min){  // declaring pointers
  *max = *min = arr[0]; //updating value of variable point by pointers by dereferencing them
  for (int i = 0; i < len; i++)
  {
    if (arr[i] > *max)  *max = arr[i];    
    if (arr[i] < *min)  *min = arr[i];
  }
  
};

int main()
{
  int arr[] = {84,53,4,423,0,2024,-2};
  int len = sizeof(arr)/sizeof(arr[0]);
  int max, min;
  
  minMax(arr, len, &max, &min); //passing the address of variable
  cout<<"Max: "<<max<<"\nMin: "<<min;

  return 0;
};