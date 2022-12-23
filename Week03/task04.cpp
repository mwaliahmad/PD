#include <iostream>
using namespace std;
main(){
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float total;
float percent;

cout << "Enter Your Name: ";
cin >> name;
cout << "Enter subject 01 Marks: "; 
cin >> subject1;
cout << "Enter subject 02 Marks: ";
cin >> subject2;
cout << "Enter subject 03 Marks: ";
cin >> subject3;
cout << "Enter subject 04 Marks: ";
cin >> subject4;
cout << "Enter subject 05 Marks: ";
cin >> subject5;

total = subject1 + subject2 + subject3 + subject4 + subject5;
percent = (total/500)*100;
cout << "Your Percentage: ";
cout << percent <<"%";



} 