/*
Написано и отлажено в AIDE - Android IDE 
на Asus PadPhone A66
*/
#include <set>          // это подключаем класс множеств
#include <iostream>   // консольный ввод/вывод - он нам понадобится

using namespace std;    // подключаем STL-ное пространство имен - или прийдеться писать 
//перед каждым членом пространства STL "std::"


// Это класс точки stl_point.

class stl_point
{
public:
	double x, y;	// собственно, абсцисса и ордината нашей точки
			// ну и конструктор:
	stl_point(double tx=0, double ty=0)
	{
		x = tx;
		y = ty;
	}
};

// Теперь самое интересное. Перегружаем оператор "меньше":

bool operator<(stl_point first, stl_point second)
{
	return first.x < second.x;
}


int main(void)
{
	int x, y, ch=0;
	std::set <stl_point> set_exact; // наш список точек


	while(1)
	{
		// запрашиваем иксы-игреки - здесь все просто
		cout<<"Write number Abscissa: ";
		cin >> x;
		cout << "Ordinamte: ";
        cin >> y;

		//А с этого места начинается немного необычно.
		//1. проверяем, что-то там вставилось или не вставилось
		if(!set_exact.insert(stl_point(x, y)).second)
		{
			// Ну, пользователь может ошибится. Если уж он повторно
			// ту же абсциссу ввел, нужно узнать, поменять он хочет значение
          cout<<"Entered number of abscissa alredy exist."<< endl;
		  cout<<"Do you want change it?" <<endl;
		  cout<<"Huston we have a problem!" << endl;
		  cout<<"1 (change), 2 (left)"<<endl;
		  cin>>ch;
			if(ch==1)
			{
			// Ну, раз уж решили менять значение, для начала, удалим старое. Метод erase удаляет из множества
			// элемент с каким-то определенным значением. Раз уж в нашем
			// множестве ключевую (во всех смыслах) роль играет икс, то игрек не трогаем.

				set_exact.erase(stl_point(x));
				cout << "New number of Abscissa: ";
		        cin >> x;
				cout<< endl;
				
			// Напоследок еще раз проверим вставился ли наш элемент

				if(set_exact.insert(stl_point(x, y)).second)
					cout << "success" << endl << endl;
				else
					cout << "not inserted" << endl << endl;
			}
			else cout << "not inserted" << endl << endl;
		}
		else cout << "success" << endl << endl;

		// Теперь пройдем все множество с помощью старичка-итератора
		// Смысл в том, что после каждого ввода данных ныне будет
		// распечатываться все множество

		set<stl_point>::iterator it;

		for(it=set_exact.begin(); it != set_exact.end(); it++)
		{
			cout << "x = " << (*it).x << ", y = " << (*it).y << endl;
		}
		cout << endl;
	}
}
