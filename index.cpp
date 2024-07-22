#include <iostream>
#include <iomanip>
using namespace std;
 
/*  
FUNCTION = reusable block of code
it's declared outside but mostly before main function and invoked inside main function
to daclare after main function, need to call the function before main funtion alongwith return type when function
is declared after main function, but still there is call inside main function. Return: it returns the execution result of function. For returning a value, make sure to declare the return type of function i.e., void, int, double, string,....

OVERLOADED FUNCTIONS: different versions of the same function, it's declaration before main function is must
Method overloading can be possible on the following basis:
1. The return type of the overloaded function.
2. The type of the parameters passed to the function.
3. The number of parameters passed to the function.

FUNCTION SIGNATURE: function name + parameters, that needs to be unique like id
*/


//functions declaration
void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
double balance = 700;
int choice;

do
{
      cout<<"*************************************\n";
      cout<<"******* BANK ACCOUNT INFO *********\n";
      cout<<"Choose one of the options: \n";
      cout<<"1. Balance Inquiry \n";
      cout<<"2. Deposit \n";
      cout<<"3. Withdraw \n";
      cout<<"4. Exit \n";
      cin>>choice;

      cin.clear(); // it will reset the error flag, when the standard input fails to interpret the input. 
      fflush(stdin); // it'll clear the input buffer

      switch(choice){
        case 1: showBalance(balance);
                break;
        case 2: balance += deposit();
                showBalance(balance);
                break;
        case 3: balance -= withdraw(balance);
                showBalance(balance);
                break;
        case 4: cout<<"Thanks for your visit!\n";
                break;
        default:cout<<"Try (1-4)\n"; break;
      }

  }while (choice !=4);

  return 0;
};

//functions defintions-signature
void showBalance(double balance){
  cout<< "Current balance = Rs:" << setprecision(2)<<fixed<<balance<<"\n"; 
}

double deposit(){
  double amount = 0; 
  cout<<"Enter amount to deposit: \n";
  cin>>amount;

  if (amount > 0)
  {
  cout<<"Successfuly deposited and, \n";
  return amount;
  }
  else
  {
  cout<<"Invalid amount!\n";
  return 0;
  }
};

double withdraw(double balance){
  double amount = 0;
  cout<<"Enter amount to withdraw: \n";
  cin>>amount;

  if (amount > balance)
  {
    cout<<"Insufficient balance! \n";
    return 0;
  }
  else if (amount < 0)
  {
    cout<<"Invalid amount! \n";
    return 0;
  }
  else {return amount;}
};