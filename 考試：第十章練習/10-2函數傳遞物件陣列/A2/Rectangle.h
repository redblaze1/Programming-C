#ifndef RECTANGLE_H
#define RECTANGLE_H 
class Rectangle
{
public:

	Rectangle();

	double getArea();

	void setW(int);

	void setL(int);

private:
	double Width;
	double Length;
};
#endif
