#include <bits/stdc++.h>
#include "BMI.h"
BMI::BMI(std::string name, double width, double height){
    this->name = name;
    this->width = width;
    this->height = height;
}
void BMI::show(){
    std::cout<<std::setprecision(2)<<std::fixed<<name<<" "<<width/height/height<<std::endl;
}
