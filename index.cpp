#include <iostream>
using namespace std;

/*
ABSTRACTION = hiding an unnecassary data from outside a class
- getter = function that makes a private attribute READABLE
- setter = function that makes a private attribute WRITEABLE
- Remember to kept getter and setter under PUBLIC ACCESS MODIFIERL.
*/

class Account{
  private:
    int balance;
  public:
  
  //setter
  void set(int balance){
    if (balance == 0)
    {
      cout<<"No balance!\n";
    }
    else if (balance > 0)
    {
      this->balance = balance;
    }
  }
  //getter
  int get(){
    return balance;
  }
};
int main()
{
  Account account;
  account.set(00000);
  cout<<"Account balance: $"<<account.get();
  return 0;
};