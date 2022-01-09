#include<iostream>
using namespace std;
class base
{    public:
      int add(int a,int b)
      {
          return (a+b);
      }
      float add(float a,float b)
      {
          return (a+b);
      }
};
class child:public base
{    public:
      int add(int a,int b)
      {
          return (a+b+1);
      }
};
int main()
{
    child c;
    cout<<"Addition of 2,3: "<<c.add(2,3)<<endl;
    cout<<"Addition of 2.1,7.5: "<<c.add(2.1f,7.5f);
}
//child class can't see the add funtion of int and float return type of base class.