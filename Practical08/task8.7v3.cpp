#include<iostream>
using namespace std;
void swap(int *a, int *b)
{ int c=*a;
  *a=*b;
  *b=c;
}
int main()
{ int a,b;
  cout<<"Enter values of a and b:";
  cin>>a>>b;
  cout<<"Original Values a:"<<a<<", b:"<<b<<endl; 
  swap(&a,&b);
  cout<<"Swapped Values a:"<<a<<", b:"<<b<<endl;  
   return 0;
}
