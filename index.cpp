#include <iostream>
using namespace std;

//static keyword

void fun(){
  // int a=0;
  static int a=0; // run 1 time on each funI() call.
  cout<<"a: "<<a<<endl;
  a++;
  cout<<"a: "<<a<<endl;
};

int main()
{
  fun();
  fun();
  fun();
  return 0;
};