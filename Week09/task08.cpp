#include <iostream>
using namespace std;
main()
{
    int size = 0;
    cout << "Enter Number of Color: ";
    cin >> size;
    string color[size];
    int counter = 0;
    string previous;
    for (int index = 0; index < size; index++)
    {
        cout << "Enter value: ";
        cin >> color[index];

        if (previous == color[index])
        {
            counter = counter;
        }
        else
        {
            counter++;
        }
        previous = color[index];
    }

    int totalTime = (size * 2) + (counter - 1);
    cout << totalTime;
}