#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float hoursNeed, days, workers;
    cout << "Enter Needed Hours: ";
    cin >> hoursNeed;
    cout << "Enter Number Days: ";
    cin >> days;
    cout << "Enter Number of Workers: ";
    cin >> workers;
    float workershours = workers * 10;
    float workingtime = days * workershours;
    float workinghr = workingtime * 0.90;
    int finalhr = floor(workinghr);
    if (finalhr > hoursNeed)
    {
        int remaining = finalhr - hoursNeed;
        cout << "Yes! " << remaining << " hours left.";
    }
    if(hoursNeed >finalhr )
    {
        int remaining = hoursNeed - finalhr;
        cout << "Not enough time! " << remaining <<" hours needed."; 
    }
}
