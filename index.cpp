#include <iostream>
#include <string>
using namespace std;
 
// string methods, find the methods names by using dot . against identifier of string
// for more methods: https://cplusplus.com/reference/string/string/

int main()
{
  string name; 
  cout<<"Enter you name: "<<endl;
  getline(cin, name);

  if(name.length() > 3) cout<<"Welcome "<<name<<endl;
  else if (name.empty()) cout<<"This field can't be empty"<<endl;
  else cout<<"Enter at least 3 characters";

  cout<<name.append(", How have you been today?")<<endl;
  cout<<name.at(2)<<endl; // return the character at iven index, starting from 0
  cout<<name.insert(0, "#")<<endl; 
  cout<<name.find('l')<<endl; // to filter something
  cout<<name.erase(0,3)<<endl;
  name.clear();
  cout<<"Hi, "<<name; //clear the identifier
 
  
  return 0;
};