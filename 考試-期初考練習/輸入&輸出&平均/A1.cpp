#include <bits/stdc++.h>

using namespace std;

int main() {
    string name;
    int a, b, c;
    while(cin>>name>>a>>b>>c)
        cout<<name<<" "<<setprecision(1)<<fixed<<(a+b+c)/3.0<<endl;
}
