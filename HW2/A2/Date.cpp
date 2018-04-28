#include<string>
#include<stdio.h>
#include<iostream>
#include"Date.h"
#include<sstream>
using namespace std;

    Date::Date(){
        month=1;
        year=1997;
        date=1;
    }
    Date::Date(int month, int date, int year){
        this->year = (year<2019)?year:1997;

        this->month = (month > 0 && month < 13)?month:1;

        this->date = (date > 0 && date < 32 )?date:1;
    }

    void Date::setDate(int month,int date,int year){
        this->year = (year<2019)?year:1997;

        this->month = (month > 0 && month < 13)?month:1;

        this->date = (date > 0 && date < 32 )?date:1;
    }
    string Date::toString(){
        stringstream ss;
        // cout << date << "/sss" << month << "/"<< year;
        ss<< month <<"/" << date << "/"<< year;
        return ss.str();
}

    int Date::getYear(){
        return year;
    }