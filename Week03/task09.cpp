#include <iostream>
using namespace std;
main(){
int number;
int digit1;
int digit2;
int digit3;
int digit4;
int sum;

cout << "Enter Four Digit Number: ";
cin >> number; 
 
digit1 = number % 10;
number = number / 10;

digit2 = number % 10;
number = number / 10; 

digit3 = number % 10;
number = number / 10;

digit4 = number % 10;


sum = digit1 + digit2 + digit3 + digit4;
cout << "Sum: " << sum; 



}