#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int min(vector<vector<int> > num){
    int mi;
    mi = num[0][0];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if (num[i][j] < mi )
            mi = num[i][j];
        }
    }
    return mi;
} 

int main(){
    vector<vector<int> > num(4,vector<int>(3));

    // num[0][0] = 75; num[0][1] = 55; num[0][2] = 4;
    // num[1][0] = 44; num[1][1] = 31; num[1][2] = 81;
    // num[2][0] = 98; num[2][1] = 75; num[2][2] = 81;
    // num[3][0] = 86; num[3][1] = 54; num[3][2] = 40;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin >> num[i][j];
        }
    }

    cout << "min: " <<min(num) << endl;
}