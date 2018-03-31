#include<string>
#include<stdio.h>
#include<iostream>
#include"Date.h"
#include"Student.h"
using namespace std;

int main(){
    string name;
    int a,b,c;
    Student stu[2];
    Date ex[2];
    stu[0].setName("John");
    ex[0].setDate(3,25,1990);
    stu[0].setScore(90);
    stu[1].setName("Mary");
    ex[1].setDate(12,1,1993);
    stu[1].setScore(80);
    cin >> name >> a >> b >> c;
    stu[0].setName(name);
    ex[1].setDate(a,b,c);
    stu[0].getName();
    stu[0].print(ex[0]);
    stu[1].getName();
    stu[1].print(ex[1]);
}