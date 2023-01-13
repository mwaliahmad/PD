#include <iostream>
using namespace std;
string grade(float percent);
main()
{
    int english, math, chemistry, science, biology;
    string name;
    int total;
    float percent;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter English Marks: ";
    cin >> english;

    cout << "Enter Maths Marks: ";
    cin >> math;

    cout << "Enter Chemistry Marks: ";
    cin >> chemistry;

    cout << "Enter Social Science Marks: ";
    cin >> science;

    cout << "Enter Biology Marks: ";
    cin >> biology;

    total = (english + math + chemistry + science + biology);
    percent = (total / 500) * 100;
    string result = grade(percent);
    cout << endl;

    cout << "Your Name is: " << name << endl;
    cout << "Your Total marks are: " << total << endl;
    cout << "You percentage is: " << percent << endl;
    cout << "Your Grade is: " << result << endl;
}

string grade(float percent)
{
    string grade;
    if (percent < 40)
    {
        grade = "F";
    }
    if (percent >= 40 && percent < 50)
    {
        grade = "D";
    }
    if (percent >= 50 && percent < 60)
    {
        grade = "C";
    }
    if (percent >= 60 && percent < 70)
    {
        grade = "B";
    }
    if (percent >= 70 && percent < 80)
    {
        grade = "B+";
    }
    if (percent >= 80 && percent < 90)
    {
        grade = "A";
    }
    if (percent >= 90 && percent <= 100)
    {
        grade = "A+";
    }
    return grade;
}
