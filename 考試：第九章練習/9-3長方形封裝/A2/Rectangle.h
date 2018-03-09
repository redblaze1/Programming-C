#ifndef RECTANGLE_H
#define RECTANGLE_H 
class Rectangle
{
public:

	Rectangle();

	double getArea();

	double getPerimeter();

	void setWidth(double);

	void setLength(double);

private:
	double Width;
	double Length;
};
#endif