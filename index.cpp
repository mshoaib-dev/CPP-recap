#include <iostream>
// #include <ctime> // use for randorm no. generation
using namespace std;
 
/*  
PSEUDO RANDOM NO. = NOT truly random, but close
need to INTIALIZE random no. generator
perfect for no's like roll of dice, ranged no, flexibilty to get no's in desired range. 
take modulus with that no. within which want to decide the rang
Suitable to generate fake no's for certain game
*/

int main()
{
  srand(time(NULL)); // randomNo. generator
  
  for (int i = 0; i < 10; i++)
  {
    // int num = (rand() % 25) + 1; // +1 for postive no. & exact = outer range. 
    int num = (rand() % 6) + 1;
    // cout<<num<<" ";
  }

  // random-event
  int event = (rand() % 3) + 1;

  switch (event)
  {
  case 1: cout<<"You won Gold Medal"; break;
  case 2: cout<<"You won Silver Medal"; break;
  case 3: cout<<"You won Bronze Medal"; break;
  }
  
  return 0;
};