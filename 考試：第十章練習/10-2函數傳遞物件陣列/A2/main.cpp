#include<iostream>
#include "Rectangle.h"
using namespace std;


double sum(Rectangle circleArray[], int size) {
	// Initialize sum
	double sum = 0;

	// Add areas to sum
	for (int i = 0; i < size; i++)
		sum += circleArray[i].getArea();
	return sum;
}

int main() {
	Rectangle ex[4];
	for (int i=0,a=0,b = 0; i < 4; i++) {
		cin >> a >> b;
		ex[i].setW(a);
		ex[i].setL(b);
		cout << a << " " << b << " " << ex[i].getArea() << endl;
	}
	cout << "Total: " << sum(ex,4);
}
