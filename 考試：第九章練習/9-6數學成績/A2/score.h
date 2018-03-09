#ifndef SCORE_H
#define SCORE_H 
#include <string>
using namespace std;
class Math
{
public:

	Math();

	void setscore(int);

	void setname(string);

	void getscore();

	void getname();
	
private:
	string name;
	int score;
};
#endif