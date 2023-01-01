#include <iostream>
using namespace std;
void showresult(int marks);
main()
{
  int marks;
  cout << "Marks is: ";
  cin >>marks;
  showresult(marks);
}
void showresult(int marks) 
 {
   if(marks >50) 
  { 
    cout << "you are passed: ";
  }
   if (marks < 50)
  { 
    cout << "you are fail: ";
  }
   if (marks == 50)
  {
   cout << "Be hard: ";
  }
 }