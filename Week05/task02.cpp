#include <iostream>
using namespace std;
main()
{
    double height, length, width, volume;
    string unit;

    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Height: ";
    cin >> height;
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter your unit: ";
    cin >> unit;
    cout << endl;
    volume = (length * width * height)/3;
    if (unit == "cm")
    {
        int Finalvolume = volume * 1000000;
        cout << "Volume is: " << Finalvolume << " cubic centimeter";
    }
        if (unit == "m")
    {
        int Finalvolume = volume;
        cout << "Volume is: " << Finalvolume << " cubic meter";
    }
        if (unit == "mm")
    {
        int Finalvolume = volume * 1000000000;
        cout << "Volume is: " << Finalvolume << " cubic millimeter";
    }
        if (unit == "km")
    {
        float Finalvolume = volume / 1000000000;
        cout << "Volume is: " << Finalvolume << " cubic kilometer";
    }
}