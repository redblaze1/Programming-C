#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

double stuAve(vector<vector<double> > score,int size,int size2){
    return (score[size][size2-2]+score[size][size2-1]+score[size][size2])/3.0;
}
int main(){
    vector<vector<double> > score(5,vector<double>(3));
    score[0][0] = 80.0; score[0][1] = 70.0; score[0][2] = 90.0;
    score[1][0] = 85.0; score[1][1] = 77.0; score[1][2] = 95.0;
    score[2][0] = 83.0; score[2][1] = 75.0; score[2][2] = 70.0;
    score[3][0] = 73.0; score[3][1] = 95.0; score[3][2] = 67.0;
    score[4][0] = 88.0; score[4][1] = 79.0; score[4][2] = 71.0;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<3;j++){
            printf(" %.1f,",score[i][j]);
            if (j == 2)
            printf(" %.1f",stuAve(score,i,j));
        }
        // cout << " " << score[i][j] << ",";
        if(i == 4)
            printf("\n Average: %.1f, %.1f, %.1f",(score[i][0]+score[i-1][0]+score[i-2][0]+score[i-3][0]+score[i-4][0])/5.0, (score[i][1]+score[i-1][1]+score[i-2][1]+score[i-3][1]+score[i-4][1])/5.0,(score[i][2]+score[i-1][2]+score[i-2][2]+score[i-3][2]+score[i-4][2])/5.0);
        cout << endl;
    }
    
}
// 80.0, 70.0, 90.0, 80.0
// 85.0, 77.0, 95.0, 85.7
// 83.0, 75.0, 70.0, 76.0
// 73.0, 95.0, 67.0, 78.3
// 88.0, 79.0, 71.0, 79.3
// Average: 81.8, 79.2, 78.6