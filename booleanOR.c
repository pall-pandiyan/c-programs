// this c program demonstrate how boolean OR (||) operation runs only once
// if the first condition is true, the remaining comparision simply not executed

#include<stdio.h>
int f1 (int a, int b) {
    if (a > b) {
        printf("A is greater than B\n");
        return 1;
    }
    else {
        printf("B is greater than A");
        return 0;
    }
}

void main() {
    if (f1(20,10) || f1(10,20)) {
        printf("C is fun!\n");
    }
}

// the output will be..
// A is greater than B
// C is fun!
