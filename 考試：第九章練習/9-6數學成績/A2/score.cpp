#include<string>
#include "score.h"
#include <iostream>
using namespace std;

Math::Math() {
	name = "87";
	score = 87;
}
void Math::setscore(int newscore) {
	score = (newscore >= 0) ? newscore : 0;
}
void Math::setname(string newname) {
	name = newname;
}
void Math::getscore() {
	cout << score;
}
void Math::getname() {
	cout << name;
}
