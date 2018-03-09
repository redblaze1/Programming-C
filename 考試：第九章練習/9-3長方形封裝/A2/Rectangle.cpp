#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	Width = 1;
	Length = 1;
}

double Rectangle::getArea()
{
	return Width*Length*1.00;
}
double Rectangle::getPerimeter()
{
	return Width*2.00 + Length*2.00;
}
void Rectangle::setWidth(double newWidth) {
	Width = (Width >= 0) ? newWidth : 0;
}
void Rectangle::setLength(double newLength) {
	Length = (Length >= 0) ? newLength : 0;
}
