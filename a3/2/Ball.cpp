 #include "Ball.h"
#include<iomanip>
#include<iostream>
using namespace std;
  // Construct a default circle object
  Ball::Ball()
  {
	    radius = 1;
  }

  // Construct a circle object with specified radius
  Ball::Ball(double radius)
  {
	    setRadius(radius);
}

  // Construct a circle object with specified radius,
  //  color and filled values
  Ball::Ball(double radius, const string& color)
  {
	    this->radius = radius;
	    setColor(color);
	    
 }

  // Return the radius of this circle
  double Ball::getRadius() const
  {
	    return radius;
 }

  // Set a new radius
  void Ball::setRadius(double radius)
  {
	    this->radius = (radius >= 0) ? radius : 0;
 }

  // Return the area of this circle
  double Ball::getArea() const
  {
	    return 4*radius * radius * 3.14159;
  }

  // Return the perimeter of this circle
  double Ball::getPerimeter() const
  {
	    return 2 * radius * 3.14159;
  }
   double Ball::getVolume()const
  {
	  return radius* radius * radius * 3.14159*4/3.0;
  }

  // Return the diameter of this circle
  double Ball::getDiameter() const
  {
	    return 2 * radius;
  }

  // Redefine the toString function
  string Ball::toString() const
  {
	    return "Circle object";
  }
  void Ball::print() const
  {
	  cout << fixed << setprecision(1) << "radius:" << getRadius() << ",area:" << getArea() << ",volume:" << getVolume() << ",color:" << getColor() << endl;
  }
   string Ball::getColor() const
  {
	   return getColor();
  }
  void Ball::setColor(const string& color)
  {
	  setColor(color);
  }