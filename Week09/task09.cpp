#include <iostream>
using namespace std;
int number(char code);
main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headscode", "Dosado", "Pop", "Lock", "Arabesque"};
    string code;
    cin >> code;

    for (int index = 0; code[index] != '\0'; index++)
    {
        if (code[index] != '0' && code[index] != '1' && code[index] != '2' && code[index] != '3' && code[index] != '4' && code[index] != '5' && code[index] != '6' && code[index] != '7' && code[index] != '8' && code[index] != '9')
        {
            cout << "invalid";
            return 0;
        }
    }
    int num[4];
    for (int index = 0; code[index] != '\0'; index++)
    {
        num[index] = number(code[index]);
    }

    cout << moves[num[0]] << " ";
    cout << moves[(num[1] + 1) % 10] << " ";
    cout << moves[(num[2] + 2) % 10] << " ";
    cout << moves[(num[3] + 3) % 10];
}

int number(char code)
{
    int value;
    if (code == '0')
    {
        value = 0;
    }
    else if (code == '1')
    {
        value = 1;
    }
    else if (code == '2')
    {
        value = 2;
    }
    else if (code == '3')
    {
        value = 3;
    }
    else if (code == '4')
    {
        value = 4;
    }
    else if (code == '5')
    {
        value = 5;
    }
    else if (code == '6')
    {
        value = 6;
    }
    else if (code == '7')
    {
        value = 7;
    }
    else if (code == '8')
    {
        value = 8;
    }
    else if (code == '9')
    {
        value = 9;
    }
    return value;
}
