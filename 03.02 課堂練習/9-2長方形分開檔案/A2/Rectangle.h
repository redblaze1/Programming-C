#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
    private:
    double width, height;
    public:
    Rectangle(double width, double height);
    double getWidth();
    double getHeight();
    void setWidth(double width);
    void setHeight(double height);
    double getArea();
    double getPerimeter();
};
#endif // RECTANGLE_H_INCLUDED
