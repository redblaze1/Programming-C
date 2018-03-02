#include <bits/stdc++.h>
#include "Rectangle.h"
using namespace std;
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
