#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;
class Date{
    public:

    Date();
    Date(int,int,int);
    void setDate(int,int,int);
    string toString();
    int getYear();

    private:
    int month,year,date;
};

#endif