#include <iostream>
using namespace std;
 
// ternary operator ?: = replacement for if/else statements
// condition ? expression1 : expression2;
int main()
{
  int chromosome = 46;
  // chromosome == 46 ? cout<<"You're human" : cout<<"You're aren't";
  cout<<(chromosome == 46 ? "You're  a human" : "You're aren't");
  return 0;
};