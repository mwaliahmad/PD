#include <iostream>
using namespace std;
main()
{
    string s1;
    string s2;
    cout << "Enter String 1: ";
    cin >> s1;
    cout << "Enter String 2: ";
    cin >> s2;
    int size1 = s1.length();
    int size2 = s2.length();
    int count = 0;
    for (int index = 0; index < size1; index++)
    {
        for (int idx = 0; idx < size2; idx++)
        {
            if (s1[index] == s2[idx])
            {
                count++;
                s2[idx] = '-';
            }
        }
    }
    cout << "Common Digits Are: " << count;
}