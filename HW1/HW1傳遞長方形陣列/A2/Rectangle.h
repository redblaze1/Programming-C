#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{

public:
    Rectangle();

    Rectangle(int,int);
    
    void setwidth(int);

    void setheight(int);

    int getwidth()const;

    int getheight()const;

    double getArea()const;

    static int get_count_rectangle();

private:
    static int count_rectangle;
    int width;
    int height;
};

#endif