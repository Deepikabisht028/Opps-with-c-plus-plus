#include<iostream>
#include<fstream>
using namespace std;
int main()
{   string data;
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"Hello World!\n";
    myfile.close();
    ifstream file;
    file.open("example.txt");
    getline(file,data);
    cout<<data;
    return 0;
}