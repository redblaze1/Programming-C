#include <bits/stdc++.h>

using namespace std;

double getAns(){
    return (pow(((rand()%6)+1),2) + pow(((rand()%6)+1),2)) / 2.0;
}

int main() {
    srand( time( 0 ) );
    for (int i = 0; i < 10; i++)
        cout<<setprecision(1)<<fixed<<getAns()<<endl;
}
