#include <iostream>
#include<iomanip>
using namespace std;



int main() {
    char a[50];
    int b,c,d;
    double ave;
    cin >> a;
    cin >> b >> c >> d;
    ave=(b+c+d)/3.0;
    cout << a << " ";
    cout << fixed << setprecision(1) << ave;
}
