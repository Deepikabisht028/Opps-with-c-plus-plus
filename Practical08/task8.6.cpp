#include<iostream>
using namespace std;
void series(int n)
{ if(n==1)
  { cout<<"2"; 
    return; }
  else
    series(n-1);
  cout<<",("<<n<<"^"<<n<<"+"<<n<<")";
}
int main()
{ int n;
  cout<<"Enter n:";
  cin>>n;
  series(n);
 cout<<endl;
   return 0;
}
