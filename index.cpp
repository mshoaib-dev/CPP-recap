#include <iostream>
using namespace std;

//static object

class AUTO{
public:
  AUTO(){
    cout<<"constructor\n";
  }
  ~AUTO(){
  cout<<"destructor\n";
  }
};

int main()
{
  if(true){
    // AUTO a; 
    static AUTO a;
  };
  
  cout<<"End of main function\n";
  return 0;
};