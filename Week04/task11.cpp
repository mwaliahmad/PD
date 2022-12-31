#include <iostream>
using namespace std;
void comment(int);
main()
{
  int speed;
  cout << "Enter Your Speed: ";
  cin >> speed;
  cout << endl;
  comment(speed);
}
void comment(int speed)
{
  if(speed > 100)
  {
    cout << "Halt... YOU WILL BE CHALLENGED!!!";
    cout << endl;
  }
  if(speed <= 100)
  {
    cout << "Perfect! You're going good.";
    cout << endl;
  }


}