#include <iostream>
#include <string>
using namespace std;
 
/*  
WHILE LOOP: It is much like IF statement, except we can repeat the code potentially infinite amount of time, as long as the condition remains true. 
Great use: Can force the user to do something in order to continue with rest of the code. 

DO WHILE: do some block of code first, THEN repeat again if condition is true

Given conditions used mostly with loops:
BREAK: break out of a loop, used in switch-cases too, and in loops
CONTINUE: skip current iteration

NESTED LOOP: loop inside another loop, both loops must have different iterating variable
*/

string name;
double temp;

int main()
{
  //while-loop
  cout<<"Enter your name: "<<endl;
  getline(cin, name);
  while (name.empty())
  {
    cout<<"Enter your name:"<<endl;
    getline(cin, name);
  }
  cout<<"Salaam, "<<name<<endl;
  
  //do-while
  do{
    cout<<"Enter temperature for boiling point of water: "<<endl;
    cin>>temp; 
  } while (temp != 100);
  cout<<"Great!";
  
  // continue, break conditions
  for (int i = 0; i < 6; i++)
  {
    if(i == 3) continue;
    if(i == 3) break;
    cout<<i<<endl;
  }
  
  // nested-loop

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  return 0;
};