#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int i = 4;
    while(i < 98){
        if (i % 3 == 0 || i % 5 == 0)
            count++;
        i++;
    }
    cout<<count<<endl;
}
