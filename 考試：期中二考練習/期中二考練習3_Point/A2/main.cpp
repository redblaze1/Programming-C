#include "Point.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    Point c[3];
    int a,b;
    for(int i=0;i<3;i++){
        cin >> a >> b;
        c[i].seta_b(a,b);
    }
    cout << c[0].toString() << "+" << c[1].toString() << "-" << c[2].toString() << "=";
    c[0].add(c[1]);
    c[0].subtract(c[2]);
    cout << c[0].toString() << endl;
}