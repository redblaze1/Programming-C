#ifndef BMI_H
#define BMI_H 
#include<string>
using namespace std;
class Bmi
{
public:

	Bmi();

	double getbmi();

	void setweight(double);

	void setheight(double);

	void setname(string);

	void getname();

private:
	string name;
	double weight;
	double height;
};
#endif