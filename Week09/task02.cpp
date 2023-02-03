#include <iostream>
using namespace std;
main()
{
    string movie[5] = {"gladiator", "starwars", "terminator", "takinglives", "tombrider"};
    int price = 500;
    string name;
    cout << "Enter Movie Name: ";
    cin >> name;
    int counter = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        if (name == movie[idx])
        {
            counter = idx;
            break;
        }
    }
    cout << counter << endl;
    float discountPrize;
    if (counter % 2 != 0)
    {
        discountPrize = price * 0.95;
    }
    else if (counter % 2 == 0)
    {
        discountPrize = price * 0.90;
    }
    cout << "Total Prize: " << discountPrize;
}