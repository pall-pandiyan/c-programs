// this program will print multiples of 6 within 1..100

#include<stdio.h>

int main() {
    int end = 100;
    int mul = 6;

    for(int i=mul; i<end; i+=mul) {
        printf("%d ",i);
    }

    printf("\n");
    return 1;
}

// the output will be..
// 6 12 18 24 30 36 42 48 54 60 66 72 78 84 90 96
