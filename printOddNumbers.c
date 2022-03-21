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