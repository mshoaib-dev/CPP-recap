#include <iostream>
using namespace std;

/*
CREDIT CARD VALIDATOR PROGRAM
It implements the Luhn Algorithm, given
1. Double every second digit from right to left. If doubled no. is 2 digits, split them
2. Add all single digits from step1
3. Add all odd numbered digits from right to left
4. Sum results from steps2-3
5. If step4 is divisible by 10, # is valid

Note: in this program to convert from string character to integer/decimal, we have to look for ASCII table representation
there are given ways: 
> from char to int: substract '0' from the character or 48 that is corrosponding ASCII of '0' as decimal value
> from int to char: need to add ......
*/

int getDigit(const int number);
int evenDigitSum(const string cardNum);
int oddDigitSum(const string cardNum);

int main()
{
  string cardNum;
  cout<<"Enter the Card no: ";
  cin>>cardNum;
  // cout<<"You entered: "<<cardNum;

  int result = 0;
  result = oddDigitSum(cardNum) + evenDigitSum(cardNum);
  
  if (result % 10 == 0)
  {
    cout<<cardNum<<" is VALID!";
  }
  else
  {
    cout<<cardNum<<" is NOT VALID!";
  }
  
  return 0;
};

int getDigit(const int number){

  return number % 10 + (number / 10 % 10); // if doubled digit is 2 figure it'll splite and add the results, ow not
};

int evenDigitSum(const string cardNum){
  
  int sum = 0;
  
  for (int i = cardNum.size() - 2; i >=0; i-=2)
  {
    sum += getDigit((cardNum[i] - 48) * 2); // convert from char to integer value: - '0' or 48 the decimal code 
  }
  
  return sum;
};
int oddDigitSum(const string cardNum){

  int sum = 0;
  
  for (int i = cardNum.size() - 1; i >=0; i-=2)
  {
    sum += cardNum[i] - '0';
  }
  
  return sum;
};
