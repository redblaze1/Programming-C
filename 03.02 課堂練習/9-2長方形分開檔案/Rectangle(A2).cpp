#include "Rectangle.h"
#include <iostream>
#include <iomanip>

Rectangle::Rectangle()
  {
    width = 1;
    height = 1;
  }
  
Rectangle::Rectangle(double newwidth,double newheight)
  {
    width = newwidth;
    height = newheight;
  }

double Rectangle::getArea()
  {
    return width*height*1.00;
  }
  
 double Rectangle::getPerimeter()
  {
    return width*2.00+height*2.00;
  }
