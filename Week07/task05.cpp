#include <iostream>
using namespace std;
int triangle(int number);
main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int result = triangle(number);
    cout << result;
}

int triangle(int number)
{
    int sum = 0;
    for (int x = 1; x <= number; x++)
    {
        sum = sum + x;
    }

    return sum;
}
