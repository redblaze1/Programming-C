#ifndef POINT_H
#define POINT_H
#include<string>
using namespace std;

class Point{
   
    public:

    Point();

    Point(int,int);

    void seta_b(int,int);

    int geta();
    
    int getb();

    void add(Point);

    void subtract(Point);
    
    std::string toString();

    private:
    
    int a,b;
};
#endif