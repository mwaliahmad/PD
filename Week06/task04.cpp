#include <iostream>
using namespace std;
float bill(char type, char time, int mint);
main()
{
    char type;
    char time;
    int mint;

    cout << "Enter which type of customer you are(Residental or Premium) select (r/p): ";
    cin >> type;

    if (type == 'p')
    {
        cout << "(Press 'D' for Day or Press 'N' for Night time) call: ";
        cin >> time;
    }

    cout << "Enter number of mins you used the service: ";
    cin >> mint;

    float finalbill = bill(type, time, mint);
    cout << "The charges are: " << finalbill << " $";
}
float bill(char type, char time, int mint)
{
    float bill;
    if (type == 'r')
    {
        if (mint <= 50)
        {
            bill = 10;
        }
        else if (mint > 50)
        {
            bill = 10 + (mint - 50) * 0.02;
        }
    }

    else if (type == 'p' && time == 'D')
    {
        if (mint <= 75)
        {
            bill = 25;
        }
        else if (mint > 75)
        {
            bill = 25 + (mint - 75) * 0.10;
        }
    }

    else if (type == 'p' && time == 'N')
    {
        if (mint <= 100)
        {
            bill = 25;
        }
        else if (mint > 100)
        {
            bill = 25 + (mint - 100) * 0.05;
        }
    }
    return bill;
}