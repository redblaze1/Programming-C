#include "BMI.h"
#include <iostream>
using namespace std;
Bmi::Bmi() {
	weight = 1;
	height = 1;
}

double Bmi::getbmi() {
	return weight / (height*height);
}

void Bmi::setweight(double newweight) {
	weight = (newweight > 0) ? newweight : 0;
}
void Bmi::setheight(double newheight) {
	height = (newheight > 0) ? newheight : 0;
}
void Bmi::setname(string newname) {
	name = newname;
}

void Bmi::getname() {
	cout << name;
}