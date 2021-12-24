//Task11.2
#include <iostream>
using namespace std;
class Mammals
{  public:
    void print1() 
    {
        cout<<"I am mammal"<<endl;
    }
};

class MarineAnimals
{   public:
      void print2() 
      {   
          cout<<"I am a marine animal"<<endl;
      }
};

class BlueWhale:public Mammals,public MarineAnimals
{   public:
      void print3() 
      {    
          cout<<"I belong to both the categories: Mammals as well as Marine animals"<<endl;
      }
};

int main() 
{    Mammals m;
     MarineAnimals ma;
     BlueWhale b;
     m.print1();
     ma.print2();
     b.print3();
     cout<<"\nCalling parent function Mammals and MarineAnimals using object of BlueWhale:\n";
     b.print1();
     b.print2();
     return 0;
}