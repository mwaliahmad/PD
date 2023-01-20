#include <iostream>
using namespace std;
void upper(int row);
void lower(int row);

main()
{
    int row;
    cout << "Enter desired Number of Rows: ";
    cin >> row;
    upper(row);
    lower(row);
}

void upper(int row)
{
    int requiredRow = row / 2;
    int space = requiredRow;
    int column = requiredRow;
    for (int i = 1; i <= requiredRow; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        column--;
        cout << endl;
    }
}

void lower(int row)
{
    int requiredRow = row / 2;
    int space = requiredRow;
    int column = requiredRow;
    for (int i = 1; i <= requiredRow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= column; j++)
        {
            cout << "*";
        }
        column--;
        cout << endl;
    }
}
