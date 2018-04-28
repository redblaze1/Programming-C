#include "StuCard.h"
#include <iostream>
#include <stdio.h>
using namespace std;

//I don't want to use this fuction....,but I still write for reference 
double* classAver(Stucard st[], int size){
    double *avescore= new double[3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < size; j++)
        avescore[i] += st[j].getScore(i);
        avescore[i] /= size;
    }
    return avescore;
}

double classAver(Stucard st1, Stucard st2, Stucard st3, Stucard st4, Stucard st5,const int numscore){
    double avescore;
    avescore = st1.getScore(numscore) + st2.getScore(numscore) + st3.getScore(numscore) + st4.getScore(numscore) + st5.getScore(numscore);
    return avescore/5.0;
}

int main(){
    //I am too lazy to write class....,but it can't do because must be calculate class aver....
    // cout << "Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997" << endl;
    // cout << "John, 1, 85.0, 77.0, 95.0, 5/20/1995" << endl;
    // cout << "Mary, 0, 83.0, 75.0, 70.0, 2/18/2007" << endl;
    // cout << "Tom, 1, 73.0, 95.0, 67.0, 11/8/2003" << endl;
    string name;
    bool sex;
    int month,date,year;

    double score[3] = {80.0, 70.0, 90.0};
    Date stdate(3, 20, 1997);
    Stucard st1("Jerry",1,score,stdate);

    score[0] = 85.0; score[1] = 77.0; score[2] = 95.0;
    stdate.setDate(5, 20, 1995);
    Stucard st2("John",1,score,stdate);

    score[0] = 83.0; score[1] = 75.0; score[2] = 70.0;
    stdate.setDate(2, 18, 2007);
    Stucard st3("Mary",0,score,stdate);

    score[0] = 73.0; score[1] = 95.0; score[2] = 67.0;
    stdate.setDate(11, 8, 2003);
    Stucard st4("Tom",1,score,stdate);

    cin >> name >> sex;
    for( int i = 0; i < 3; i++)
    cin >> score[i];
    cin >> month >> date >> year;
    
    stdate.setDate(month, date, year);
    Stucard st5(name,sex,score,stdate);

    st1.printCard();
    st2.printCard();
    st3.printCard();
    st4.printCard();
    st5.printCard();

    printf("Average: %.1f, %.1f, %.1f\n", classAver(st1,st2,st3,st4,st5,0), classAver(st1,st2,st3,st4,st5,1), classAver(st1,st2,st3,st4,st5,2));
}