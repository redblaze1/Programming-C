#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
    private:
    double width, height;
    public:
    Rectangle(double width, double height);
    double getWidth();
    double getLength();
    void setWidth(double width);
    void setLength(double height);
    double getArea();
    double getPerimeter();
};
#endif // RECTANGLE_H_INCLUDED
