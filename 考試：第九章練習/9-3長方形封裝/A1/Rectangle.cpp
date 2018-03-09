#include <bits/stdc++.h>
#include "Rectangle.h"
#include <stdexcept>
Rectangle::Rectangle(double width, double height){
    this->width = width;
    this->height = height;
}
double Rectangle::getWidth(){
    return width;
}
double Rectangle::getLength(){
    return height;
}
void Rectangle::setWidth(double width){
    if (width > 0){
        this->width = width;
    }else{
        throw std::invalid_argument("new width value <= 0");
    }
}
void Rectangle::setLength(double height){
    if (height > 0){
        this->height = height;
    }else{
        throw std::invalid_argument("new height value <= 0");
    }
}
double Rectangle::getArea(){
    return width * height;
}
double Rectangle::getPerimeter(){
    return (width + height) * 2.0;
}
