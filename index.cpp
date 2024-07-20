#include <iostream>
using namespace std;

int main()
{
/* 
cin >> Extraction Operator
cout << Insetion Operator
To accept input with white spaces or sequence of text use getline() fun.
input buffer automatically add next line if cin is called before getline()

*/
  string brand, gen;   
  int demand;
  cout<<"Name of company: ";
  cin>>brand;
  cout<<"Name of Laptop Generation";
  getline(cin, gen);
  cin>>gen;
  getline(cin >> ws,gen); // ws: whitespace to get avoid
  cout<<"How much you ask?";
  cin>>demand;

  cout<<"You've asked: "<<demand<<" for " <<brand<<"having generation of: "<< gen; 
  return 0;
};