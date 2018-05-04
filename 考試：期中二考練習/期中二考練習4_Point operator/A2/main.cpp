#include <stdio.h>
#include "Point.h"
using namespace std;

int main() {
	Point c[3];
	int a, b;
	for (int i = 0; i < 3; i++) {
		cin >> a >> b;
		c[i].seta_b(a, b);
	}
	cout << c[0].toString() << "+" << c[1].toString() << "-" << c[2].toString() << "=";
	// 	c[0] = c[0] + c[1];
	cout << c[0] + c[1] - c[2] << endl;
}
