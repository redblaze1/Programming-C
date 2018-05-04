#include "Point.h"
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

    Point::Point(){
        a = 0;
        b = 0;
    }

    Point::Point(int a,int b){
        this->a = a;
        this->b = b;
    }

    void Point::seta_b(int a,int b){
        this->a = a;
        this->b = b;
    }
    
    int Point::geta(){
        return a;
    }

    int Point::getb(){
        return b;
    }

    void Point::add(Point p){
        this->a += p.geta();
        this->b += p.getb();
    }

    void Point::subtract(Point p){
        this->a -= p.geta();
        this->b -= p.getb();
    }
    
    string Point::toString(){
        stringstream ss;
        ss << "(" << a << "," << b << ")";
        return ss.str();
    }