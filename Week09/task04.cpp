#include <iostream>
using namespace std;
main()
{
    int size;
    bool flap = false;
    cout << "enter size of array: ";
    cin >> size;
    int number[size];
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> number[index];
    }
    int digit;
    for (int idx = 0; idx < size; idx++)
    {
        if (number[idx] >= 9)
        {
            while (number[idx] != 0)
            {
                digit = number[idx] % 10;
                number[idx] = number[idx] / 10;
                if (digit == 7)
                {
                    flap = true;
                    break;
                }
            }
            if (number[idx] == 7)
            {
                flap = true;
                break;
            }
        }
    }
    if (flap == true)
    {
        cout << "BOMB!";
    }
    else
    {
        cout << "there is no 7 in the array";
    }
}