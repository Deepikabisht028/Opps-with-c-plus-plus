#include<iostream>
using namespace std;
int main()
{  int *p = {10,20,20};//this part of the code will produce an error as pointers  only store address
   cout << *p;
   p++;
   cout << *p;
   return 0;
}