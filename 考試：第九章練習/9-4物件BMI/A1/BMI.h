#include <bits/stdc++.h>
#ifndef BMI_H
#define BMI_H
class BMI {
    private:
    std::string name;
    double width, height;
    public:
    BMI(std::string name, double width, double height);
    void show();
};
#endif // BMI_H_INCLUDED
