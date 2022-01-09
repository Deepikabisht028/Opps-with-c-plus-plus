#include<iostream>
#include<iomanip>
#include<sstream>
using namespace std;
int main()
{   //IOS
    int z=50;
    cout<<"Hexadecimal Value of a: "<< hex << z << endl;
    cout<<"Decimal Value of a: "<< dec << z << endl;

    char a,b,c,d,e,f;
    std::istringstream s ("   978");
    s >> std::skipws >> a >> b >> c;
    cout <<"Using skiwps:"<< a  << b << c << endl;

    std::istringstream p ("   978");
    p >> std::noskipws >> a >> b >> c >> d >> e >> f;
    cout <<"Using noskiwps:"<< a  << b << c << d  << e << f <<"\n\n";

  // Istream
    std::istringstream q("      Hello World");
    string str1;
    getline(q >> ws, str1);
    cout <<"Using ws:"<< str1 << endl;

   //Ostream
    cout<<endl<<"Hello"<<endl<<"world"<<flush;
  
    //Iomanip
    float num=26.98675f;
    cout<<"\n\nUsing setw(10):"<< setw(10) << num << endl;
    cout<<"Using setprecision(5):" << setprecision(5) << num;

    return 0;
}