#include <iostream>
using namespace std;
void nested(int row);
main()
{
    int row;
    cout << "Enter desired Number of Rows: ";
    cin >> row;
    nested(row);
}

void nested(int row)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
