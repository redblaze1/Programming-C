#include <bits/stdc++.h>
#include "BMI.h"
using namespace std;
int main(){
    string name;
    double w, h;
    cin>>name>>w>>h;
    BMI r1(name,w,h);
    r1.show();
}
