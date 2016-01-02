#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vArray1;
	vector <int> vArray2(30);
	cout << "Size Vector " << vArray2.size() << endl;
	cout << "Capacity Vector " << vArray2.capacity() << endl;
	cout << "Max_Size Vector " << vArray2.max_size()  << endl;
	for (int x=1;x<5;x++)
		{
			vArray2.push_back(10);
		}
	cout << "Size Vector " << vArray2.size() << endl;
	cout << "Capacity Vector " << vArray2.capacity() << endl;
	cout << "Max_Size Vector " << vArray2.max_size()  << endl;
}
