#include <iostream>
using namespace std;
void printPercentage(int number);
int main()
{
    int number;
    cout << "Enter Number: ";

    cin >> number;
    printPercentage(number);
}

void printPercentage(int number)
{
    int p1 = 0;
    int p2 = 0;
    int p3 = 0;

    int digits;

    for (int x = 0; x < number; x++)
    {
        cin >> digits;

        if (digits % 2 == 0)
        {
            p1 = p1 + 1;
        }
        if (digits % 3 == 0)
        {
            p2 = p2 + 1;
        }
        if (digits % 4 == 0)
        {
            p3 = p3 + 1;
        }
    }

    float p = number;

    float p1percent = (p1 / p) * 100;
    float p2percent = (p2 / p) * 100;
    float p3percent = (p3 / p) * 100;

    cout << endl;
    cout << p1percent << " %" << endl;
    cout << p2percent << " %" << endl;
    cout << p3percent << " %" << endl;
}
