// main.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "fuch.h"
#include <iostream>
using namespace std;

int main()
{
	int count; // переменная для выбора в switch
	double a, b; // переменные для хранения операндов
	cout << "Vvedite pervoe chislo: ";
	cin >> a; 
	cout << "Vvedite vtoroe chislo: "; 
	cin >> b;
	cout << "Vvedite nomer operacii: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;

	switch (count) // начало оператора switch
	{
		case 1: // если count = 1
			{
				cout << MySum(a,b);
				
				
			
				break;
			}
		case 2: // если count = 2
			{
				cout << MySub(a,b);
			
				break;
			}
		case 3: // если count = 3
			{
				cout << "vibrannai funcia nahoditca v razrabotke ";
				break;
			}
		case 4: // если count = 4
			{
				cout << "vibrannai funcia nahoditca v razrabotke  ";
				break;
			}
		default: // если count равно любому другому значению
			cout << "Nepravilni vvod" << endl;
	}


	system("pause");
	return 0;
}



