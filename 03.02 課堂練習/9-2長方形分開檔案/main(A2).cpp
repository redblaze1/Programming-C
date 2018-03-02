#include "Rectangle.h"
using namespace std;
#include <iostream>
#include <iomanip>
int main()
{
  double a,b;
  cin >> a >> b;
  Rectangle rec1(a,b);
  cout << fixed << setprecision(2) << rec1.getArea() << " " << rec1.getPerimeter() << endl;
  cin >> a >> b;
  Rectangle rec2(a,b);
  cout << fixed << setprecision(2) << rec2.getArea() << " " << rec2.getPerimeter() << endl;
  a=5.0;
  b=2.5;
  Rectangle rec3(a,b);
  cout << fixed << setprecision(2) <<rec3.getArea() << " " << rec3.getPerimeter() << endl;
  return 0;
}
