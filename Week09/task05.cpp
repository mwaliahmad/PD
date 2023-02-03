#include <iostream>
using namespace std;
main()
{
    bool flap = false;

    string element[4];
    for (int index = 0; index < 4; index++)
    {
        cout << "Enter value: ";
        cin >> element[index];
    }

    if ((element[0] == element[1]) && (element[1] == element[2]) && (element[2] == element[3]) && (element[3] == element[0]))
    {
        flap = true;
    }
    cout << flap;
}