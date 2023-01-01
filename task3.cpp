#include <iostream>
using namespace std;
void eligible(int age);
main()
{ 
 while(true)
 {
  int age;
  cout << "Your age is: ";
  cin >>age;
  eligible(age);
 }
} 
void eligible(int age)
{
   if(age>=18)
   {
     cout <<"you are voted";
   }
   if(age<18)
   {
     cout <<"You are not voted";
   }
}