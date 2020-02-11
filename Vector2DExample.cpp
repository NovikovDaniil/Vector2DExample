// Vector2DExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include "Vector2d.h"
using namespace std;

int main() {
	Vector2d a(1, 3);
	cout << (string)a << endl;
	Vector2d b(4, 2);
	cout << (string)b << endl;
	Vector2d c = a + b;
	cout << (string)c << endl;
	Vector2d d = a * 10;
	cout << (string)d << endl;
	Vector2d e = a - b;
	cout << a * b << endl;
	Vector2d f = 10 * a;
	cout << (string)f << endl;
	++b;
	cout << (string)b << endl;
	Vector2d g = a++;
	cout << (string)g << endl;
	cout << (string)a << endl;
	--a;
	cout << (string)a << endl;
	a -= b;
	cout << (string)a << endl;
}
