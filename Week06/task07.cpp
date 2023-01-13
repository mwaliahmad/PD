#include <iostream>
using namespace std;
main()
{
    int startHr;
    int startMint;
    int arrivalHr;
    int arrivalMint;
    int totalstartmint;
    int totalarrivelmint;

    cout << "Exam Starting Time (hour): ";
    cin >> startHr;
    cout << "Exam Starting Time (minutes): ";
    cin >> startMint;
    cout << "Student hour of arrival: ";
    cin >> arrivalHr;
    cout << "Student minutes of arrival: ";
    cin >> arrivalMint;
    totalstartmint = (startHr * 60) + startMint;
    totalarrivelmint = (arrivalHr * 60) + arrivalMint;
    int remianing = totalarrivelmint - totalstartmint;
    int remainHr = remianing / 60;
    int remainMint = remianing % 60;
    if (totalarrivelmint > totalstartmint)
    {
        cout << "LATE" << endl;
        cout << remainHr << " hours " << remainMint << " minutes after the start.";
    }
    if (totalarrivelmint <= totalstartmint)
    {
        if (remianing >= -30)
        {
            cout << "ON TIME" << endl;
            cout << -1 * remainHr << " hours " << -1 * remainMint << " minutes before the start.";
        }
        if (remianing < -30)
        {
            cout << "EARLY" << endl;
            cout << -1 * remainHr << " hours " << -1 * remainMint << " minutes before the start.";
        }
    }

    /*cout << totalstartmint << endl;
    cout << totalarrivelmint;*/
}