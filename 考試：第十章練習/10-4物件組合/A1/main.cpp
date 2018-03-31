#include<string>
#include<stdio.h>
#include<iostream>
#include"Date.h"
#include"Student.h"
using namespace std;

int main(){
    string name;
    int month, day , year;
    Student stu1, stu2;
    stu1.setName("John");
    stu1.setDate(1990 ,3 , 25);
    stu1.setScore(90);
    stu2.setName("Mary");
    stu2.setDate(12,1,1993);
    stu2.setScore(80);
    cin >> name >> month >> day >> year;
    stu1.setName(name);
    stu2.setDate(year , month, day);
    stu1.getName();
    stu1.print();
    stu2.getName();
    stu2.print();
}
