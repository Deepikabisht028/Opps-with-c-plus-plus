#include<iostream>
#include<string>
using namespace std;
int main()
{ string s,b;
  cout<<"Enter the first string:";
  getline(cin,s);
  cout<<"Enter the second string:";
  getline(cin,b);
  int i,j,a=s.size();
  int c=b.size();
  for(i=0,j=0;i<a&&j<c;i++,j++)
   {        if(s[i]!=b[j])
             {   cout<<"Not equal"<<endl;
               return 0; }
   }
   if(i==a && j<c || i<a && j==c)
        cout<<"Not equal"<<endl; 
   else
      cout<<" Equal"<<endl;
return 0;
}
