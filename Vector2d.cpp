#include "Vector2d.h"
#include <iostream>
#include<string>
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
Vector2d Vector2d::sum(Vector2d b) {
	return Vector2d(x + b.x, y + b.y);
}

Vector2d Vector2d::mult(double num) {
	return Vector2d(x * num, y * num);
}
Vector2d Vector2d::sub(Vector2d b) {
	return Vector2d(x - b.x, y - b.y);
}

void Vector2d::print() {
	cout << "( " << x << " ; " << y << " )" << endl;
}
double Vector2d::scalarMult(Vector2d b) {
	return x * b.x + y * b.y;
}
double Vector2d::len() {
	return sqrt(pow(x, 2) + pow(y, 2));
}
double Vector2d::angle(Vector2d b) {
	return acos(this->scalarMult(b) / (this->len() * b.len())) * 180 / M_PI;
}
Vector2d Vector2d::operator+(const Vector2d& v) const
{
	return Vector2d(x + v.x, y + v.y);
}
Vector2d Vector2d::operator-(const Vector2d& v) const
{
	return Vector2d(x - v.x, y - v.y);
}
double Vector2d::operator*(const Vector2d& v) const
{
	return (x * v.x + y * v.y);
}
Vector2d Vector2d::operator*(const double& v) const
{
	return Vector2d(x * v, y * v);
}
Vector2d operator*(double r, Vector2d& a)
{
	return a * r;
}
Vector2d& Vector2d::operator++()
{
	x++;
	y++;
	return *this;
}
Vector2d Vector2d::operator++(int)
{
	Vector2d tmp(x, y);
	x++;
	y++;
	return tmp;
}
Vector2d& Vector2d::operator--()
{
	x--;
	y--;
	return *this;
}
Vector2d Vector2d::operator--(int)
{
	Vector2d tmp(x, y);
	x--;
	y--;
	return tmp;
}
const Vector2d& Vector2d::operator+=(const Vector2d& v)
{
	x += v.x;
	y += v.y;
	return *this;
}
const Vector2d& Vector2d::operator-=(const Vector2d& v)
{
	x -= v.x;
	y -= v.y;
	return *this;
}
const Vector2d& Vector2d::operator*=(const double& v)
{
	x *= v;
	y *= v;
	return *this;
}
Vector2d::operator std::string()
{
	std::string s = "( " + to_string(x) + " ; " + to_string(y) + " )";
	return s;
}
