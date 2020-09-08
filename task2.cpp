#include <stdio.h>
#include <iostream>


using namespace std;

int main()
 {
 cout << "enter the option\n";
 int op;
 cin >> op;
 switch (op)
  {
  case 1:
   {  
   cout << "enter the number of lines\n";
   int lnum;
   cin >> lnum;
   cout << "enter the number of columns\n";
   int cnum;
   cin >> cnum;
    for (int i = 1; i <= lnum; i++)
     {
      for (int j = 1; j <= cnum; j++)
       cout << "*";
       cout << "\n";
     }
    break;
   }
  case 2:
   {
   int s = 8;
   int l = 8;
    for (int j = 1; j = s; j++)
     {
      for (int i = s - 1; i >= 0; i--)
       cout << " ";
       s = s - 1;
        for (double g = 8; g <= l; g = g + 0.5)
         cout << "*";
         l = l + 1;
         cout << "\n";
     }
    break;
   }
  }
 system("pause");
 return 0;
 }
