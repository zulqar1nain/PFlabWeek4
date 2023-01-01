#include <iostream>
using namespace std;
main()
{ 
  while(true)
 { 
   int amount;
   string day;
   float discount;
   float totalamount;
   cout << "Enter your amount: ";
   cin >> amount;
   cout << "Enter day: ";
   cin >> day;
  
   if(day == "sunday")
   {
    discount=amount*0.10;
   }
    totalamount=amount-discount;
    cout <<"total amount is: "  <<totalamount  <<endl;
  
   if(day != "sunday")
   {
    cout <<"total amount without discount: "  <<amount <<endl;
   }
 }
}
  
                                                                                                                                                                                               