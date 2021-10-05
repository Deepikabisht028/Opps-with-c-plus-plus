#include<iostream>
namespace first
{int  add(int a,int b )
   { return (a+b); }
};
namespace second
{ float add(float a,float b)
  { return (a+b); }
};
int main()
{ std::cout<<"Sum of 1 and 2: "<<first::add(1,2)<<std::endl;
  std::cout<<"Sum of 1.1 and 1.8: "<<second::add(1.1F,1.8F)<<std::endl; }
