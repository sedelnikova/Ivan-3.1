// Иван 3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C;
	cout << "Введите два числа^= ";
	cin >> A >> B;
	C = A; 
	A = B; 
	B = C;

		cout << "A = " << A << endl;
		cout << "B = " << B << endl;
		return 0;
	}


