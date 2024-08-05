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
int evenDigitSum(const int cardArray[]);
int oddDigitSum(const int cardArray[]);
int m = 0;

int main()
{
  // string cardNum = "4556 737586899855";
  string cardNum;
  cout<<"Enter the Card no: ";
  getline(cin, cardNum);

  //string to array:
  int strSize = sizeof(cardNum);
  int cardArray[strSize];
  
  for (int i = 0; i < strSize; i++)
  {
    if (isdigit(cardNum[i]))
    {
      cardArray[m] = cardNum[i] - '0'; // convert from char to integer value: - '0' or 48 the decimal code
      m++;
    }
  }
  
  //display array elements
  for (int j = 0; j < m; j++) // cout<<cardArray[j]<<" ";
    
  int result = 0;
  result = oddDigitSum(cardArray) + evenDigitSum(cardArray);

  if (result % 10 == 0) cout<<cardNum<<" is VALID!";
  else  cout<<cardNum<<" is NOT VALID!";
  
  return 0;
};

int getDigit(const int number){
  return number % 10 + (number / 10 % 10);// if doubled digit is 2 figure it'll splite and add the results, ow not
};

int evenDigitSum(const int cardArray[]){
  
  int sum = 0;
  for (int i = m - 2; i >=0; i-=2) sum += getDigit(cardArray[i] * 2); 
  return sum;
};

int oddDigitSum(const int cardArray[]){

  int sum = 0;
  for (int i = m - 1; i >=0; i-=2)  sum += cardArray[i];
  return sum;
};
