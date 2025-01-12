#include <iostream>
using namespace std;

// SEARCH A INDEX IN AN ARRAY

int searchArray(string array[], int size, string uni);
int main()
{
  // top engineering universities in Pakistan
  string universities[] = {"GIKI", "PIASS", "NUST", "LUMS", "PU"}, uni;
  int size = _countof(universities), rank;
  
  cout<<"Enter the name of university to search for latest rank: \n";
  getline(cin, uni);
  rank = searchArray(universities, size, uni);

  if (rank != -1) cout<<"You entered univerisity rank is: "<<rank<<endl;
  else cout<<"Entered univerity NOT in lasest rank! \n";

  return 0;
};

int searchArray(string array[], int size, string uni){

  for (int i = 0; i < size; i++){
    if (array[i] == uni) {
      return i+1;
    }
  }
  
  return -1;
};

