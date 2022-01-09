#include<iostream>
using namespace std;
class base
{ public:
    virtual ~base()
    {
        cout<<"destructor of base class"<<endl;
    }
};
class child:public base
{
  public:
   virtual ~child()
    {
        cout<<"destructor of child class"<<endl;
    }
};
int main()
{
    base *b;
    child c;
    b=&c;
    b->~child();
}
