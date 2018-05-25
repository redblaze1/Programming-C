#ifndef BALL_H
#define BALL_H
#include "GeometricObject.h"
using namespace std;

class Ball: public GeometricObject{
public:
    Ball();
    Ball(double);
    Ball(double , const string& color, bool filled);
    double getRadius() const;
    void setRadius(double);
    double getArea() const;
    double getVolume()const;
    string toString() const;
private:
    double radius;
};
#endif