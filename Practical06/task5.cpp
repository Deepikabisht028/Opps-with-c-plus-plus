#include<iostream>
using namespace std;
int main(){ 
  string s="hi",a="hi_iii",b="hi",c="hi*iiii",d="Hi";        
  cout<<"String comparision btw:"<<endl;
  cout<<" " <<s<<" and "<<d<<": "<<s.compare(d)<<endl;
  cout<<" " <<d<<" and "<<s<<": "<<d.compare(s)<<endl;
  cout<<" " <<s<<" and "<<b<<": "<<s.compare(b)<<endl;
  cout<<" " <<s<<" and "<<a<<": "<<s.compare(a)<<endl;
  cout<<" " <<c<<" and "<<s<<": "<<c.compare(s)<<endl;
  cout<<"\nDifference in ASCII values:"<<endl;
  cout<<" a and A: "<<'a'-'A'<<endl;
  cout<<" a and b: "<<'a'-'b'<<endl;
}
