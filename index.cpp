#include <iostream>
using namespace std;

// QUIZ GAME

// Multi-dimensional Arrays: arrays made up of separate arrays, mostly 2D arrays
// useful it can represent grid/matrix of data i.e., rows and columns
// 1st dimension for ROWS, 2nd dimension for COLUMNS 
// initially, row declaration is optional but column as no. of rows defined will corrospond to the rows not declared
// arrays (each row) separated by commas, ultimately packed into curcly braces

int main()
{
  // two dimensional array declaration:
  string questions[] = {"1. Select the Car by FORD.", "2. Select the Car by CHEVROLET." , "3. Select the Car by DODGE." };

  //options
  string cars[][3] = {
    {"A. Mustang", "B. Corvette", "C. Challenger"},
    {"A. F-150", "B. Silverado", "C. Ram 1500"},
    {"A. Escape", "B. Equinox", "C. Durango"}
  };
  
  // answer key
  char answerKey[] = {'A', 'B','C'};
  
  //dimensions
  int sizeQues = sizeof(questions)/sizeof(questions[0]);
  int sizeCars = sizeof(cars[0])/sizeof(cars[0][0]);
  
  //scoring parameters
  char guess;
  int score = 0;

  //answer selection process  
  cout<<"****************************************** \n";
  cout<<"***********    QUIZE GAME   ************** \n";
  cout<<"****************************************** \n";

  for (int i = 0; i < sizeQues; i++)
  {
    cout<<questions[i]<<"\n";

    for (int j = 0; j < sizeCars; j++)
    {
      cout<<cars[i][j]<<"\n";
    }
    
    //getting user answer
    cout<<"Choose one of the given options: \n";
    cin>>guess;

    if (toupper(guess) == answerKey[i])
    {
      cout<<"CORRECT! \n";
      score++;
    }
    else
      cout<<"WRONG! \n";
  }

// displaying result
  cout<<"****************************************** \n";
  cout<<"*************    RESULT   **************** \n";
  cout<<"****************************************** \n";
  cout<<"You correct answer(s): "<<score<<"\n";
  cout<<"No. of questions: "<<sizeQues<<"\n";
  cout<<"Percentage: "<<((double) score/sizeQues)*100<<"%"<<"\n";

  return 0;
};
