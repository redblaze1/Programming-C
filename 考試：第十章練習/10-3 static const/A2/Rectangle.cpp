#include<iostream>
#include<stdio.h>
#include "Rectangle.h"
using namespace std;
int Rectangle::numOfRect = 0;

Rectangle::Rectangle() {
	Width = 1;
	Length = 1;
	numOfRect = 0;
}

double Rectangle::getArea() const {
	return Width*Length;
}
void Rectangle::getLength() const {
	cout << Width << " " << Length << " ";
}

void Rectangle::setWL(int Width, int Length){
	this->Width = (Width>0) ? Width : 0;
	this->Length = (Length>0) ? Length : 0;
	numOfRect++;
}

void Rectangle::getnum() {
	printf("%d ", numOfRect);
}