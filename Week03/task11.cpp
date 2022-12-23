#include <iostream>
using namespace std;
main(){

int num;
int sum;

cout << "Enter Five Digit Number: ";
cin >> num;

sum = num%10 + (num/10)%10 + (num/100)%10 + (num / 1000 ) %10 + (num/10000) %10;

cout <<"Sum: " <<sum;











}