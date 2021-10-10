#include<iostream>
using namespace std;
int main()
{ string a="Toy";
  cout<<"Address of string a:"<<&a<<endl;
  a[0]='J';
  cout<<"Address of string a after replacing T with J:"<<&a<<endl;
  cout<<"String a after replacing T: "<<a<<endl;
}

