#include "Cube.h"
#include <iostream>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

    Cube::Cube(){
        length = 0;
    }
    Cube::Cube(double length){
        this->length = length;
    }
    Cube::Cube(double length, const string& color, bool filled){
        this->length = length;
        setColor(color);
        setFilled(filled);
    }
    double Cube::getLength() const{
        return length;
    }
    void Cube::setLength(double length){
        this->length = length;
    }
    double Cube::getArea() const{
        return 6 * pow(length,2);
    }
    double Cube::getVolume()const{
        return pow(length,3);
    }
    string Cube::toString() const{
        stringstream ss;
        ss << fixed << setprecision(1) << "Cube\nlength:" << length << ", area:" << getArea() << ", volume:" << getVolume() << ", color:" << getColor() << endl;
        return ss.str();
    }