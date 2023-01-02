#include <iostream>
using namespace std;

main()
{
  int holiday;    
  int workingday;
  int timeforgame;
  int difference;
  int hour , mint;
  cout << "Enter Number of Holidays: ";
  cin >> holiday;
  workingday = 365 - holiday;
  timeforgame = (workingday * 63) + (holiday * 127);
  difference = 30000 - timeforgame;
  hour = difference / 60;
  mint = difference % 60;
  cout << endl;
  if(difference > 0)
  {
    cout << "Tom sleeps well ";
    cout << hour << " hours and " << mint <<" minutes less for play.";
  }
  if(difference < 0)
  {
    cout << "Tom will run away ";
    cout <<-1 * hour << " hours and " <<-1 * mint <<" for play.";
  }    


  
}
