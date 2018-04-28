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
    //I am too lazy to write class....,but that can't do because must be calculate class aver....
    // cout << "Jerry, 1, 80.0, 70.0, 90.0, 3/20/1997" << endl;
    // cout << "John, 1, 85.0, 77.0, 95.0, 5/20/1995" << endl;
    // cout << "Mary, 0, 83.0, 75.0, 70.0, 2/18/2007" << endl;
    // cout << "Tom, 1, 73.0, 95.0, 67.0, 11/8/2003" << endl;
    string name;
    bool sex;
    int month,date,year;
    Stucard st[5];

    double score[3] = {80.0, 70.0, 90.0};
    Date stdate(3, 20, 1997);
    st[0].setDate(stdate); st[0].setName("Jerry"); st[0].setSex(1); st[0].setScore(3,score);
    // Stucard st1("Jerry",1,score,stdate);

    score[0] = 85.0; score[1] = 77.0; score[2] = 95.0;
    stdate.setDate(5, 20, 1995);
    st[1].setDate(stdate); st[1].setName("John"); st[1].setSex(1); st[1].setScore(3,score);
    // Stucard st2("John",1,score,stdate);

    score[0] = 83.0; score[1] = 75.0; score[2] = 70.0;
    stdate.setDate(2, 18, 2007);
    st[2].setDate(stdate); st[2].setName("Mary"); st[2].setSex(0); st[2].setScore(3,score);
    // Stucard st3("Mary",0,score,stdate);

    score[0] = 73.0; score[1] = 95.0; score[2] = 67.0;
    stdate.setDate(11, 8, 2003);
    st[3].setDate(stdate); st[3].setName("Tom"); st[3].setSex(1); st[3].setScore(3,score);
    // Stucard st4("Tom",1,score,stdate);

    cin >> name >> sex;
    for( int i = 0; i < 3; i++)
    cin >> score[i];
    cin >> month >> date >> year;
    
    stdate.setDate(month, date, year);
    st[4].setDate(stdate); st[4].setName(name); st[4].setSex(sex); st[4].setScore(3,score);
    
    for(int i = 0; i < 5; i++ )
    st[i].printCard();
    double *aves = classAver(st,5);
    printf("Average: %.1f, %.1f, %.1f\n", aves[0], aves[1], aves[2]);
    
    }
