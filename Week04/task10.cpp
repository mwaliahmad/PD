#include <iostream>
using namespace std;
void discount(string , float); 
main()
{
  while(true)
  {
    string country;
    float price;
    cout << "Enter Country Name: ";
    cin >> country ;
    cout << "Enter Ticket Price: ";
    cin >> price;
    cout << endl;
    discount(country , price); 
  }
}
void discount(string country, float price)
{
  if(country =="pakistan")
  {
    float discountprice;
    discountprice = price * 0.95;
    cout << "Price after discount is " << discountprice; 
    cout << endl; 
  } 

  if(country =="ireland")
  {
    float discountprice;
    discountprice = price * 0.90;
    cout << "Price after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="india")
  {
    float discountprice;
    discountprice = price * 0.80;
    cout << "Price after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="england")
  {
    float discountprice;
    discountprice = price * 0.70;
    cout << "Price after discount is " << discountprice;
    cout << endl;  
  } 

  if(country =="canada")
  {
    float discountprice;
    discountprice = price * 0.55;
    cout << "Price after discount is " << discountprice;
    cout << endl;  
  } 
 
}

