#include <iostream>
using namespace std;

main()
{
    int row;
    cout << "Enter Number of Rows:  ";
    cin >> row;
    int column = row;
    for (int i = 0; i <= row; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= (2 * column); j++)
        {
            cout << " ";
        }

        column--;

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}