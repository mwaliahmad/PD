#include <iostream>
using namespace std;
main()
{
    int size;
    int times;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> times;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> number[index];
    }

    for (int index = 0; index < size; index++)
    {
        if (number[index] % 2 == 0)
        {
            cout << " " << number[index] - (2 * times);
        }
        else
        {
            cout << " " << number[index] + (2 * times);
        }
    }
}