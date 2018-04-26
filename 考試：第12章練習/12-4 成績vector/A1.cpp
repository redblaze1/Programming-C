#include <bits/stdc++.h>
using namespace std;

double init[] = {80.0,70.0,90.0,85.0,77.0,95.0,83.0,75.0,70.0,73.0,95.0,67.0,88.0,79.0,71.0};

double stuAve(vector<double> s) {
    const int size = s.size();
    double sum = 0;
    for (int i = 0 ; i < size; i++) {
        sum += s[i];
        printf("%.1f, ", s[i]);
    }
    printf("%.1f\n", sum/size);
    return sum/size;
}

int main() {
    int s_a = 5, o_a = 3;
    vector<vector<double>> st(s_a, vector<double>(o_a));
    vector<double> score_avg(o_a,0);
    
    for (int i = 0 ; i < s_a * o_a; i++){
        st[i/o_a][i%o_a] = init[i];
        score_avg[i%o_a] += init[i];
    }
    for(int i = 0; i < o_a; i++)
        score_avg[i] /= s_a;
    
    for (int i = 0; i < s_a; i++)
        stuAve(st[i]);
    
    printf("Average: %.1f, %.1f, %.1f\n", score_avg[0], score_avg[1], score_avg[2]);
    
}