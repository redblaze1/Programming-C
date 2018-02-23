#include <bits/stdc++.h>

using namespace std;

const int numbers[] = {3, 5, 7, 2, 4, 8, 6};
const int size = 7;

int ls(int n){
    for (int i = 0 ; i < size; i++)
        if(numbers[i] == n)
            return i;
    return -1;
}

int main() {
    int n;
    while(cin>>n)
        cout<<ls(n)<<endl;
}
