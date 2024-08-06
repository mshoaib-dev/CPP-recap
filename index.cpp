#include <iostream>
using namespace std;

// program to find the repeated digits

int main()
{
  int n;
  cout<<"Enter no: ";
  cin>>n;
  int seen[10] = {0};
  int rem;

  while (n>0)
  {  
    rem = n%10;
    if (seen[rem] == 1) break;
    seen[rem] = 1;
    n = n/10;
  }

  if (n>0) cout<<"Yes";
  else cout<<"NO";
  
  return 0;
};
