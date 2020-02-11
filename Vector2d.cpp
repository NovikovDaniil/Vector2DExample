#include "Vector2d.h"
#include <iostream>
using namespace std;
#define M_PI       3.14159265358979323846
Vector2d::~Vector2d() {

}
Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}

Vector2d::Vector2d(double x1, double y1, double x2, double y2) {
	this->x = x2 - x1;
	this->y = y2 - y1;
}
Vector2d::Vector2d(const Vector2d& other) {
	this->x = other.x;
	this->y = other.y;
}
void Vector2d::sum(Vector2d b) {
	x = x + b.x;
	y = y + b.y;
}
void Vector2d::mult(double num) {
	x = x * num;
	y = y * num;
}
void Vector2d::print() {
	cout << "( " << x << " ; " << y << " )" << endl;
}
double Vector2d::scalarMult(Vector2d b) {
	return x * b.x + y * b.y;
}
void Vector2d::sub(Vector2d b) {
	x = x - b.x;
	y = y - b.y;
}
double Vector2d::len() {
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::angle(Vector2d b) {
	return acos(this->scalarMult(b) / (this->len() * b.len())) * 180 / M_PI;
}