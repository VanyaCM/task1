#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
cout << "enter the number of options\n";
int num1;
cin >> num1;
cout << "enter the option of task comlete\n";
int num;
cin >> num;
switch (num)
 {
 case 1:
  {
  cout << "enter the number from list\n";
  int num2;
  cin >> num2;
  cout << "number of option is " << num2 % num1 << endl;
  break;
  }
 case 2:
  {
  cout << "enter the first letter of first name\n";
  unsigned char name;
  cin >> name;
  int numl = (int)name;
  cout << "number of option is " << numl % num1 << endl;
  break;
  }
case 3:
  {
  cout << "enter the first letter of second name\n";
  unsigned char name1;
  cin >> name1;
  int numl1 = (int)name1;
  cout << "number of option is " << numl1 % num1 << endl;
  break;
  }
 } 
system("pause");
return 0;
}
