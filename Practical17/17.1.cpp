#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
typedef list<int>::iterator List;
int main(){
    list<int> L;
    int n,a;
    cout<<"Enter the total number of elements: ";
    cin>>n;
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {   cin>>a;
        L.push_back(a);
    }
    cout<<"\nSize of List: "<<L.size()<<endl;
    cout<<"List Before Reversing: ";
    for(List it=L.begin();it!=L.end();it++)
        cout<<*it<<" ";
    
    L.reverse();
    cout<<"\nList After Reversing: ";
    for(List it=L.begin();it!=L.end();it++)
        cout<<*it<<" ";
        
    L.sort();
    cout<<"\nSorted List: ";
    for(List it=L.begin();it!=L.end();it++){
        cout<<*it<<" ";
    }
  return 0;
}


