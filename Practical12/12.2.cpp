//Task 12.2
#include <iostream>
using namespace std;
class A
{  public:
     A(){   
         cout<<"Constructor of Class A\n";
     }
     ~A(){
          cout<<"Destructor of Class A\n";
     }
};
class B: public A
{   public:
     B(){
          cout<<"Constructor of Class B\n";
     }
     ~B(){
         cout<<"Destructor of Class B\n";
     }
};
class C:public B
{  public:
     C(){    
          cout<<"Constructor of Class C\n";
     }
     ~C(){
         cout<<"Destructor of Class C\n";
     }
};
int main() 
{   C c; 
    return 0;
}