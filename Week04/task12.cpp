#include <iostream>
using namespace std;
void discountprice(float);
main()
{
  int redRose;
  int whiteRose;
  int tulips;
  float totalprice;
  cout << "Enter Quantity of Red Roses: ";
  cin >> redRose;
  cout << "Enter Quantity of White Roses: ";
  cin >> whiteRose;
  cout << "Enter Quantity of Tulips: ";
  cin >> tulips;
  cout << endl;
  totalprice = (redRose * 2.00) + (whiteRose * 4.10) + (tulips * 2.50);      
  cout << "Original Price is: " << totalprice <<endl ;
  discountprice(totalprice); 

}
void discountprice(float totalprice)
{
  if(totalprice > 200)
  {
    float discount;
    discount = totalprice * 0.80;
    cout << "Price after discount is: " << discount; 
  }  
} 