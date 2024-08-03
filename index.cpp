#include <iostream>
using namespace std;

// passing by values: create copies of parameters, here there would be differenct addresses for each variables, local and being passed. 
// passing by reference: pass the variables' memory address where the original values are located. 


// void swap(string var1, string var2); // passed by values
void swap(string &var1, string &var2);  // passed by reference

int main()
{
  
  string var1 = "Google";
  string var2 = "Workspace";

  swap(var1, var2);

  cout<<var1<<"\n"<<var2<<endl;

  return 0;
};

// void swap(string var1, string var2){ // passed by values
void swap(string &var1, string &var2){  // passed by reference

  string temp;

  temp = var1;
  var1 = var2;
  var2 = temp;
};