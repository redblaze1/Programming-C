#include <iostream>
#include "BMI.h"
#include <string>
#include <iomanip>
using namespace std;
int main() {
	double a, b;
	string c;
	cin >> c;
	cin >> a >> b;
	Bmi ex;
	ex.setheight(b);
	ex.setweight(a);
	ex.setname(c);
	ex.getname();
	cout << fixed << setprecision(2) << " " << ex.getbmi() << endl;
}