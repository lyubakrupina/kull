// main.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include "fuch.h"
#include <iostream>
using namespace std;

int main()
{
	int count; // ���������� ��� ������ � switch
	double a, b; // ���������� ��� �������� ���������
	cout << "Vvedite pervoe chislo: ";
	cin >> a; 
	cout << "Vvedite vtoroe chislo: "; 
	cin >> b;
	cout << "Vvedite nomer operacii: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	cin >> count;

	switch (count) // ������ ��������� switch
	{
		case 1: // ���� count = 1
			{
				cout << MySum(a,b);
				
				
			
				break;
			}
		case 2: // ���� count = 2
			{
				cout << MySub(a,b);
			
				break;
			}
		case 3: // ���� count = 3
			{
				cout << "vibrannai funcia nahoditca v razrabotke ";
				break;
			}
		case 4: // ���� count = 4
			{
				cout << "vibrannai funcia nahoditca v razrabotke  ";
				break;
			}
		default: // ���� count ����� ������ ������� ��������
			cout << "Nepravilni vvod" << endl;
	}


	system("pause");
	return 0;
}



