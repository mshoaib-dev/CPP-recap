#include <iostream>
using namespace std;

// fill(): Fills a range of elements with a specified value, 
// fill(begin, end, value), mostly deals with arrays
// most use case: filling an array with same entereries manually with large indexes
// can manipulate for custom range and values
// there would be blank spaces for not defined range

int main()
{
  // int nums[10]={1,1,1,1,1,1,1,1,1,1};
  int nums[2];
  fill(nums, nums+2, 90);

  int size = 8;
  int frac = 8; // 4 for quarter
  string places[size];

  fill(places, places + (size/frac), "Skardu");
  fill(places + (size/frac), places + (size/frac) * 2, "Swat");
  fill(places + (size/frac) * 2, places + (size/frac) * 3, "Nanga Parbat");
  fill(places + (size/frac) * 3, places + size, "Kashmir");

  for(string place:places){
    cout<<place<<endl;
  } 
  return 0;
};
