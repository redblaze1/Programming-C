#include "ImproveStack.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    char a,b,c,d;
    // Create a stack of strings
    Stack<char> stringStack;
    string input;
    cin >> input;
    const char *cstr = input.c_str();
    int size=strlen(cstr);

    for(int i = 0; i < size; i++)
    stringStack.push(cstr[i]);
    // while (!stringStack.empty()){
    for(int i=1;i<=size/3+1;i++){
        // cout << stringStack.peek() << endl;    //debug
        a = stringStack.pop()-0x30;
        b = stringStack.pop();
        c = stringStack.pop()-0x30;

        if ( b == '*')
        d = c * a;
        else if ( b == '+')
        d = c + a;
        else if ( b == '-')
        d = c - a;
        else if ( b == '/')
        d = c / a;

        d += 0x30;  //convert d to ascii code

        // printf("test b: %c\n", b);              //debug
        // printf("test c*a: %d%c%d\n", c,b,a);    //debug
        printf("%c\n",d);
        stringStack.push(d);

    }
    return 0;
}
