//Task 12.1
#include <iostream>
using namespace std;
class A
{ private:
    int a;
  protected:
     void print()
     { cout<<"Protected method";}
  public:
    void enter(int x) 
    {   a=x;
        cout<<a<<endl;
    }
};
class B:virtual public A
{   //All protected member of A will be copied in protected section of B  
    public:
      //All public member of A will be copied in public section of B
      int k;
      int returnval() 
       {   enter(10);
          return k;
       }
};
class C:virtual protected B,virtual private A
{  //All protected and public member of A will be copied in private section of C
   //All public and protected member of B will be copied in protected section of C
   public:
    void display () 
    { k=12;
      enter(5);//member function can call other member function
      cout<<returnval() ;
    }
};
int main() 
{    B b; 
     b.enter(6);//object can directly access base class public method as A is inherited publicly
     C c;
     cout<<c.returnval();//error as B is protectedly inherited by C and protected members can't access protected members directly 
     c.enter(1) ;//error as A is privately inherited by C
    return 0;
}