#include <iostream>
using namespace std;

// filling an array with a user input, STATIC APPROACH. 

int main()
{
  // array initialization
  string staff[5];
  int size = sizeof(staff)/sizeof(staff[0]); // no. of elements
  string temp;

  //getting user input
  for (int i = 0; i < size; i++)
  {
    cout<<"Enter name(s) of staff or exit #"<<i+1<<": ";
    getline(cin, temp);

    if(temp == "exit"){
      break;
    }
    else{
      staff[i] = temp;
    }
  }
   
  // displaying the results
  cout<<"You entered: \n";
  for(int i = 0; !staff[i].empty(); i++){
    cout<<staff[i]<<endl;
  };

  return 0;
};
