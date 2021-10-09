#include<iostream>
using namespace std;
int main()
{ char ch='a';
  short s=-1;
  int i=335200;
  bool b=true;
  long l=34409899;
  float f=1.78f;
  long double ld=12.1;
  wchar_t wc=L'a';
 cout<<"size of character variable     :"<<sizeof(ch)<<" and of character: "<<sizeof(char)<<endl;
 cout<<"size of Short variable         :"<<sizeof(s)<<" and of short: "<<sizeof(short)<<endl;
 cout<<"size of Integer variable       :"<<sizeof(i)<<" and of Integer: "<<sizeof(int)<<endl;
 cout<<"size of Bool variable          :"<<sizeof(b)<<" and of Bool: "<<sizeof(bool)<<endl;
 cout<<"size of Long variable          :"<<sizeof(l)<<" and of Long : "<<sizeof(long)<<endl;
 cout<<"size of Float variable         :"<<sizeof(f)<<" and of Float: "<<sizeof(float)<<endl;
 cout<<"size of Long double            :"<<sizeof(ld)<<" and of Long Double: "<<sizeof(long double)<<endl;
  cout<<"size of Wide character variable:"<<sizeof(wc)<<" and of Wide Character: "<<sizeof(wchar_t)<<endl;
}
   
    
   
