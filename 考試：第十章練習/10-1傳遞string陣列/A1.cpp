#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void printStringArray(string word[], int size){
	for(int i=0;i<size;i++)
		cout << word[i] << endl;
}

int main(){
	string test;
	string text[10];
	getline(cin,test);
	stringstream ss(test);
	int i = 0;
	while(ss)
		ss >> text[i++];
	printStringArray(text, i - 1);
	return 0;
}
