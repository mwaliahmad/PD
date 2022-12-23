#include <iostream>
using namespace std;
main(){
string name;
int adultPrice;
int childPrice;
int numberofAdult;
int numberofChild;
int totaladult;
int totalchild;
int donatePercent;
int total;
int donation;
int final;

cout << "Enter Movie Name: ";
cin >> name; 

cout << "Enter Adult Ticket Price: ";
cin >> adultPrice;

cout << "Enter Child Ticket Price: ";
cin >> childPrice;

cout << "Enter Number of Adult Ticket sold: ";
cin >> numberofAdult;

cout << "Enter Number of Child Ticket sold: ";
cin >> numberofChild;

cout << "Enter Percentage to Donate: ";
cin >> donatePercent;
cout << endl;
totaladult = adultPrice*numberofAdult;
totalchild = childPrice*numberofChild;
total = totaladult + totalchild;
cout << "Total Amount Generated: " << total << endl;

donation = (total * donatePercent)/100;

final = total - donation;
 cout << "Amount after donation: " << final;








}