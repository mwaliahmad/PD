#include <iostream>
using namespace std;
void number(int number);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    number(num);
}

void number(int number)
{
    for (int x = 1; x <= number; x++)
    {
        if (x % 4 == 0)
        {
            cout << x * 10;
        }
        else
        {
            cout << x;
        }
        cout << ", ";
    }
}
