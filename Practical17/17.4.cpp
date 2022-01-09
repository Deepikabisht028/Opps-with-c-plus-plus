#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef  vector <int>::iterator vect;
int main()
{   int x,a[]={4,6,9,2,6,2,7};
    vector<int> v1(begin(a),end(a));
    cout<<"Content of Vector (V1): ";
    for(vect q=v1.begin();q != v1.end(); q++)
        cout<<*q<<" ";
    
    cout<<"\n\nVector after sorting: ";
    sort(v1.begin(),v1.end());
    for(vect q=v1.begin();q != v1.end(); q++)
        cout<<*q<<" ";
    
    cout<<"\n\nVector after Reversing: ";
    reverse(v1.begin(),v1.end());
    for(vect q=v1.begin();q != v1.end(); q++)
        cout<<*q<<" ";
    
    cout<<"\n\nMaximum Element of vector:: "<<*max_element(v1.begin(),v1.end())<<endl;
    cout<<"\nMinimum Element of vector:: "<<*min_element(v1.begin(),v1.end())<<endl<<endl;
 
    cout<<"Enter a number to check its occurance: ";
    cin>>x;
    cout<<"Occurance of "<<x<<" in vector:: "<<count(v1.begin(),v1.end(),x)<<endl<<endl;
    x=sizeof(a) / sizeof(a[0]);
    sort(a,a+x);
    cout<<"Array after Sorting: ";
    for(int i=0;i<x;i++)
        cout<<a[i]<<" ";
    cout<<endl<<endl;
    cout<<"Enter an element for Binary Search: ";
    cin>>x;
    binary_search(a, a+x, x)==1? cout<<x<<" exists in array.":  cout<<x<<" does not exists in array.";

    return 0;
}