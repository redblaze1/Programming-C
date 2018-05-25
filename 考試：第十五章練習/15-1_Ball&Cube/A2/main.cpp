#include "Ball.h"
#include "Cube.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    double a;
    string b;
        cin >> a >> b;
        Ball ba(a,b,0);
        cin >> a >> b;
        Cube cu(a,b,0);

    cout << ba.toString() << cu.toString();
}