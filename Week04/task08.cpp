#include <iostream>
using namespace std;
void isEqual(int x, int y);
main()
{
  int x;
  int y;
  cout << "Enter first Integer: ";
  cin >> x;
  cout << "Enter second Integer: ";
  cin >> y;
  cout << endl;
  isEqual(x , y);
  
}
void isEqual(int x, int y)
{
  if(x == y)
  {
    cout << "TRUE" ;  
  }
  if (x!= y)
  {
    cout << "FALSE";
  }

 
}