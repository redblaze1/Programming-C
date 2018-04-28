#ifndef STUCARD_H
#define STUCARD_H
#include <string>
#include "Date.h"
using namespace std;
class Stucard{
    public:
    Stucard();

    Stucard(string,bool,double[],Date);

    void setName(string);

    void setSex(bool);

    void setScore(int,double[]);

    void setData(int,int,int);

    void setDate(Date);

    string getName();

    bool getSex();

    double getScore(int);

    Date getDate();

    double average();

    int getAge(int);

    void printCard();
    
// average(): double計算三科平均
// getAge(int): int 計算年紀 (只看年不考慮月日)
// printCard(): void列印個人資料如下：
// Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997, aver:80.0, age: 20

    private:
    
    string name;
    bool sex;
    double scoreAry[3];
    Date birthDay;
};

#endif