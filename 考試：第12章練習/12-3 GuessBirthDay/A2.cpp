#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector<vector<vector<int> > > date(5,vector<vector<int> >(4,vector<int>(4)));
    int day = 0; // Day to be determined
    char answer;
    
    date[0][0][0] = 1;  date[0][0][1] = 3;  date[0][0][2] = 5; date[0][0][3] = 7;
    date[0][1][0] = 9;  date[0][1][1] = 11;  date[0][1][2] = 13; date[0][1][3] = 15;
    date[0][2][0] = 17;  date[0][2][1] = 19;  date[0][2][2] = 21; date[0][2][3] = 23;
    date[0][3][0] = 25;  date[0][3][1] = 27;  date[0][3][2] = 29; date[0][3][3] = 31;
    date[1][0][0] = 2;  date[1][0][1] = 3;  date[1][0][2] = 6; date[1][0][3] = 7;
    date[1][1][0] = 10;  date[1][1][1] = 11;  date[1][1][2] = 14; date[1][1][3] = 15;
    date[1][2][0] = 18;  date[1][2][1] = 19;  date[1][2][2] = 22; date[1][2][3] = 23;
    date[1][3][0] = 26;  date[1][3][1] = 27;  date[1][3][2] = 30; date[1][3][3] = 31;
    date[2][0][0] = 4;  date[2][0][1] = 5;  date[2][0][2] = 6; date[2][0][3] = 7;
    date[2][1][0] = 12;  date[2][1][1] = 13;  date[2][1][2] = 14; date[2][1][3] = 15;
    date[2][2][0] = 20;  date[2][2][1] = 21;  date[2][2][2] = 22; date[2][2][3] = 23;
    date[2][3][0] = 28;  date[2][3][1] = 29;  date[2][3][2] = 30; date[2][3][3] = 31;
    date[3][0][0] = 8;  date[3][0][1] = 9;  date[3][0][2] = 10; date[3][0][3] = 11;
    date[3][1][0] = 12;  date[3][1][1] = 13;  date[3][1][2] = 14; date[3][1][3] = 15;
    date[3][2][0] = 24;  date[3][2][1] = 25;  date[3][2][2] = 26; date[3][2][3] = 27;
    date[3][3][0] = 28;  date[3][3][1] = 29;  date[3][3][2] = 30; date[3][3][3] = 31;
    date[4][0][0] = 16;  date[4][0][1] = 17;  date[4][0][2] = 18; date[4][0][3] = 19;
    date[4][1][0] = 20;  date[4][1][1] = 21;  date[4][1][2] = 22; date[4][1][3] = 23;
    date[4][2][0] = 24;  date[4][2][1] = 25;  date[4][2][2] = 26; date[4][2][3] = 27;
    date[4][3][0] = 28;  date[4][3][1] = 29;  date[4][3][2] = 30; date[4][3][3] = 31;

    // int dates[5][4][4] = {
    // {{ 1, 3, 5, 7},
    // { 9, 11, 13, 15},
    // {17, 19, 21, 23},
    // {25, 27, 29, 31}},
    // {{ 2, 3, 6, 7},
    // {10, 11, 14, 15},
    // {18, 19, 22, 23},
    // {26, 27, 30, 31}},
    // {{ 4, 5, 6, 7},
    // {12, 13, 14, 15},
    // {20, 21, 22, 23},
    // {28, 29, 30, 31}},
    // {{ 8, 9, 10, 11},
    // {12, 13, 14, 15},
    // {24, 25, 26, 27},
    // {28, 29, 30, 31}},
    // {{16, 17, 18, 19},
    // {20, 21, 22, 23},
    // {24, 25, 26, 27},
    // {28, 29, 30, 31}}};

    for (int i = 0; i < 5; i++){
        cout << "Is your birthday in Set" << (i + 1) << "?" << endl;
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++)
                cout << setw(3) << date[i][j][k] << " ";
        cout << endl;
    }
    cout << "\nEnter N for No and Y for Yes: ";
    cin >> answer;
    if (answer == 'Y' || answer == 'y')
    day += date[i][0][0];
    }
    cout << "Your birthday is " << day << endl;

    return 0;
}