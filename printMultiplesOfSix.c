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