#include "GeometricObject.h"
#include"Ball.h"
#include"Cube.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

void display(GeometricObject& g)
{

	cout << fixed << setprecision(1) << ",area:" << g.getArea() << ", volume:" << g.getVolume() << ",color:" << g.getColor()<<endl;

}
int main()
{
	double x;
	string y;
	cin >> x;
	cin >> y;
	Ball ball(x,y);
	cin >> x;
	cin >> y;
	Cube cube(x,y);
	cout << "Ball"<<endl;
	cout << "radius:" << fixed << setprecision(1) << ball.getRadius();
	display(ball);
	cout << "Cube" << endl;
	cout << "length:" << cube.getlength();
	display(cube);
	
	system("pause");

}