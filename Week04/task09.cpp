#include <iostream>
using namespace std;
void reverse(string a);
main()
{
  string statement;
  cout << "Enter Your Statement: ";
  cin >> statement;
  cout << endl;
  reverse(statement);
   
}
void reverse(string a)
{
  if(a == "true")
  {
    cout << "FALSE";
  }

  if(a == "false")
  {
    cout << "TRUE";
  }
}
