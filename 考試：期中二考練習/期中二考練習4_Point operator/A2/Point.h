#ifndef POINT_H
#define POINT_H
#include <string>
#include <iostream>
using namespace std;

class Point {
public:
	Point();
	Point(int, int);
	int geta();
	int getb();
	void seta_b(int, int);
	Point operator+(Point);
	Point operator-(Point);
	string toString()const;
	friend ostream& operator << (ostream& out, const Point p);

private:
	int a, b;
};

#endif