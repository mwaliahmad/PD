#include <iostream>
using namespace std;
float calculateBill(string fruit, string day, float quantity);
main()
{
    string fruit, day;
    float quantity;
    cout << "Enter Fruit Name: ";
    cin >> fruit;
    cout << "Enter Day Name: ";
    cin >> day;
    cout << "Enter Fruit Quantity: ";
    cin >> quantity;
    float result = calculateBill(fruit, day, quantity);
    cout << "Your bill is; " << result;
}

float calculateBill(string fruit, string day, float quantity)
{
    float bill;
    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            bill = 2.70 * quantity;
        }
        else if (fruit == "apple")
        {
            bill = 1.25 * quantity;
        }
        else if (fruit == "orange")
        {
            bill = 0.90 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            bill = 1.60 * quantity;
        }
        else if (fruit == "kiwi")
        {
            bill = 3.00 * quantity;
        }
        else if (fruit == "pineapple")
        {
            bill = 5.60 * quantity;
        }
        else if (fruit == "grapes")
        {
            bill = 4.20 * quantity;
        }
    }

    else if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            bill = 2.50 * quantity;
        }
        else if (fruit == "apple")
        {
            bill = 1.20 * quantity;
        }
        else if (fruit == "orange")
        {
            bill = 0.85 * quantity;
        }
        else if (fruit == "grapefruit")
        {
            bill = 1.45 * quantity;
        }
        else if (fruit == "kiwi")
        {
            bill = 2.70 * quantity;
        }
        else if (fruit == "pineapple")
        {
            bill = 5.50 * quantity;
        }
        else if (fruit == "grapes")
        {
            bill = 3.85 * quantity;
        }
    }
    return bill;
}
