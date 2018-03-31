#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Date.h"
using namespace std;

class Student{
    public:
    Student();

    void setName(string);
    string getName()const;
    
    
    void setScore(int score);
    int getScore()const;

	void setDate(int y, int m, int d);
	string getDate();

	string toString();
    void print();

private:
    string name;
    int score;
    Date birthday;
};

#endif
