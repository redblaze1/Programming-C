#include <iostream>
#include <stdio.h>
#include <math.h>
#include <sstream>
#include <iomanip>
#include "Ball.h"
using namespace std;

    Ball::Ball(){
        radius = 0;
    }
    Ball::Ball(double radius){
        this->radius = radius;
    }
    Ball::Ball(double radius, const string& color, bool filled){
        this->radius = radius;
        setColor(color);
        setFilled(filled);
    }
    double Ball::getRadius() const{
        return radius;
    }
    void Ball::setRadius(double radius){
        this->radius = radius;
    }
    double Ball::getArea() const{
        return 4 * 3.1416 * pow(radius,2);
    }
    double Ball::getVolume()const{
        return 3.1416 * pow(radius,3) * 4 / 3;
    }
    string Ball::toString() const{
        stringstream ss;
        ss << fixed << setprecision(1) << "Ball\n" << "radius:" << radius << ", area:" << getArea() << ", volume:" << getVolume() << ", color:" << getColor() << endl;
        return ss.str();
    }