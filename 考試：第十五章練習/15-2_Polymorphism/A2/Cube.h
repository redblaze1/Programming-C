#ifndef CUBE_H
#define CUBE_H
#include "GeometricObject.h"
using namespace std;

class Cube: public GeometricObject{
public:
    Cube();
    Cube(double);
    Cube(double , const string& color, bool filled);
    double getLength() const;
    void setLength(double);
    double getArea() const;
    double getVolume()const;
    string toString() const;
private:
    double length;
};
#endif