//Task11.1 (a)
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
      {   print();
          cout<<"class B";
      }
};
int main() 
{    B obj;
     obj.display() ;
     return 0;
}