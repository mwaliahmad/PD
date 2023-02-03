#include <iostream>
using namespace std;
main()
{
    string name;
    cout << "Enter Name: ";
    getline(cin, name);
    int count = name.length();
    if (count % 2 == 0)
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
}