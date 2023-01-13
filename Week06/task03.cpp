#include <iostream>
using namespace std;
string sign(int day, string month);
main()
{
    int day;
    string month;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    string result = sign(day, month);
    cout << "Your Zodiac Sign is: " << result;
}

string sign(int day, string month)
{
    string zodiacsign;

    if ((month == "march" && day >= 21) || (month == "april" && day <= 19))
    {
        zodiacsign = "Aries";
    }

    else if ((month == "april" && day >= 20) || (month == "may" && day <= 20))
    {
        zodiacsign = "Taurus";
    }

    else if ((month == "may" && day >= 21) || (month == "june" && day <= 20))
    {
        zodiacsign = "Gemini";
    }

    else if ((month == "june" && day >= 21) || (month == "july" && day <= 22))
    {
        zodiacsign = "Cancer";
    }

    else if ((month == "july" && day >= 23) || (month == "august" && day <= 22))
    {
        zodiacsign = "Leo";
    }

    else if ((month == "august" && day >= 23) || (month == "september" && day <= 22))
    {
        zodiacsign = "Virgo";
    }

    else if ((month == "september" && day >= 23) || (month == "october" && day <= 22))
    {
        zodiacsign = "Libra";
    }

    else if ((month == "october" && day >= 23) || (month == "november" && day <= 21))
    {
        zodiacsign = "Scorpio";
    }

    else if ((month == "november" && day >= 22) || (month == "december" && day <= 21))
    {
        zodiacsign = "Sagittarius";
    }

    else if ((month == "december" && day >= 22) || (month == "january" && day <= 19))
    {
        zodiacsign = "Capricom";
    }

    else if ((month == "january" && day >= 20) || (month == "february" && day <= 18))
    {
        zodiacsign = "Aquarius";
    }

    else if ((month == "february" && day >= 19) || (month == "march" && day <= 20))
    {
        zodiacsign = "Pisces";
    }

    return zodiacsign;
}
