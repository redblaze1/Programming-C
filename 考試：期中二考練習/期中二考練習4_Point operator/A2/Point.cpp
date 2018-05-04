#include<iostream>
#include"Point.h"
#include<stdio.h>
#include<sstream>
using namespace std;

Point::Point() {
	a = 0;
	b = 0;
}

Point::Point(int a, int b) {
	this->a = a;
	this->b = b;
}
int Point::geta() {
	return this->a;
}
int Point::getb() {
	return this->b;
}
void Point::seta_b(int a, int b) {
	this->a = a;
	this->b = b;
}
Point Point::operator+(Point p) {
	Point t;
	t.seta_b(this->a + p.geta(), this->b + p.getb());
	return t;
}

Point Point::operator-(Point p) {
	Point t;
	t.seta_b(this->a - p.geta(), this->b - p.getb());
	return t;
}
string Point::toString()const {
	stringstream ss;
	ss << "(" << a << "," << b << ")";
	return ss.str();
}
ostream& operator << (ostream& out, const Point p) {
	out << "(" << p.a << "," << p.b << ")";
	return out;
}