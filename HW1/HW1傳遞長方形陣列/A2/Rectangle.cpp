#include "Rectangle.h"
#include <iostream>
using namespace std;
    int Rectangle::count_rectangle=0;

    Rectangle::Rectangle(){
        width=87;
        height=87;
        count_rectangle++;
    }

    Rectangle::Rectangle(int width,int height){
        this -> width = (width >0 )? width : 87;
        this -> height = (height >0 )? height : 87;
        count_rectangle++;
    }
    
    void Rectangle::setwidth(int width){
        this -> width = (width >0 )? width : 87;
    }

    void Rectangle::setheight(int height){
        this -> height = (height >0 )? height : 87;
    }

    int Rectangle::getwidth()const{
        return width;
    }

    int Rectangle::getheight()const{
        return height;
    }

    double Rectangle::getArea()const{
        return width*height;
    }

    int Rectangle::get_count_rectangle(){
        return count_rectangle;
    }