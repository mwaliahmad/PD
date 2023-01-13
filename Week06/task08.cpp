#include <iostream>
using namespace std;
main()
{
    int h, x, y;
    cout << "Enter value of 'h': ";
    cin >> h;
    cout << "Enter value of 'x': ";
    cin >> x;
    cout << "Enter value of 'y': ";
    cin >> y;
    cout << endl;

    // for outside
    if ((x >= 0 && x < h) && y > h)
    {
        cout << "OUTSIDE";
    }
    else if ((x > h && x < (2 * h)) && y > (4 * h))
    {
        cout << "OUTSIDE";
    }
    else if ((x > (2 * h) && x < (3 * h)) && y > h)
    {
        cout << "OUTSIDE";
    }

    // for inside
    else if ((x >= 0 && x < h) && y < h)
    {
        cout << "INSIDE";
    }
    else if ((x > h && x < (2 * h)) && y < (4 * h))
    {
        cout << "INSIDE";
    }
    else if ((x > (2 * h) && x < (3 * h)) && y < h)
    {
        cout << "INSIDE";
    }
    else
    {
        cout << "BORDER";
    }
}