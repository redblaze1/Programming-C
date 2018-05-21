#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"

  class Ball : public GeometricObject
 {
public:
	Ball();
	Ball(double);
	Ball(double radius, const string& color);
	double getRadius() const;
	void setRadius(double);
    double getArea() const;
	double getPerimeter() const;
	double getDiameter() const;
	string toString() const;
	double getVolume()const;
	void print() const;
	string getColor() const;
	void setColor(const string& color);

 private:
		double radius;
}; // Must place semicolon here
  #endif