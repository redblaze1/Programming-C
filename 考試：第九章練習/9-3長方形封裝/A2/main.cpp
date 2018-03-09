#include "Rectangle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double a,b;
	Rectangle ex;
	Rectangle ex1;
	Rectangle ex2;
	cin >> a >> b;
	ex.setWidth(a);
	ex.setLength(b);
	cout << fixed << setprecision(2) << ex.getArea() << " " << ex.getPerimeter() << endl;
	cin >> a >> b;
	ex1.setWidth(a);
	ex1.setLength(b);
	cout << fixed << setprecision(2) << ex1.getArea() << " " << ex1.getPerimeter() << endl;
	a = 5.0;
	b = 2.5;
	ex2.setWidth(a);
	ex2.setLength(b);
	cout << fixed << setprecision(2) << ex2.getArea() << " " << ex2.getPerimeter() << endl;
}