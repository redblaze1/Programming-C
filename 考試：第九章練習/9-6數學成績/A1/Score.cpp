#include <bits/stdc++.h>
#include "Score.h"
Score::Score(std::string name, int score){
    this->name = name;
    this->score = score;
}
void Score::show(){
    std::cout<<name<<" "<<score<<std::endl;
}
