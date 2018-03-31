#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Date.h"
using namespace std;

class Student{
    public:
    Student();

    void setName(string);
    
    void setScore(int score);

    void getName()const;

    void getScore()const;

    void print(Date)const;

    // void toString();

private:
    string name;
    int score;
};

#endif