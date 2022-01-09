#include<iostream>
#include<fstream>
using namespace std;
int main()
{   string s;
    char data;
    fstream myfile;
    myfile.open("example.txt",ios::out | ios::in|ios::app );
    myfile<<"Hello !\n";
    myfile.seekg(0, myfile.beg);
    cout<<"Content of File:";
    while(myfile>>noskipws>>data)
    {      cout<<data;    }
    myfile.close();
    
    myfile.open("example.txt",ios::app | ios::in );
    myfile.seekg (0,myfile.end);
    cout<<"\nEnter text you want to append:";
    getline(cin,s);
    myfile<<s;
    cout<<endl;
    
    myfile.seekg(0, myfile.beg);
    cout<<"Content of File After Appending\n";
    while(myfile>>noskipws>>data)
    {    cout<<data;  }
    myfile.close();
    return 0;
}
