#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
public:

	Rectangle();

	double getArea() const;

	void getLength() const;

	void setWL(int, int);

	void getnum();

private:

	double Width;
	double Length;
	static int numOfRect;
};
#endif