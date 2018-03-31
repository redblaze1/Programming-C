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

    string Student::getName()const{
        return name;
    }

    void Student::setScore(int score){
        this->score = (score>0) ? score : 87;
    }

    int Student::getScore()const{
        return score;
    }
    
    void Student::setDate(int y, int m, int d){
    	birthday.setDate(y, m ,d);
    }
    
	string Student::getDate(){
		return birthday.toString();
	}
	
    string Student::toString() {
        stringstream ss;
        ss<< getName() <<" "<< getDate() << " " << getScore() << endl;
        return ss.str();
    }

    void Student::print(){
        cout << toString();
    }
