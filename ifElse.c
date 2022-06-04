// in this program we use if without '{' and '}' (curly brackets)
// so the segmentation of if statement is not clearly stated.
// the below 'else' statement is for its immediate if (the second one)
// in this particular program 'a>b' is false, so the whole 'if.. else'
// statement completly skiped.

#include<stdio.h>
void main() {
    int a=1, b=2, c=3, d=4;
    int x = a;
    if (a>b)
    if (b<c) x=b;
    else x=c;
    printf("x is %d",x);
}

// the output will be..
// x is 1
