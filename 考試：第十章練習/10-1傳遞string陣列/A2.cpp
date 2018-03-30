#include <iostream>
#include <sstream>
#include <string>
using namespace std;
void printStringArray(string word[], int size){
for(int i=0;i<size;i++)
{
cout << word[i] << endl;
}
}

int main()
{
string text[10];
int count=0;
string test;
getline(cin,test);
stringstream ss(test);
for (int i=0;!ss.eof();i++)
{
ss >> text[i];
count++;
}
printStringArray(text,count);
return 0;
}
