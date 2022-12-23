#include <iostream>
using namespace std;
main(){
float vegetablePrice;
float fruitPrice;
float vegetableNum;
float fruitNum;
float vegetableTotal;
float fruitTotal;
float total;
float final;

cout << "Enter vegetable price per kg: ";
cin >> vegetablePrice;
cout << "Enter fruit price per kg: ";
cin>> fruitPrice;
cout << "Enter weight of vegetables (in kg): ";
cin >> vegetableNum;
cout << "Enter weight of fruits (in kg): ";
cin >> fruitNum;

cout << endl;  

vegetableTotal = vegetablePrice * vegetableNum;
fruitTotal = fruitPrice * fruitNum;
total = vegetableTotal + fruitTotal;
final = total/1.94;
cout << "Total Amount (in Rps): " << final;  






















































}