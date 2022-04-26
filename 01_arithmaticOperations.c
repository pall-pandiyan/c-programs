#include<stdio.h>

int main() {
    printf("Enter two integers!:\n");
    int a,b,sum,subtract,multiple;
    float divide;
    scanf("%d %d", &a,&b);

    sum = a + b;
    subtract = a - b;
    multiple = a * b;
    divide = a / (float) b;

    printf("Sum = %d\n", sum);
    printf("Subtract = %d\n", subtract);
    printf("Muliple = %d\n", multiple);
    printf("Divide = %f\n", divide);
    return 0;
}

// the output will be...

// Enter two integers!:
// 5 6
// Sum = 11
// Subtract = -1
// Muliple = 30
// Divide = 0.833333