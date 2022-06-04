#include<stdio.h>

int main() {
    printf("Enter two numbers: ");
    int a,b,subtract;
    scanf("%d %d", &a,&b);
    subtract = a+~b+1;
    printf("Subtract = %d\n", subtract);
    return 0;
}

// the output will be...

// Enter two numbers: 3 5
// Subtract = -2