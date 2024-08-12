#include <iostream>
using namespace std;

/*
STRUCT = a structure that group related variables under one name
- (array vs struct) > array (multiple values of same data types), struct (multiple values of different data types)
- once struct is declared by keyword 'struct' followed by identifier name, 
- Can create multiple variables of that struct like objects of class.
- name of struct followed by variable name.
- struct can contain different data types (string, integer, double, char, bool)
- variable in a struct known as "members"
- can set default values of members. 
- memebers can be accessed with a . called as "Class Member Access Operator"
- passing a struct to a function with their original names will create copies of original, it's what called PASSING BY VALUE
- PASSING BY REFERENCE will make changes to original rather creating the copies.
- Can create multiple instances of sturct as need followed by struct identifier.
*/

struct Bill
{
  int customerId;
  string consumerName;
  char type = 'D'; //default set, domestic
  double billAmount;
  bool billStatus = true; //default set
};

void printBill(Bill &bill);
void udpateBill(Bill &bill);
int main()
{
  //creating sturcts of Bill 
  Bill bill1;
  bill1.customerId = 123456;
  bill1.consumerName = "Consumer";
  bill1.billAmount = 1234.56;
  //invoking and function
  udpateBill(bill1);
//  cout<<&bill1.billAmount<<'\n';
  printBill(bill1);


  return 0;
};

void udpateBill(Bill &bill){
  bill.type = 'C'; //commercial
}
void printBill(Bill &bill){
//  cout<<&bill.billAmount<<'\n';
  cout<<bill.customerId<<'\n';
  cout<<bill.consumerName<<'\n';
  cout<<bill.type<<'\n';
  cout<<bill.billAmount<<'\n';
  cout<<bill.billStatus<<'\n';
}