#include<iostream>
using namespace std;
int main()
{  int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   cout<<"Original Matrix\n";
   for(int i=0;i<3;i++)
   {  for(int j=0;j<3;j++)
           cout<<a[i][j]<<" ";
      cout<<endl; }
   cout<<"\nReversed Matrix\n";
   for(int i=0,k=2;i<=1;i++,k--)
     for(int j=0,l=2;j<3;j++,l--)
      {  if(i==1 && j==2)
               break;
       int c=a[i][j];
       a[i][j]=a[k][l];
       a[k][l]=c;
      }
   for(int i=0;i<3;i++)
   {  for(int j=0;j<3;j++)
           cout<<a[i][j]<<" ";
      cout<<endl; }
  return 0;
}
