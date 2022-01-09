#include <iostream>
using namespace std;
template <typename T>
T add(T x,T y)
{
	return x+y;
}

int main()
{    cout<<"Addition of two integers:"<<add<int>(5,4)<<endl;
	cout<<"Addition of interger,float and returning double:"<< add<double>(12, 6.1f) << endl;
	return 0;
}