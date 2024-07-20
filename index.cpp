#include <iostream>
#include <vector>
using namespace std;

/* 
typedef = 
reserved keyword used to create an addtional name (alias),
for another data type. Helps with readability and reduces typos.
Give a new identifier to current datatype.
Use when there is a clear benefit
for defining the name of identifier must end with _t
*/

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text;
typedef double db;
// Replaced with 'using' (work better w/ templates)
using text = std::string;
using num = int; 
int main()
{
  text code = "typedef used to declare custom data types. ";
  db pi = 3.1416;
  num age = 20;
  cout<<pi<<" and "<<code<<age;
  return 0;
};