#include "Cube.h"
#include<iomanip>
#include<iostream>
using namespace std;
// Construct a default circle object
Cube::Cube()
{
	length = 1;
}

// Construct a circle object with specified radius
Cube::Cube(double length)
{
	setlength(length);
}

// Construct a circle object with specified radius,
//  color and filled values
Cube::Cube(double length, const string& color)
{
	this->length = length;
	setColor(color);
	
}

// Return the radius of this circle
double Cube::getlength() const
{
	return length;
}

// Set a new radius
void Cube::setlength(double radius)
{
	this->length = (radius >= 0) ? radius : 0;
}

// Return the area of this circle
double Cube::getArea() const
{
	return 6 * length * length;
}

// Return the perimeter of this circle
double Cube::getPerimeter() const
{
	return 2 * length * 3.14159;
}
double Cube::getVolume()const
{
	return  length* length * length;
}

// Return the diameter of this circle
double Cube::getDiameter() const
{
	return 2 * length;
}

// Redefine the toString function
string Cube::toString() const
{
	return "length object";
}
void Cube::print() const
{
	cout << fixed << setprecision(1) << "radius:" << getlength() << ",area:" << getArea() << ",volume:" << getVolume() << ",color:" << getColor() << endl;

}
string Cube::getColor() const
{
	return getColor();
}
void Cube::setColor(const string& color)
{
	setColor(color);
}