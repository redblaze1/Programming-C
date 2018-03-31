#include <string>
#include <stdio.h>
#include "Student.h"
#include <iostream>
#include "Date.h"
#include<sstream>
using namespace std;
    Student::Student(){
        name="87";
        score=87;
    }

    void Student::setName(string name){
        this->name = name;
    }
    
    void Student::setScore(int score){
        this->score = (score>0)?score:87;
    }

    void Student::getName()const{
        cout << name << " ";
    }

    void Student::getScore()const{
        printf("%d ",score);
    }

    // string Student::toString(){
    //     stringstream ss;
    //     ss<<date<<"/"<<month<<"/"<<year;
    //     return ss.str();
    // }

    void Student::print(Date date)const{
        cout << date.toString();
        printf(" %d\n",score);
        // printf("%s", date.toString().c_str());
    }
