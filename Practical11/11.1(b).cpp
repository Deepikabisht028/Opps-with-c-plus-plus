//Task11.1 (b)
#include <iostream>
using namespace std;
class A
{ public:
    void print() 
    {
        cout<<"class A"<<endl;
    }
};
class B:public A
{
    public:
      void display () 
      {
          cout<<"class B";
      }
};
int main() 
{    B obj;
     obj.print() ;
    return 0;
}