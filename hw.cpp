#include<iostream>
using namespace std;

int main()
{
	int n;
	int k[32];
	int j = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "�п�J�n�ഫ���Ʀr:";
			cin >> n;
		while (n>0)
		{
			k[j] = n % 2;
			
			n/=2;
			j++;
		}
		for(int i=j;i>=0;i--)
		{
			cout<<k[i];
		}
	}
}
