#include <iostream>
using namespace std;
float apartment(string month, int stay);
float studio(string month, int stay);
main()
{
    string month;
    int stay;
    cout << "Enter month name: ";
    cin >> month;
    cout << "Enter Number of stays: ";
    cin >> stay;
    float apartmentPrice = apartment(month, stay);
    float studioPrice = studio(month, stay);
    cout << "Apartment: " << apartmentPrice << "$" << endl;
    cout << "Studio: " << studioPrice << "$";
}

float studio(string month, int stay)
{
    float studiofinal;
    if (month == "may" || month == "october")
    {
        studiofinal = stay * 50;
        if (stay > 7 && stay < 14)
        {
            studiofinal = studiofinal * 0.95;
        }
        if (stay > 14)
        {
            studiofinal = studiofinal * 0.70;
        }
    }
    else if (month == "june" || month == "september")
    {
        studiofinal = stay * 75.20;
        if (stay > 14)
        {
            studiofinal = studiofinal * 0.80;
        }
    }
    else if (month == "july" || month == "august")
    {
        studiofinal = stay * 76;
    }
    return studiofinal;
}

float apartment(string month, int stay)
{
    float apartmentfinal;
    if (month == "may" || month == "october")
    {
        apartmentfinal = stay * 65;
    }
    else if (month == "june" || month == "september")
    {
        apartmentfinal = stay * 68.70;
    }
    else if (month == "july" || month == "august")
    {
        apartmentfinal = stay * 77;
    }
    if (stay > 14)
    {
        apartmentfinal = apartmentfinal * 0.90;
    }
    return apartmentfinal;
}
