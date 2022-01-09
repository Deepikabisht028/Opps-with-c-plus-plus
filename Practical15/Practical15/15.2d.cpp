#include<iostream>
#include<fstream>
using namespace std;
int main()
{   int c=0,w=1,l=1; 
    char data;
    fstream myfile;
    myfile.open("example.txt",ios::in);
    while(myfile>>noskipws>>data)
    {  if(data!=' '&& data!='\n')
           c++; 
       else if(data==' ')
          w++;
       else if(data=='\n')
       {  l++;
          w++;  }
    }
    cout<<"Total number of characters in file(Excluding space and newline):: "<<c<<endl;
    cout<<"Total number of words in file:: "<<w<<endl;
    cout<<"Total number of lines in file:: "<<l;
    myfile.close();
    return 0;
}
