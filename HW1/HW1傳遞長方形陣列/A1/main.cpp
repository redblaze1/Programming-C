#include <bits/stdc++.h>
#include "Rectangle.h"
using namespace std;

int main(int argc, char** argv) {
	int size = 5;
	
	Rectangle** rs = new Rectangle*[size];
	
	for (int i = 0 ; i < size; i++) {
		double w, h;
		cin >> w >> h;
		*( rs + i ) = new Rectangle(w, h);
	}
	
	for (int i = 0 ; i < size; i++) {
		cout<< (*(rs + i))->getArea() << " ";
	}
	
	cout<< endl <<"Total: " << Rectangle::amount << " rectangles " << endl << "Area: " << Rectangle::sum() << endl;
	
	return 0;
}
