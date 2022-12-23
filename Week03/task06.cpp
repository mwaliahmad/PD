#include <iostream>
using namespace std;
main(){
int weight;
int cost;
int area;
int costPerPound;
int costPerArea;

cout << "Enter Bag Size in Pounds: ";
cin >> weight;
cout << "Enter cost of the bag: ";
cin >> cost;
cout << "Enter area covered by each bag in square feet: ";
cin >> area;

cout << endl;

costPerPound = cost/weight;
cout << "Cost of the fertilizer per pound: " << costPerPound << endl;

costPerArea = cost/area;
cout << "Cost of fertilizing the area per square feet: " <<costPerArea; 








}