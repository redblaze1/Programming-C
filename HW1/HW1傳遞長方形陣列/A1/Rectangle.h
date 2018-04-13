#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	private:
		static double totle_Area;
		double width, hieght;
	public:
		static int amount;
		Rectangle(int w, int h);
		~Rectangle();
		double getArea() const;
		static const double sum();
};

#endif
