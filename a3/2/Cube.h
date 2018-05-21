#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"

class Cube : public GeometricObject
{
public:
	Cube();
	Cube(double);
	Cube(double length, const string& color);
	double getlength() const;
	void setlength(double);
	double getArea() const;
	double getPerimeter() const;
	double getDiameter() const;
	string toString() const;
	double getVolume()const;
	void print() const;
	string getColor() const;
	 void setColor(const string& color);
private:
	double length;
}; // Must place semicolon here
#endif