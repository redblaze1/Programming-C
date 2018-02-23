#include <iostream>

using namespace std;

int main() {
	int count=0,a=4;
	while (a<=97){
		if (a%3==0 || a%5==0)
		count++;
		a++;
	}
	cout << count;
}
