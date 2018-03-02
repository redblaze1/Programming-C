#ifndef RECTANGLE_H
#define RECTANGLE_H 

class Rectangle
{
public:
  double width;
  double height;

  Rectangle();

  Rectangle(double newwidth,double newheight);

  double getArea();

  double getPerimeter();
};
#endif
