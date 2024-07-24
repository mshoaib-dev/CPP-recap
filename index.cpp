#include <iostream>
#include <ctime>
using namespace std;

char userChoice();
char computerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);
int main()
{
  char player, computer;

  player = userChoice();
  cout<<"You choose: \n";
  showChoice(player);
  computer = computerChoice();
  cout<<"Computer choose: \n";
  showChoice(computer);

  chooseWinner(player, computer);
  return 0;
};

char userChoice(){
  char choice;

  cout<<"********** Rock - Paper - Scissor Game  ********* \n";
  do
  {
    cout<<"Choose one of the given:  \n";
    cout<<"************************ \n";
    cout<<"'r' for Rock \n";
    cout<<"'p' for Paper \n";
    cout<<"'s' for Scissor \n";
    cin>>choice;
  } while (choice != 'r' && choice != 'p' && choice != 's');
  
  return choice;
};
char computerChoice(){
  srand(time(NULL));

  int num = (rand() % 3) + 1;

  switch (num)
  {
  case 1: return 'r';
  case 2: return 'p';
  case 3: return 's';
  default: break;
  }
  return 0;
};
void showChoice(char choice){
  switch (choice)
  {
  case 'r': cout<<">> Rock \n"; 
            break;
  case 'p': cout<<">> Paper \n"; 
            break;
  case 's': cout<<">> Scissor \n"; 
            break;
  default: cout<<"Invalid choice";
    break;
  }
};
void chooseWinner(char player, char computer){

  switch (player)
  {
  case 'r': if (computer  == 'r') cout<<"It's tie! \n";
            else if (computer  == 'p') cout<<"You lost!\n";
            else cout<<"You won! \n";
            break;
  case 'p': if (computer  == 'r') cout<<"You won! \n";
            else if (computer  == 'p') cout<<"It's tie!\n";
            else cout<<"You lost! \n";
            break;
  case 's': if (computer  == 'r') cout<<"You lost! \n";
            else if (computer  == 'p') cout<<"You won!\n";
            else cout<<"It's tie\n";
            break;
  default:
    break;
  }
};