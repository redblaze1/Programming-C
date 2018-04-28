#include<iostream>
#include<stdio.h>
#include"StuCard.h"
    
    #define male 1
    #define female 0

    Stucard::Stucard(){
    name = "87";
    sex = female;
    scoreAry[1] = 87;
    scoreAry[2] = 87;
    scoreAry[0] = 87;
    birthDay;
    }

    Stucard::Stucard(string name,bool sex,double scoreAry[],Date birthday){
        this->name = name;
        this->sex = sex;
        for (int i=0;i<3;i++)
        this->scoreAry[i] = (scoreAry[i] > 0)? scoreAry[i] : 87;
        this->birthDay = birthday;
    }

    void Stucard::setName(string name){
        this->name = name;
    }

    void Stucard::setSex(bool sex){
        this->sex = sex;
    }

    void Stucard::setScore(int size,double scoreAry[]){
        for (int i = 0; i < size; i++)
        this->scoreAry[i] = (scoreAry[i] > 0)? scoreAry[i] : 87;
    }

    void Stucard::setData(int month,int date,int year){
        this->birthDay.setDate(month,date,year);
    }

    void Stucard::setDate(Date bir){
        this->birthDay = bir;
    }

    string Stucard::getName(){
        return name;
    }

    bool Stucard::getSex(){
        return sex;
    }

    double Stucard::getScore(const int count){
        return this->scoreAry[count];
    }

    Date Stucard::getDate(){
        return this->birthDay;
    }

    double Stucard::average(){
        double count;
        for(int i=0;i<3;i++)
        count+=scoreAry[i];
        return count/3.0;
    }

    int Stucard::getAge(int year){
        return year-birthDay.getYear();
    }

    void Stucard::printCard(){
        cout << this->name << ",";
        printf(" %d, %.1f, %.1f, %.1f, ",this->sex,this->scoreAry[0],this->scoreAry[1],this->scoreAry[2]);
        cout << birthDay.toString() << ",";
        printf("%.1f, %d\n", average(),getAge(2018));
        // Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, aver:80.0, age: 20
    }