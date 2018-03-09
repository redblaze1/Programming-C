#include "score.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a;
	string b;
	Math ex;
	cin >> b;
	cin >> a;
	ex.setname(b);
	ex.setscore(a);
	ex.getname();
	cout << " ";
	ex.getscore();
	cout << endl;
	cin >> b;
	cin >> a;
	ex.setname(b);
	ex.setscore(a);
	ex.getname();
	cout << " ";
	ex.getscore();
}