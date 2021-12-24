//Task 12.3
#include <iostream>
using namespace std;
class A
{  public:
     A(int z){ 
     
         cout<<"Argument passed to Constructor of Class A : "<<z<<endl;
     }
     
};
class B: public A
{   public:
     B(int y,int z):A(z){
         cout<<"Argument passed to Constructor of Class B : "<<y<<endl;
     }
    
};
class C:public B
{  public:
     C(int x,int y,int z): B(y,z){    
          cout<<"Argument passed to Constructor of Class C : "<<x<<endl;
     }
   
};
int main() 
{   C c(5,6,7); 
    return 0;
}