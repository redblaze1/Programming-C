#include<iostream>
using namespace std;
int main (){
	int a[7]={3, 5, 7, 2, 4, 8, 6};
	int count=0,b;
	cin >> b;
	for(int i=0;i<=6;i++){
		if(a[i]==b)
		break;
		count++;
	}
	cout << count;
}

