#include<iostream>
#include<stdio.h>
#include "Rectangle.h"
using namespace std;

int sum(Rectangle rectArray[], int size){
    int count=0;
    for(int i=0;i<size;i++){
        count+=rectArray[i].getArea();
    }
    return count;
}

int main(){
    Rectangle *ex=new Rectangle[5];
    int a,b;
    for(int i=0;i<5;i++){
        cin >> a >> b;
        (*(ex+i)).setwidth(a);
        (*(ex+i)).setheight(b);
        cout << (*(ex+i)).getArea() << " ";
    }
    cout << endl;
    cout << "Total: " << (*ex).get_count_rectangle() << " rectangles" << endl;
    cout << "Area: " << sum(ex,5) << endl;
}