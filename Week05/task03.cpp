#include <iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
    string name;
    char type;
    float price;
    cout << "Enter Vehicle Name: ";
    cin >> name;
    cout << "Enter Vehicle Code: ";
    cin >> type;
    cout << "Enter Vehicle Price: ";
    cin >> price;
    float taxprice = taxCalculator(type, price);
    cout << "The final price on a vehicle of type " << type << " after adding the tax is " << taxprice;
}
float taxCalculator(char type, float price)
{
    if(type == 'M')
    {
        float tax = price * 1.06;
        return tax;
    }
    if(type == 'E')
    {
        float tax = price * 1.08;
        return tax;
    }
    if(type == 'S')
    {
        float tax = price * 1.10;
        return tax;
    }
    if(type == 'V')
    {
        float tax = price * 1.12;
        return tax;
    }
    if(type == 'T')
    {
        float tax = price * .15;
        return tax;
    }
    return 0;                
}
