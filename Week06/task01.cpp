#include <iostream>
using namespace std;
main()
{
    string temperature, humidity;
    cout << "Enter Temperature: ";
    cin >> temperature;
    cout << "Enter Humidity: ";
    cin >> humidity;
    if (temperature == "warm" && humidity == "dry")
    {
        cout << "Play Tennis.";
    }
    else if (temperature == "warm" && humidity == "humid")
    {
        cout << "Swim.";
    }
    else if (temperature == "cold" && humidity == "dry")
    {
        cout << "Play Basketball.";
    }
    else if (temperature == "cold" && humidity == "humid")
    {
        cout << "Watch TV.";
    }
}