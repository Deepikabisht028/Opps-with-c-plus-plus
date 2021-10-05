#include<iostream>
using namespace std;
namespace first
{int  add(int a,int b )
   { return (a+b); }
};
namespace second
{ float add(float a,float b)
  { return (a+b); }
};
int main()
{ cout<<"Sum of 5 and 6: "<<first::add(5,6)<<endl;
  cout<<"Sum of 1.7 and 0.9: "<<second::add(1.7F,0.9F)<<endl; }
