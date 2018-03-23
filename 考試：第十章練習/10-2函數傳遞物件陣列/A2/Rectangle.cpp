#include<iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	Width = 0;
	Length = 0;
}
double Rectangle::getArea() {
	return Width * Length;
}
void Rectangle::setW(int newWidth) {
	Width = (newWidth > 0) ? newWidth : 0;
}
void Rectangle::setL(int newLength) {
	Length = (newLength > 0) ? newLength : 0;
}

