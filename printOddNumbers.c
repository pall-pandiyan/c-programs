// this program will print odd numbers within 1..100

#include<stdio.h>
int main() {
    int start=1;
    int end=100;
    for(int i=start; i<end; i=i+2) {
        printf("%d ",i);
    }
    printf("\n");
    return 1;
}

// the output will be..
// 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39 41 43 45 47 49 51 53 55 57 59 61 63 65 67 69 71 73 75 77 79 81 83 85 87 89 91 93 95 97 99