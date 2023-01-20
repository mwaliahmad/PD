#include <iostream>
using namespace std;

main()
{

    int days;
    int patient;

    cout << "Enter Days: ";
    cin >> days;
    int doctortreat = 7;

    int treat = 0;
    int untreat = 0;

    for (int x = 1; x <= days; x++)
    {
        cin >> patient;

        if ((x % 3 == 0) && (untreat > treat))
        {
            doctortreat++;
        }

        if (patient > doctortreat)
        {
            treat = treat + doctortreat;
            untreat = untreat + (patient - doctortreat);
        }

        if (patient <= doctortreat)
        {
            treat = treat + patient;
        }
    }

        cout << "Treated Patients: " << treat << endl;
    cout << "Untreated Patients: " << untreat << endl;
}