#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Enter the number of element: ";
    int a,n;
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {   cin>>a;
        v.push_back(a);
    } 
    vector<int> :: iterator it;
    cout<<"\nVectors : ";
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
   
    cout<<"\nSize of Vector:: "<<v.size()<<endl;
    cout<<"Capacity of Vector:: "<<v.capacity()<<endl;
    cout<<"Max Size of Vector:: "<<v.max_size()<<endl;
    
    v.resize(3);
    cout<<"Vector after resizing (Size = 3):: ";
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<"\nVector is Empty or Not(1 or 0):: "<<v.empty()<<endl;
   return 0;
}