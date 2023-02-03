#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    string name;
    int quantity;
    cout << "Enter Fruit Name: ";
    cin >> name;
    cout << "Enter Quantity: ";
    cin >> quantity;
    int counter = 0;
    for (int idx = 0; idx < 4; idx++)
    {
        if (fruit[idx] == name)
        {
            counter = idx;
            break;
        }
    }
    int totalPrice = price[counter] * quantity;
    cout << "Total Price is: " << totalPrice;
}