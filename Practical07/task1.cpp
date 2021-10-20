#include<iostream>
using namespace std;
int main()
{ int c;
  cout<<"1.Year\n2.Month\n3.Day\n";
  cout<<"Enter your choice: ";
  cin>>c;
  switch(c)
  { case 1: cout<<"Current Year :2021\n";  break;
    case 2: cout<<"Current Month:October\n"; break;
    case 3: cout<<"Current Day  :Wednesday\n"; break;
    default:cout<<"Not Applicable\n";
  }
  return 0;
}
