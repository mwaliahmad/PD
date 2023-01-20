#include <iostream>
using namespace std;

main()
{
    int number;
    cout << "Enter Number: ";
    cin >> number;
    int weight;
    int money = 0;
    int money1 = 0;
    int money2 = 0;
    int money3 = 0;
    float weight1 = 0;
    float weight2 = 0;
    float weight3 = 0;
    float sum = 0;
    for (int x = 1; x <= number; x++)
    {
        cin >> weight;
        if (weight < 4)
        {
            money1 = money1 + (weight * 200);
            weight1 = weight1 + weight;
        }
        else if (weight >= 4 && weight < 11)
        {
            money2 = money2 + (weight * 175);
            weight2 = weight2 + weight;
        }
        else if (weight >= 11)
        {
            money3 = money3 + (weight * 120);
            weight3 = weight3 + weight;
        }
        sum = weight1 + weight2 + weight3;
        money = money1 + money2 + money3;
    }
    cout << endl;
    float avg = money / sum;
    cout << avg << endl;
    float percent1 = (weight1 / sum) * 100;
    float percent2 = (weight2 / sum) * 100;
    float percent3 = (weight3 / sum) * 100;
    cout << percent1 << "%" << endl;
    cout << percent2 << "%" << endl;
    cout << percent3 << "%" << endl;
}