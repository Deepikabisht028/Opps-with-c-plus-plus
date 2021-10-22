#include<iostream>
using namespace std;
int main()
{ int arr[] = {10,20,30};
  cout << *arr;
  cout << arr;
  arr++;//error
  cout << *arr;
   return 0;
}