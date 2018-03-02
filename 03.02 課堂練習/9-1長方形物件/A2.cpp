#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

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

int main(){
    double w, h;
    cin>>w>>h;
    Rectangle r1(w,h);
    cin>>w>>h;
    Rectangle r2(w,h);
    cout<<setprecision(2)<<fixed<<r1.getArea()<<" "<<r1.getPerimeter()<<endl;
    cout<<setprecision(2)<<fixed<<r2.getArea()<<" "<<r2.getPerimeter()<<endl;
    r2.setWidth(2.5);
    r2.setHeight(5.0);
    cout<<setprecision(2)<<fixed<<r2.getArea()<<" "<<r2.getPerimeter()<<endl;

}
