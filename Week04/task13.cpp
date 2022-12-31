#include <iostream>
using namespace std;

main()
{
  int holiday;    
  int workingday;
  int timeforgame;
  int difference;
  cout << "Enter Number of Holidays: ";
  cin >> holiday;
  workingday = 365 - holiday;
  timeforgame = (workingday * 63) + (holiday * 127);
  difference = 30000 - timeforgame;
  cout << endl;
  if(difference > 0)
  {
    cout << "Tom sleeps well ";
    cout << difference << " minutes less for play.";
  }
  if(difference < 0)
  {
    cout << "Tom will run away ";
    cout << -1 * difference << " minutes for play.";
  }    


  
}
