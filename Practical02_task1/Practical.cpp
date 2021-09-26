#include<iostream>
using namespace std;
int main()
{ int n;
  cout<<"Enter a no(b/w 1-1000): ";
  cin>>n;
  if(n<2)
    cout<<n<<" is not a prime no."<<endl;
  else if(n==2)
      cout<<n<<" is a prime no.\n";
    else{
        for(int i=2;i<=(n/2);i++)
                 if(n%i==0)
                 { cout<<n<<" is not a prime no."<<endl;
                   return 0; }
         cout<<n<<" is a prime no.\n";
         }
   return 0;
}
