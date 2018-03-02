#include <bits/stdc++.h>
#include <stdexcept>

class Rectangle {
    private:
    double width, height;
    public:
    Rectangle(double width, double height){
        this->width = width;
        this->height = height;
    }
    double getWidth(){
        return width;
    }
    double getHeight(){
        return height;
    }
    void setWidth(double width){
        if (width > 0){
            this->width = width;
        }else{
            throw std::invalid_argument("new width value <= 0");
        }
    }
    void setHeight(double height){
        if (height > 0){
            this->height = height;
        }else{
            throw std::invalid_argument("new height value <= 0");
        }
    }
    double getArea(){
        return width * height;
    }
    double getPerimeter(){
        return (width + height) * 2.0;
    }
};

