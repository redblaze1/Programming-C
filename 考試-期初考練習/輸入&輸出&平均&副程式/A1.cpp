#include <bits/stdc++.h>

using namespace std;

double aver(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main() {
    string name;
    int a, b, c;
    while(cin>>name>>a>>b>>c)
        cout<<name<<" "<<setprecision(1)<<fixed<<aver(a,b,c)<<endl;
}
