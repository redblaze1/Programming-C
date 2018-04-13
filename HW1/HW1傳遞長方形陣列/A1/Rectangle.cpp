#include "Rectangle.h"

int Rectangle::amount = 0;
double Rectangle::totle_Area = 0;

Rectangle::Rectangle(int w, int h) : width(w), hieght(h) {
	Rectangle::amount++;
	Rectangle::totle_Area += w * h;
}

Rectangle::~Rectangle() {
	Rectangle::amount--;
	Rectangle::totle_Area -= this->getArea();
}

double Rectangle::getArea() const {
	return width * hieght;
}

const double Rectangle::sum() {
	return Rectangle::totle_Area;
}

