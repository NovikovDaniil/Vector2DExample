// Vector2DExample.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"
using namespace std;

int main() {
	Vector2d a(1, 3);
	a.print();
	Vector2d b(4, 2);
	b.print();
	cout << a.scalarMult(b) << endl;
	cout << a.len() << endl;
	cout << b.len() << endl;
	cout << a.angle(b) << endl;
	cout << a.getx() << endl;
	a.setx(8);
	cout << a.getx() << endl;
	Vector2d c = a.sub(b);
	a.print();
	b.print();
	c.print();
	Vector2d d = a.mult(10);
	d.print();

}
