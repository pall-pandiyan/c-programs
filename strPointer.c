// pointer to string will point its [0] (char in 0th place).
// every time we increment the pointer, the value it points also
// incremented by its index.
// if we want to access the string value without modifing pointer
// we can use '*p+i' in for loop.

#include<stdio.h>
void main() {
    char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;
    for (i=0;i<5;i++) *p++;
    printf("Pointer p after loop: %c\n",*p);
}

// the output will be..
// Pointer p after loop: F
