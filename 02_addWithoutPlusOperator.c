#include<stdio.h>

int main() {
    printf("Please enter two numbers: ");
    int a,b,sum;
    scanf("%d %d",&a,&b);
    printf("A is %d\n", a);
    printf("B is %d\n", b);
    sum = (a - ~b) -1;
    printf("\nSum = %d\n", sum); 
    return 0;
}

// the output will be...

// Please enter two numbers: 105 215
// A is 105
// B is 215

// Sum = 320