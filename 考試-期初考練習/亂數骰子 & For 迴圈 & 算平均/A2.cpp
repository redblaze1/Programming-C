#include<iostream>
#include<cstdlib>
#include<ctime>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
	srand(time(NULL));
	double a;
	double b;
	double count=0;
	for(int i=1;i<=10;i++){
		a=pow((rand()%6+1),2);
		Sleep(5);
		b=pow((rand()%6+1),2);
		cout << fixed << setprecision(1) << (a+b)/2.0 << endl;
	}
}
