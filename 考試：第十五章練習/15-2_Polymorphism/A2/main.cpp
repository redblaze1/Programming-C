#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;
void display(GeometricObject &g){
    	cout << fixed << setprecision(1) << ",area:" << g.getArea() << ", volume:" << g.getVolume() << ",color:" << g.getColor()<< endl;
}

int main(){
    double a;
    string b;
        cin >> a >> b;
        Ball ba(a,b,0);
        cin >> a >> b;
        Cube cu(a,b,0);

    cout << "Ball"<< endl << "radius:" << fixed << setprecision(1) << ba.getRadius();
	display(ba);
	cout << "Cube" << endl << "length:" << cu.getLength();
    display(cu);
}