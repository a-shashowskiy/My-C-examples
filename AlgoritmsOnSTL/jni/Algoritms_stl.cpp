/*
Написано и отлажено в AIDE - Android IDE 
на Asus PadPhone A66
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
vector< int > v1(10);
vector< int > v2(10);
for (int x=0;x < v1.capacity() ;x++) 
{
	v1[x]=10-x;
}
for (int x=0;x < v2.capacity() ;x++) 
{
	v2[x]=10-x;
}
for (int x=0;x < v1.size();x++)
{
	cout << v1[x] << " ";
}
cout << endl;
for (int x=0;x < v2.size();x++) 
{
	cout << v2[x] << " ";
}
cout << endl;
cout << "___________ SORT _____________" << endl;
sort(v1.begin(),v1.end());//собственно сам алгоритм
for (int x=0;x < v1.size();x++) 
{
	cout << v1[x] << " ";
}
cout << endl;
sort(v2.begin()+1,v2.end()-1);
for (int x=0;x < v2.size();x++) 
{
	cout << v2[x] << " ";
}
cout << endl;
}
