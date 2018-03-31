#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;
class Date{
    public:

    Date();

    void setDate(int,int,int);
    string toString();

    private:
    int month,year,date;
};

#endif