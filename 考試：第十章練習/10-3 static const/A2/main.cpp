#include<iostream>
#include<stdio.h>
#include "Rectangle.h"
using namespace std;

int main() {
	int a, b;
	Rectangle ex;
	for (int i = 1; i <= 3; i++) {
		cin >> a >> b;
		ex.setWL(a, b);
		ex.getLength();
		//cout << ex.getArea() << endl;
		printf("%.0f\n", ex.getArea());
	}
	ex.getnum();
	printf("Rectangles");
	system("pause");
}