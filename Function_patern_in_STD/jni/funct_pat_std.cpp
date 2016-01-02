/*
Написано и отлажено в AIDE - Android IDE 
на Asus PadPhone A66
*/
#include <iostream>
using namespace std;

//template function
template <class T>
T fuct(T value){
	return (value*value)-(2*value);
}
//int function
int FuctInt(int x)
{
	return (x*x)-(2*x);
}
//double funct
double FuctDouble(double x)
{
	return (x*x)-(2*x);
}

int main()
{
	int x=25;
	double y=3.12;
	cout << "Int " << FuctInt(x) <<endl;
	cout << "Double " << FuctDouble(y) << endl;
	cout << "----------- template ---------------" << endl;
	cout << "Int " << fuct(x) <<endl;
	cout << "Int " << fuct(y) << endl;
}

