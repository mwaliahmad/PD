#include <iostream>
using namespace std;
main(){ 

int initVelocity;
int finalVelocity;
int acceleration;
int time;

cout << "Enter Initial Velocity: ";
cin >>initVelocity;
cout << "Enter Acceleration: ";
cin >> acceleration;
cout <<"Enter Time: ";
cin >> time;

finalVelocity = (acceleration * time) + initVelocity;
cout << "Final Velocity: " << finalVelocity;  








}